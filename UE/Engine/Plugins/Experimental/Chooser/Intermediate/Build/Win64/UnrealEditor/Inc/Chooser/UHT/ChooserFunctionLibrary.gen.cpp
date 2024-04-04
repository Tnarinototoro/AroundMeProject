// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChooserFunctionLibrary.h"
#include "InstancedStruct.h"
#include "IObjectChooser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChooserFunctionLibrary() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UChooserFunctionLibrary();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserFunctionLibrary_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserTable_NoRegister();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserEvaluationContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	DEFINE_FUNCTION(UChooserFunctionLibrary::execMakeChooserEvaluationContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FChooserEvaluationContext*)Z_Param__Result=UChooserFunctionLibrary::MakeChooserEvaluationContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChooserFunctionLibrary::execMakeEvaluateChooser)
	{
		P_GET_OBJECT(UChooserTable,Z_Param_Chooser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInstancedStruct*)Z_Param__Result=UChooserFunctionLibrary::MakeEvaluateChooser(Z_Param_Chooser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChooserFunctionLibrary::execAddChooserObjectInput)
	{
		P_GET_STRUCT_REF(FChooserEvaluationContext,Z_Param_Out_Context);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UChooserFunctionLibrary::AddChooserObjectInput(Z_Param_Out_Context,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChooserFunctionLibrary::execEvaluateObjectChooserBaseMulti)
	{
		P_GET_STRUCT_REF(FChooserEvaluationContext,Z_Param_Out_Context);
		P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_ObjectChooser);
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_GET_UBOOL(Z_Param_bResultIsClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UChooserFunctionLibrary::EvaluateObjectChooserBaseMulti(Z_Param_Out_Context,Z_Param_Out_ObjectChooser,Z_Param_ObjectClass,Z_Param_bResultIsClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChooserFunctionLibrary::execEvaluateObjectChooserBase)
	{
		P_GET_STRUCT_REF(FChooserEvaluationContext,Z_Param_Out_Context);
		P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_ObjectChooser);
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_GET_UBOOL(Z_Param_bResultIsClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UChooserFunctionLibrary::EvaluateObjectChooserBase(Z_Param_Out_Context,Z_Param_Out_ObjectChooser,Z_Param_ObjectClass,Z_Param_bResultIsClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChooserFunctionLibrary::execEvaluateChooserMulti)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UChooserTable,Z_Param_ChooserTable);
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UChooserFunctionLibrary::EvaluateChooserMulti(Z_Param_ContextObject,Z_Param_ChooserTable,Z_Param_ObjectClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChooserFunctionLibrary::execEvaluateChooser)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UChooserTable,Z_Param_ChooserTable);
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UChooserFunctionLibrary::EvaluateChooser(Z_Param_ContextObject,Z_Param_ChooserTable,Z_Param_ObjectClass);
		P_NATIVE_END;
	}
	void UChooserFunctionLibrary::StaticRegisterNativesUChooserFunctionLibrary()
	{
		UClass* Class = UChooserFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChooserObjectInput", &UChooserFunctionLibrary::execAddChooserObjectInput },
			{ "AddChooserStructInput", &UChooserFunctionLibrary::execAddChooserStructInput },
			{ "EvaluateChooser", &UChooserFunctionLibrary::execEvaluateChooser },
			{ "EvaluateChooserMulti", &UChooserFunctionLibrary::execEvaluateChooserMulti },
			{ "EvaluateObjectChooserBase", &UChooserFunctionLibrary::execEvaluateObjectChooserBase },
			{ "EvaluateObjectChooserBaseMulti", &UChooserFunctionLibrary::execEvaluateObjectChooserBaseMulti },
			{ "GetChooserStructOutput", &UChooserFunctionLibrary::execGetChooserStructOutput },
			{ "MakeChooserEvaluationContext", &UChooserFunctionLibrary::execMakeChooserEvaluationContext },
			{ "MakeEvaluateChooser", &UChooserFunctionLibrary::execMakeEvaluateChooser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics
	{
		struct ChooserFunctionLibrary_eventAddChooserObjectInput_Parms
		{
			FChooserEvaluationContext Context;
			UObject* Object;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventAddChooserObjectInput_Parms, Context), Z_Construct_UScriptStruct_FChooserEvaluationContext, METADATA_PARAMS(0, nullptr) }; // 3923735805
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventAddChooserObjectInput_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/**\n\x09* Add an Object to a ChooserEvaluation context\n\x09*\n\x09* @param Context\x09\x09\x09(in) A struct reference to the chooser evaluation context\n\x09* @param Object\x09\x09\x09\x09(in) The Object to add\n\x09*/" },
		{ "ModuleRelativePath", "Public/ChooserFunctionLibrary.h" },
		{ "ToolTip", "Add an Object to a ChooserEvaluation context\n\n@param Context                        (in) A struct reference to the chooser evaluation context\n@param Object                         (in) The Object to add" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChooserFunctionLibrary, nullptr, "AddChooserObjectInput", nullptr, nullptr, Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::ChooserFunctionLibrary_eventAddChooserObjectInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::ChooserFunctionLibrary_eventAddChooserObjectInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics
	{
		struct ChooserFunctionLibrary_eventAddChooserStructInput_Parms
		{
			FChooserEvaluationContext Context;
			int32 Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventAddChooserStructInput_Parms, Context), Z_Construct_UScriptStruct_FChooserEvaluationContext, METADATA_PARAMS(0, nullptr) }; // 3923735805
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventAddChooserStructInput_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/**\n\x09* Add a Struct to a ChooserEvaluation context\n\x09*\n\x09* @param Context\x09\x09\x09(in) A struct reference to the chooser evaluation context\n\x09* @param Object\x09\x09\x09\x09(in) The Object to add\n\x09*/" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/ChooserFunctionLibrary.h" },
		{ "ToolTip", "Add a Struct to a ChooserEvaluation context\n\n@param Context                        (in) A struct reference to the chooser evaluation context\n@param Object                         (in) The Object to add" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChooserFunctionLibrary, nullptr, "AddChooserStructInput", nullptr, nullptr, Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::ChooserFunctionLibrary_eventAddChooserStructInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::ChooserFunctionLibrary_eventAddChooserStructInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics
	{
		struct ChooserFunctionLibrary_eventEvaluateChooser_Parms
		{
			const UObject* ContextObject;
			const UChooserTable* ChooserTable;
			TSubclassOf<UObject>  ObjectClass;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChooserTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChooserTable;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateChooser_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ContextObject_MetaData), Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ChooserTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ChooserTable = { "ChooserTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateChooser_Parms, ChooserTable), Z_Construct_UClass_UChooserTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ChooserTable_MetaData), Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ChooserTable_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateChooser_Parms, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateChooser_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ChooserTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/**\n\x09* Evaluate a chooser table and return the selected UObject, or null\n\x09*\n\x09* @param ContextObject\x09\x09\x09(in) An Object from which the parameters to the Chooser Table will be read\n\x09* @param ChooserTable\x09\x09\x09(in) The ChooserTable asset\n\x09* @param ObjectClass\x09\x09\x09(in) Expected type of result object\n\x09*/" },
		{ "DeterminesOutputType", "ObjectClass" },
		{ "ModuleRelativePath", "Public/ChooserFunctionLibrary.h" },
		{ "ToolTip", "Evaluate a chooser table and return the selected UObject, or null\n\n@param ContextObject                  (in) An Object from which the parameters to the Chooser Table will be read\n@param ChooserTable                   (in) The ChooserTable asset\n@param ObjectClass                    (in) Expected type of result object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChooserFunctionLibrary, nullptr, "EvaluateChooser", nullptr, nullptr, Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::ChooserFunctionLibrary_eventEvaluateChooser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::ChooserFunctionLibrary_eventEvaluateChooser_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics
	{
		struct ChooserFunctionLibrary_eventEvaluateChooserMulti_Parms
		{
			const UObject* ContextObject;
			const UChooserTable* ChooserTable;
			TSubclassOf<UObject>  ObjectClass;
			TArray<UObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChooserTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChooserTable;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateChooserMulti_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ContextObject_MetaData), Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ChooserTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ChooserTable = { "ChooserTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateChooserMulti_Parms, ChooserTable), Z_Construct_UClass_UChooserTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ChooserTable_MetaData), Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ChooserTable_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateChooserMulti_Parms, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateChooserMulti_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ChooserTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/**\n    * Evaluate a chooser table and return the list of all selected UObjects\n    *\n    * @param ContextObject\x09\x09\x09(in) An Object from which the parameters to the Chooser Table will be read\n    * @param ChooserTable\x09\x09\x09(in) The ChooserTable asset\n    * @param ObjectClass\x09\x09\x09(in) Expected type of result objects\n    */" },
		{ "DeterminesOutputType", "ObjectClass" },
		{ "ModuleRelativePath", "Public/ChooserFunctionLibrary.h" },
		{ "ToolTip", "Evaluate a chooser table and return the list of all selected UObjects\n\n@param ContextObject                     (in) An Object from which the parameters to the Chooser Table will be read\n@param ChooserTable                      (in) The ChooserTable asset\n@param ObjectClass                       (in) Expected type of result objects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChooserFunctionLibrary, nullptr, "EvaluateChooserMulti", nullptr, nullptr, Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::ChooserFunctionLibrary_eventEvaluateChooserMulti_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::ChooserFunctionLibrary_eventEvaluateChooserMulti_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics
	{
		struct ChooserFunctionLibrary_eventEvaluateObjectChooserBase_Parms
		{
			FChooserEvaluationContext Context;
			FInstancedStruct ObjectChooser;
			TSubclassOf<UObject>  ObjectClass;
			bool bResultIsClass;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectChooser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectChooser;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static void NewProp_bResultIsClass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResultIsClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateObjectChooserBase_Parms, Context), Z_Construct_UScriptStruct_FChooserEvaluationContext, METADATA_PARAMS(0, nullptr) }; // 3923735805
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_ObjectChooser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_ObjectChooser = { "ObjectChooser", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateObjectChooserBase_Parms, ObjectChooser), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_ObjectChooser_MetaData), Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_ObjectChooser_MetaData) }; // 2114042832
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateObjectChooserBase_Parms, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_bResultIsClass_SetBit(void* Obj)
	{
		((ChooserFunctionLibrary_eventEvaluateObjectChooserBase_Parms*)Obj)->bResultIsClass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_bResultIsClass = { "bResultIsClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChooserFunctionLibrary_eventEvaluateObjectChooserBase_Parms), &Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_bResultIsClass_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateObjectChooserBase_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_ObjectChooser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_ObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_bResultIsClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/**\n\x09* Evaluate an ObjectChooserBase and return the selected UObject, or null\n\x09*\n\x09* @param Context\x09\x09\x09(in) A struct reference to the chooser evaluation context\n\x09* @param ObjectChooser\x09\x09(in) An Instanced struct containing an ObjectChooserBase implementation, such as EvaluateChooser, or EvaluateProxyAsset\n\x09* @param ObjectClass\x09\x09(in) Expected type of result object (or the type of UClass if bResultIsClass is true)\n\x09* @param bResultIsClass\x09\x09(in) The Object being returned is a UClass, and the ObjectClass parameter indicates what it must be a subclass of\n\x09*/" },
		{ "CPP_Default_bResultIsClass", "false" },
		{ "DeterminesOutputType", "ObjectClass" },
		{ "ModuleRelativePath", "Public/ChooserFunctionLibrary.h" },
		{ "ToolTip", "Evaluate an ObjectChooserBase and return the selected UObject, or null\n\n@param Context                        (in) A struct reference to the chooser evaluation context\n@param ObjectChooser          (in) An Instanced struct containing an ObjectChooserBase implementation, such as EvaluateChooser, or EvaluateProxyAsset\n@param ObjectClass            (in) Expected type of result object (or the type of UClass if bResultIsClass is true)\n@param bResultIsClass         (in) The Object being returned is a UClass, and the ObjectClass parameter indicates what it must be a subclass of" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChooserFunctionLibrary, nullptr, "EvaluateObjectChooserBase", nullptr, nullptr, Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::ChooserFunctionLibrary_eventEvaluateObjectChooserBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::ChooserFunctionLibrary_eventEvaluateObjectChooserBase_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics
	{
		struct ChooserFunctionLibrary_eventEvaluateObjectChooserBaseMulti_Parms
		{
			FChooserEvaluationContext Context;
			FInstancedStruct ObjectChooser;
			TSubclassOf<UObject>  ObjectClass;
			bool bResultIsClass;
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectChooser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectChooser;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static void NewProp_bResultIsClass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResultIsClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateObjectChooserBaseMulti_Parms, Context), Z_Construct_UScriptStruct_FChooserEvaluationContext, METADATA_PARAMS(0, nullptr) }; // 3923735805
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_ObjectChooser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_ObjectChooser = { "ObjectChooser", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateObjectChooserBaseMulti_Parms, ObjectChooser), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_ObjectChooser_MetaData), Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_ObjectChooser_MetaData) }; // 2114042832
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateObjectChooserBaseMulti_Parms, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_bResultIsClass_SetBit(void* Obj)
	{
		((ChooserFunctionLibrary_eventEvaluateObjectChooserBaseMulti_Parms*)Obj)->bResultIsClass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_bResultIsClass = { "bResultIsClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChooserFunctionLibrary_eventEvaluateObjectChooserBaseMulti_Parms), &Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_bResultIsClass_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventEvaluateObjectChooserBaseMulti_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_ObjectChooser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_ObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_bResultIsClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/**\n\x09* Evaluate a chooser table and return all selected UObjects\n\x09*\n\x09* @param Context\x09\x09\x09(in) A struct reference to the chooser evaluation context\n\x09* @param ObjectChooser\x09\x09(in) An Instanced struct containing an ObjectChooserBase implementation, such as EvaluateChooser, or EvaluateProxyAsset\n\x09* @param ObjectClass\x09\x09(in) Expected type of result object (or the type of UClass if bResultIsClass is true)\n\x09* @param bResultIsClass\x09\x09(in) The Object being returned is a UClass, and the ObjectClass parameter indicates what it must be a subclass of\n\x09*/" },
		{ "CPP_Default_bResultIsClass", "false" },
		{ "DeterminesOutputType", "ObjectClass" },
		{ "ModuleRelativePath", "Public/ChooserFunctionLibrary.h" },
		{ "ToolTip", "Evaluate a chooser table and return all selected UObjects\n\n@param Context                        (in) A struct reference to the chooser evaluation context\n@param ObjectChooser          (in) An Instanced struct containing an ObjectChooserBase implementation, such as EvaluateChooser, or EvaluateProxyAsset\n@param ObjectClass            (in) Expected type of result object (or the type of UClass if bResultIsClass is true)\n@param bResultIsClass         (in) The Object being returned is a UClass, and the ObjectClass parameter indicates what it must be a subclass of" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChooserFunctionLibrary, nullptr, "EvaluateObjectChooserBaseMulti", nullptr, nullptr, Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::ChooserFunctionLibrary_eventEvaluateObjectChooserBaseMulti_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::ChooserFunctionLibrary_eventEvaluateObjectChooserBaseMulti_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics
	{
		struct ChooserFunctionLibrary_eventGetChooserStructOutput_Parms
		{
			FChooserEvaluationContext Context;
			int32 Index;
			int32 Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventGetChooserStructOutput_Parms, Context), Z_Construct_UScriptStruct_FChooserEvaluationContext, METADATA_PARAMS(0, nullptr) }; // 3923735805
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventGetChooserStructOutput_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventGetChooserStructOutput_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/**\n\x09* Get a Struct to a ChooserEvaluation context\n\x09*\n\x09* @param Context\x09\x09\x09(in) A struct reference to the chooser evaluation context\n\x09* @param Object\x09\x09\x09\x09(in) The Object to add\n\x09*/" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/ChooserFunctionLibrary.h" },
		{ "ToolTip", "Get a Struct to a ChooserEvaluation context\n\n@param Context                        (in) A struct reference to the chooser evaluation context\n@param Object                         (in) The Object to add" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChooserFunctionLibrary, nullptr, "GetChooserStructOutput", nullptr, nullptr, Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::ChooserFunctionLibrary_eventGetChooserStructOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::ChooserFunctionLibrary_eventGetChooserStructOutput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext_Statics
	{
		struct ChooserFunctionLibrary_eventMakeChooserEvaluationContext_Parms
		{
			FChooserEvaluationContext ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventMakeChooserEvaluationContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FChooserEvaluationContext, METADATA_PARAMS(0, nullptr) }; // 3923735805
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/ChooserFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChooserFunctionLibrary, nullptr, "MakeChooserEvaluationContext", nullptr, nullptr, Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext_Statics::ChooserFunctionLibrary_eventMakeChooserEvaluationContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext_Statics::ChooserFunctionLibrary_eventMakeChooserEvaluationContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics
	{
		struct ChooserFunctionLibrary_eventMakeEvaluateChooser_Parms
		{
			UChooserTable* Chooser;
			FInstancedStruct ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Chooser;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::NewProp_Chooser = { "Chooser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventMakeEvaluateChooser_Parms, Chooser), Z_Construct_UClass_UChooserTable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChooserFunctionLibrary_eventMakeEvaluateChooser_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 2114042832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::NewProp_Chooser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09* Create an EvaluateChooser struct\n\x09*\n\x09* @param Chooser\x09\x09\x09\x09(in) the ChooserTable asset to evaluate\n\x09*/" },
		{ "ModuleRelativePath", "Public/ChooserFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Create an EvaluateChooser struct\n\n@param Chooser                                (in) the ChooserTable asset to evaluate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChooserFunctionLibrary, nullptr, "MakeEvaluateChooser", nullptr, nullptr, Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::ChooserFunctionLibrary_eventMakeEvaluateChooser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::ChooserFunctionLibrary_eventMakeEvaluateChooser_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChooserFunctionLibrary);
	UClass* Z_Construct_UClass_UChooserFunctionLibrary_NoRegister()
	{
		return UChooserFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UChooserFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChooserFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChooserFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UChooserFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserObjectInput, "AddChooserObjectInput" }, // 1867141770
		{ &Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput, "AddChooserStructInput" }, // 1235627772
		{ &Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooser, "EvaluateChooser" }, // 2679932968
		{ &Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateChooserMulti, "EvaluateChooserMulti" }, // 243752387
		{ &Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBase, "EvaluateObjectChooserBase" }, // 1179456807
		{ &Z_Construct_UFunction_UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti, "EvaluateObjectChooserBaseMulti" }, // 2502423391
		{ &Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput, "GetChooserStructOutput" }, // 4290620712
		{ &Z_Construct_UFunction_UChooserFunctionLibrary_MakeChooserEvaluationContext, "MakeChooserEvaluationContext" }, // 3054643953
		{ &Z_Construct_UFunction_UChooserFunctionLibrary_MakeEvaluateChooser, "MakeEvaluateChooser" }, // 237593938
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChooserFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Chooser Function Library\n */" },
		{ "IncludePath", "ChooserFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ChooserFunctionLibrary.h" },
		{ "ToolTip", "Chooser Function Library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChooserFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChooserFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChooserFunctionLibrary_Statics::ClassParams = {
		&UChooserFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChooserFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UChooserFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UChooserFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UChooserFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChooserFunctionLibrary.OuterSingleton, Z_Construct_UClass_UChooserFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChooserFunctionLibrary.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UChooserFunctionLibrary>()
	{
		return UChooserFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooserFunctionLibrary);
	UChooserFunctionLibrary::~UChooserFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChooserFunctionLibrary, UChooserFunctionLibrary::StaticClass, TEXT("UChooserFunctionLibrary"), &Z_Registration_Info_UClass_UChooserFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChooserFunctionLibrary), 3665283277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_1250421731(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
