// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPBookmarkEditorBlueprintLibrary.h"
#include "VPBookmarkContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPBookmarkEditorBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VPBookmarkEditor();
	VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmark_NoRegister();
	VPBOOKMARK_API UScriptStruct* Z_Construct_UScriptStruct_FVPBookmarkCreationContext();
	VPBOOKMARKEDITOR_API UClass* Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary();
	VPBOOKMARKEDITOR_API UClass* Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVPBookmarkEditorBlueprintLibrary::execGetAllActorsClassThamImplementsVPBookmarkInterface)
	{
		P_GET_TARRAY_REF(TSubclassOf<AActor> ,Z_Param_Out_OutActorClasses);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPBookmarkEditorBlueprintLibrary::GetAllActorsClassThamImplementsVPBookmarkInterface(Z_Param_Out_OutActorClasses);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBookmarkEditorBlueprintLibrary::execAddBookmarkAtCurrentLevelEditorPosition)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT(FVPBookmarkCreationContext,Z_Param_CreationContext);
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_GET_UBOOL(Z_Param_bFlattenRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UVPBookmarkEditorBlueprintLibrary::AddBookmarkAtCurrentLevelEditorPosition(Z_Param_ActorClass,Z_Param_CreationContext,Z_Param_Offset,Z_Param_bFlattenRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBookmarkEditorBlueprintLibrary::execJumpToBookmarkInLevelEditorByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BookmarkIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPBookmarkEditorBlueprintLibrary::JumpToBookmarkInLevelEditorByIndex(Z_Param_BookmarkIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBookmarkEditorBlueprintLibrary::execJumpToBookmarkInLevelEditor)
	{
		P_GET_OBJECT(UVPBookmark,Z_Param_Bookmark);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPBookmarkEditorBlueprintLibrary::JumpToBookmarkInLevelEditor(Z_Param_Bookmark);
		P_NATIVE_END;
	}
	void UVPBookmarkEditorBlueprintLibrary::StaticRegisterNativesUVPBookmarkEditorBlueprintLibrary()
	{
		UClass* Class = UVPBookmarkEditorBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBookmarkAtCurrentLevelEditorPosition", &UVPBookmarkEditorBlueprintLibrary::execAddBookmarkAtCurrentLevelEditorPosition },
			{ "GetAllActorsClassThamImplementsVPBookmarkInterface", &UVPBookmarkEditorBlueprintLibrary::execGetAllActorsClassThamImplementsVPBookmarkInterface },
			{ "JumpToBookmarkInLevelEditor", &UVPBookmarkEditorBlueprintLibrary::execJumpToBookmarkInLevelEditor },
			{ "JumpToBookmarkInLevelEditorByIndex", &UVPBookmarkEditorBlueprintLibrary::execJumpToBookmarkInLevelEditorByIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics
	{
		struct VPBookmarkEditorBlueprintLibrary_eventAddBookmarkAtCurrentLevelEditorPosition_Parms
		{
			const TSubclassOf<AActor>  ActorClass;
			FVPBookmarkCreationContext CreationContext;
			FVector Offset;
			bool bFlattenRotation;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreationContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreationContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlattenRotation_MetaData[];
#endif
		static void NewProp_bFlattenRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlattenRotation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBookmarkEditorBlueprintLibrary_eventAddBookmarkAtCurrentLevelEditorPosition_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_ActorClass_MetaData), Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_ActorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_CreationContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_CreationContext = { "CreationContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBookmarkEditorBlueprintLibrary_eventAddBookmarkAtCurrentLevelEditorPosition_Parms, CreationContext), Z_Construct_UScriptStruct_FVPBookmarkCreationContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_CreationContext_MetaData), Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_CreationContext_MetaData) }; // 4146862096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBookmarkEditorBlueprintLibrary_eventAddBookmarkAtCurrentLevelEditorPosition_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_Offset_MetaData), Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_Offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_bFlattenRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_bFlattenRotation_SetBit(void* Obj)
	{
		((VPBookmarkEditorBlueprintLibrary_eventAddBookmarkAtCurrentLevelEditorPosition_Parms*)Obj)->bFlattenRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_bFlattenRotation = { "bFlattenRotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VPBookmarkEditorBlueprintLibrary_eventAddBookmarkAtCurrentLevelEditorPosition_Parms), &Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_bFlattenRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_bFlattenRotation_MetaData), Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_bFlattenRotation_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBookmarkEditorBlueprintLibrary_eventAddBookmarkAtCurrentLevelEditorPosition_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_CreationContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_bFlattenRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bookmarks" },
		{ "CPP_Default_bFlattenRotation", "true" },
		{ "ModuleRelativePath", "Public/VPBookmarkEditorBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary, nullptr, "AddBookmarkAtCurrentLevelEditorPosition", nullptr, nullptr, Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::VPBookmarkEditorBlueprintLibrary_eventAddBookmarkAtCurrentLevelEditorPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::VPBookmarkEditorBlueprintLibrary_eventAddBookmarkAtCurrentLevelEditorPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics
	{
		struct VPBookmarkEditorBlueprintLibrary_eventGetAllActorsClassThamImplementsVPBookmarkInterface_Parms
		{
			TArray<TSubclassOf<AActor> > OutActorClasses;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_OutActorClasses_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActorClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::NewProp_OutActorClasses_Inner = { "OutActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::NewProp_OutActorClasses = { "OutActorClasses", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBookmarkEditorBlueprintLibrary_eventGetAllActorsClassThamImplementsVPBookmarkInterface_Parms, OutActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::NewProp_OutActorClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::NewProp_OutActorClasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmarkEditorBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary, nullptr, "GetAllActorsClassThamImplementsVPBookmarkInterface", nullptr, nullptr, Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::VPBookmarkEditorBlueprintLibrary_eventGetAllActorsClassThamImplementsVPBookmarkInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::VPBookmarkEditorBlueprintLibrary_eventGetAllActorsClassThamImplementsVPBookmarkInterface_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics
	{
		struct VPBookmarkEditorBlueprintLibrary_eventJumpToBookmarkInLevelEditor_Parms
		{
			const UVPBookmark* Bookmark;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bookmark_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bookmark;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_Bookmark_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBookmarkEditorBlueprintLibrary_eventJumpToBookmarkInLevelEditor_Parms, Bookmark), Z_Construct_UClass_UVPBookmark_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_Bookmark_MetaData), Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_Bookmark_MetaData) };
	void Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPBookmarkEditorBlueprintLibrary_eventJumpToBookmarkInLevelEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VPBookmarkEditorBlueprintLibrary_eventJumpToBookmarkInLevelEditor_Parms), &Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_Bookmark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmarkEditorBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary, nullptr, "JumpToBookmarkInLevelEditor", nullptr, nullptr, Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::VPBookmarkEditorBlueprintLibrary_eventJumpToBookmarkInLevelEditor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::VPBookmarkEditorBlueprintLibrary_eventJumpToBookmarkInLevelEditor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics
	{
		struct VPBookmarkEditorBlueprintLibrary_eventJumpToBookmarkInLevelEditorByIndex_Parms
		{
			int32 BookmarkIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BookmarkIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::NewProp_BookmarkIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::NewProp_BookmarkIndex = { "BookmarkIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VPBookmarkEditorBlueprintLibrary_eventJumpToBookmarkInLevelEditorByIndex_Parms, BookmarkIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::NewProp_BookmarkIndex_MetaData), Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::NewProp_BookmarkIndex_MetaData) };
	void Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPBookmarkEditorBlueprintLibrary_eventJumpToBookmarkInLevelEditorByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VPBookmarkEditorBlueprintLibrary_eventJumpToBookmarkInLevelEditorByIndex_Parms), &Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::NewProp_BookmarkIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmarkEditorBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary, nullptr, "JumpToBookmarkInLevelEditorByIndex", nullptr, nullptr, Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::VPBookmarkEditorBlueprintLibrary_eventJumpToBookmarkInLevelEditorByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::VPBookmarkEditorBlueprintLibrary_eventJumpToBookmarkInLevelEditorByIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPBookmarkEditorBlueprintLibrary);
	UClass* Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_NoRegister()
	{
		return UVPBookmarkEditorBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VPBookmarkEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_AddBookmarkAtCurrentLevelEditorPosition, "AddBookmarkAtCurrentLevelEditorPosition" }, // 2048741078
		{ &Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_GetAllActorsClassThamImplementsVPBookmarkInterface, "GetAllActorsClassThamImplementsVPBookmarkInterface" }, // 1670625521
		{ &Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditor, "JumpToBookmarkInLevelEditor" }, // 817054702
		{ &Z_Construct_UFunction_UVPBookmarkEditorBlueprintLibrary_JumpToBookmarkInLevelEditorByIndex, "JumpToBookmarkInLevelEditorByIndex" }, // 1649082428
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VPBookmarkEditorBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/VPBookmarkEditorBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPBookmarkEditorBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics::ClassParams = {
		&UVPBookmarkEditorBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UVPBookmarkEditorBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPBookmarkEditorBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPBookmarkEditorBlueprintLibrary.OuterSingleton;
	}
	template<> VPBOOKMARKEDITOR_API UClass* StaticClass<UVPBookmarkEditorBlueprintLibrary>()
	{
		return UVPBookmarkEditorBlueprintLibrary::StaticClass();
	}
	UVPBookmarkEditorBlueprintLibrary::UVPBookmarkEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPBookmarkEditorBlueprintLibrary);
	UVPBookmarkEditorBlueprintLibrary::~UVPBookmarkEditorBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary, UVPBookmarkEditorBlueprintLibrary::StaticClass, TEXT("UVPBookmarkEditorBlueprintLibrary"), &Z_Registration_Info_UClass_UVPBookmarkEditorBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPBookmarkEditorBlueprintLibrary), 3905451914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_1802720572(TEXT("/Script/VPBookmarkEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
