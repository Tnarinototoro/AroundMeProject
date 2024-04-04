// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionLibraries/AssetFilteringAndSortingFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetFilteringAndSortingFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary_NoRegister();
	VIRTUALCAMERA_API UEnum* Z_Construct_UEnum_VirtualCamera_EAssetTagMetaDataSortType();
	VIRTUALCAMERA_API UEnum* Z_Construct_UEnum_VirtualCamera_ESortOrder();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESortOrder;
	static UEnum* ESortOrder_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESortOrder.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESortOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VirtualCamera_ESortOrder, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("ESortOrder"));
		}
		return Z_Registration_Info_UEnum_ESortOrder.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UEnum* StaticEnum<ESortOrder>()
	{
		return ESortOrder_StaticEnum();
	}
	struct Z_Construct_UEnum_VirtualCamera_ESortOrder_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VirtualCamera_ESortOrder_Statics::Enumerators[] = {
		{ "ESortOrder::Ascending", (int64)ESortOrder::Ascending },
		{ "ESortOrder::Descending", (int64)ESortOrder::Descending },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VirtualCamera_ESortOrder_Statics::Enum_MetaDataParams[] = {
		{ "Ascending.Name", "ESortOrder::Ascending" },
		{ "BlueprintType", "true" },
		{ "Descending.Name", "ESortOrder::Descending" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/AssetFilteringAndSortingFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VirtualCamera_ESortOrder_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		"ESortOrder",
		"ESortOrder",
		Z_Construct_UEnum_VirtualCamera_ESortOrder_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VirtualCamera_ESortOrder_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VirtualCamera_ESortOrder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VirtualCamera_ESortOrder_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VirtualCamera_ESortOrder()
	{
		if (!Z_Registration_Info_UEnum_ESortOrder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESortOrder.InnerSingleton, Z_Construct_UEnum_VirtualCamera_ESortOrder_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESortOrder.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetTagMetaDataSortType;
	static UEnum* EAssetTagMetaDataSortType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAssetTagMetaDataSortType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAssetTagMetaDataSortType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VirtualCamera_EAssetTagMetaDataSortType, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("EAssetTagMetaDataSortType"));
		}
		return Z_Registration_Info_UEnum_EAssetTagMetaDataSortType.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UEnum* StaticEnum<EAssetTagMetaDataSortType>()
	{
		return EAssetTagMetaDataSortType_StaticEnum();
	}
	struct Z_Construct_UEnum_VirtualCamera_EAssetTagMetaDataSortType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VirtualCamera_EAssetTagMetaDataSortType_Statics::Enumerators[] = {
		{ "EAssetTagMetaDataSortType::String", (int64)EAssetTagMetaDataSortType::String },
		{ "EAssetTagMetaDataSortType::Numeric", (int64)EAssetTagMetaDataSortType::Numeric },
		{ "EAssetTagMetaDataSortType::DateTime", (int64)EAssetTagMetaDataSortType::DateTime },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VirtualCamera_EAssetTagMetaDataSortType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DateTime.Name", "EAssetTagMetaDataSortType::DateTime" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/AssetFilteringAndSortingFunctionLibrary.h" },
		{ "Numeric.Name", "EAssetTagMetaDataSortType::Numeric" },
		{ "String.Name", "EAssetTagMetaDataSortType::String" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VirtualCamera_EAssetTagMetaDataSortType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		"EAssetTagMetaDataSortType",
		"EAssetTagMetaDataSortType",
		Z_Construct_UEnum_VirtualCamera_EAssetTagMetaDataSortType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VirtualCamera_EAssetTagMetaDataSortType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VirtualCamera_EAssetTagMetaDataSortType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VirtualCamera_EAssetTagMetaDataSortType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VirtualCamera_EAssetTagMetaDataSortType()
	{
		if (!Z_Registration_Info_UEnum_EAssetTagMetaDataSortType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetTagMetaDataSortType.InnerSingleton, Z_Construct_UEnum_VirtualCamera_EAssetTagMetaDataSortType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAssetTagMetaDataSortType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct _Script_VirtualCamera_eventAssetSortingPredicate_Parms
		{
			FAssetData Left;
			FAssetData Right;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::NewProp_Left_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VirtualCamera_eventAssetSortingPredicate_Parms, Left), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::NewProp_Left_MetaData), Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::NewProp_Left_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::NewProp_Right_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VirtualCamera_eventAssetSortingPredicate_Parms, Right), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::NewProp_Right_MetaData), Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::NewProp_Right_MetaData) };
	void Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((_Script_VirtualCamera_eventAssetSortingPredicate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_VirtualCamera_eventAssetSortingPredicate_Parms), &Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FunctionLibraries/AssetFilteringAndSortingFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera, nullptr, "AssetSortingPredicate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::_Script_VirtualCamera_eventAssetSortingPredicate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::_Script_VirtualCamera_eventAssetSortingPredicate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
bool FAssetSortingPredicate_DelegateWrapper(const FScriptDelegate& AssetSortingPredicate, FAssetData const& Left, FAssetData const& Right)
{
	struct _Script_VirtualCamera_eventAssetSortingPredicate_Parms
	{
		FAssetData Left;
		FAssetData Right;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_VirtualCamera_eventAssetSortingPredicate_Parms()
			: ReturnValue(false)
		{
		}
	};
	_Script_VirtualCamera_eventAssetSortingPredicate_Parms Parms;
	Parms.Left=Left;
	Parms.Right=Right;
	AssetSortingPredicate.ProcessDelegate<UObject>(&Parms);
	return !!Parms.ReturnValue;
}
	DEFINE_FUNCTION(UAssetFilteringAndSortingFunctionLibrary::execSortByMetaData)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
		P_GET_PROPERTY(FNameProperty,Z_Param_MetaDataTag);
		P_GET_ENUM(EAssetTagMetaDataSortType,Z_Param_MetaDataType);
		P_GET_ENUM(ESortOrder,Z_Param_SortOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAssetFilteringAndSortingFunctionLibrary::SortByMetaData(Z_Param_Out_Assets,Z_Param_MetaDataTag,EAssetTagMetaDataSortType(Z_Param_MetaDataType),ESortOrder(Z_Param_SortOrder));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetFilteringAndSortingFunctionLibrary::execSortByAssetName)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
		P_GET_ENUM(ESortOrder,Z_Param_SortOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAssetFilteringAndSortingFunctionLibrary::SortByAssetName(Z_Param_Out_Assets,ESortOrder(Z_Param_SortOrder));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetFilteringAndSortingFunctionLibrary::execSortByCustomPredicate)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_SortingPredicate);
		P_GET_ENUM(ESortOrder,Z_Param_SortOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAssetFilteringAndSortingFunctionLibrary::SortByCustomPredicate(Z_Param_Out_Assets,FAssetSortingPredicate(Z_Param_SortingPredicate),ESortOrder(Z_Param_SortOrder));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetFilteringAndSortingFunctionLibrary::execGetAllAssetsByMetaDataTags)
	{
		P_GET_TSET_REF(FName,Z_Param_Out_RequiredTags);
		P_GET_TSET_REF(UClass*,Z_Param_Out_AllowedClasses);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAssetData>*)Z_Param__Result=UAssetFilteringAndSortingFunctionLibrary::GetAllAssetsByMetaDataTags(Z_Param_Out_RequiredTags,Z_Param_Out_AllowedClasses);
		P_NATIVE_END;
	}
	void UAssetFilteringAndSortingFunctionLibrary::StaticRegisterNativesUAssetFilteringAndSortingFunctionLibrary()
	{
		UClass* Class = UAssetFilteringAndSortingFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllAssetsByMetaDataTags", &UAssetFilteringAndSortingFunctionLibrary::execGetAllAssetsByMetaDataTags },
			{ "SortByAssetName", &UAssetFilteringAndSortingFunctionLibrary::execSortByAssetName },
			{ "SortByCustomPredicate", &UAssetFilteringAndSortingFunctionLibrary::execSortByCustomPredicate },
			{ "SortByMetaData", &UAssetFilteringAndSortingFunctionLibrary::execSortByMetaData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetFilteringAndSortingFunctionLibrary_eventGetAllAssetsByMetaDataTags_Parms
		{
			TSet<FName> RequiredTags;
			TSet<UClass*> AllowedClasses;
			TArray<FAssetData> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredTags_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_RequiredTags;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedClasses_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedClasses_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AllowedClasses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_RequiredTags_ElementProp = { "RequiredTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_RequiredTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetFilteringAndSortingFunctionLibrary_eventGetAllAssetsByMetaDataTags_Parms, RequiredTags), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_RequiredTags_MetaData), Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_RequiredTags_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_AllowedClasses_ElementProp = { "AllowedClasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_AllowedClasses_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_AllowedClasses = { "AllowedClasses", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetFilteringAndSortingFunctionLibrary_eventGetAllAssetsByMetaDataTags_Parms, AllowedClasses), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_AllowedClasses_MetaData), Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_AllowedClasses_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetFilteringAndSortingFunctionLibrary_eventGetAllAssetsByMetaDataTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_RequiredTags_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_RequiredTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_AllowedClasses_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_AllowedClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Clips" },
		{ "Comment", "/** Gets all assets which have the given tags. */" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/AssetFilteringAndSortingFunctionLibrary.h" },
		{ "ToolTip", "Gets all assets which have the given tags." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary, nullptr, "GetAllAssetsByMetaDataTags", nullptr, nullptr, Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::AssetFilteringAndSortingFunctionLibrary_eventGetAllAssetsByMetaDataTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::AssetFilteringAndSortingFunctionLibrary_eventGetAllAssetsByMetaDataTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetFilteringAndSortingFunctionLibrary_eventSortByAssetName_Parms
		{
			TArray<FAssetData> Assets;
			ESortOrder SortOrder;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortOrder_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetFilteringAndSortingFunctionLibrary_eventSortByAssetName_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::NewProp_SortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetFilteringAndSortingFunctionLibrary_eventSortByAssetName_Parms, SortOrder), Z_Construct_UEnum_VirtualCamera_ESortOrder, METADATA_PARAMS(0, nullptr) }; // 168850386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::NewProp_Assets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::NewProp_Assets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::NewProp_SortOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::NewProp_SortOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Clips" },
		{ "Comment", "/** Sorts the assets by their asset name. */" },
		{ "CPP_Default_SortOrder", "Ascending" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/AssetFilteringAndSortingFunctionLibrary.h" },
		{ "ToolTip", "Sorts the assets by their asset name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary, nullptr, "SortByAssetName", nullptr, nullptr, Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::AssetFilteringAndSortingFunctionLibrary_eventSortByAssetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::AssetFilteringAndSortingFunctionLibrary_eventSortByAssetName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetFilteringAndSortingFunctionLibrary_eventSortByCustomPredicate_Parms
		{
			TArray<FAssetData> Assets;
			FScriptDelegate SortingPredicate;
			ESortOrder SortOrder;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_SortingPredicate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortOrder_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetFilteringAndSortingFunctionLibrary_eventSortByCustomPredicate_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::NewProp_SortingPredicate = { "SortingPredicate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetFilteringAndSortingFunctionLibrary_eventSortByCustomPredicate_Parms, SortingPredicate), Z_Construct_UDelegateFunction_VirtualCamera_AssetSortingPredicate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 205742917
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::NewProp_SortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetFilteringAndSortingFunctionLibrary_eventSortByCustomPredicate_Parms, SortOrder), Z_Construct_UEnum_VirtualCamera_ESortOrder, METADATA_PARAMS(0, nullptr) }; // 168850386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::NewProp_Assets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::NewProp_Assets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::NewProp_SortingPredicate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::NewProp_SortOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::NewProp_SortOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Clips" },
		{ "Comment", "/** Sorts the assets based on a custom Blueprint delegate.\n\x09 * @param SortingPredicate Implements a Left <= Right relation\n\x09 */" },
		{ "CPP_Default_SortOrder", "Ascending" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/AssetFilteringAndSortingFunctionLibrary.h" },
		{ "ToolTip", "Sorts the assets based on a custom Blueprint delegate.\n@param SortingPredicate Implements a Left <= Right relation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary, nullptr, "SortByCustomPredicate", nullptr, nullptr, Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::AssetFilteringAndSortingFunctionLibrary_eventSortByCustomPredicate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::AssetFilteringAndSortingFunctionLibrary_eventSortByCustomPredicate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetFilteringAndSortingFunctionLibrary_eventSortByMetaData_Parms
		{
			TArray<FAssetData> Assets;
			FName MetaDataTag;
			EAssetTagMetaDataSortType MetaDataType;
			ESortOrder SortOrder;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MetaDataTag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MetaDataType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MetaDataType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortOrder_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortOrder;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetFilteringAndSortingFunctionLibrary_eventSortByMetaData_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_MetaDataTag = { "MetaDataTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetFilteringAndSortingFunctionLibrary_eventSortByMetaData_Parms, MetaDataTag), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_MetaDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_MetaDataType = { "MetaDataType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetFilteringAndSortingFunctionLibrary_eventSortByMetaData_Parms, MetaDataType), Z_Construct_UEnum_VirtualCamera_EAssetTagMetaDataSortType, METADATA_PARAMS(0, nullptr) }; // 1343011497
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_SortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetFilteringAndSortingFunctionLibrary_eventSortByMetaData_Parms, SortOrder), Z_Construct_UEnum_VirtualCamera_ESortOrder, METADATA_PARAMS(0, nullptr) }; // 168850386
	void Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetFilteringAndSortingFunctionLibrary_eventSortByMetaData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetFilteringAndSortingFunctionLibrary_eventSortByMetaData_Parms), &Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_Assets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_Assets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_MetaDataTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_MetaDataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_MetaDataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_SortOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_SortOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Clips" },
		{ "Comment", "/**\n\x09 * Sorts the assets based on their meta data's type.\n\x09 * Supported types: FString, int, float, FDateTime.\n\x09 * \n\x09 * @param Assets The assets to sort\n\x09 * @param MetaDataTag The on which the sort is based\n\x09 * @param SortOrder Whether to sort ascending or descending\n\x09 * @return Whether it was possible to compare all the meta data successfully.\n\x09 */" },
		{ "CPP_Default_SortOrder", "Ascending" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/AssetFilteringAndSortingFunctionLibrary.h" },
		{ "ToolTip", "Sorts the assets based on their meta data's type.\nSupported types: FString, int, float, FDateTime.\n\n@param Assets The assets to sort\n@param MetaDataTag The on which the sort is based\n@param SortOrder Whether to sort ascending or descending\n@return Whether it was possible to compare all the meta data successfully." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary, nullptr, "SortByMetaData", nullptr, nullptr, Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::AssetFilteringAndSortingFunctionLibrary_eventSortByMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::AssetFilteringAndSortingFunctionLibrary_eventSortByMetaData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetFilteringAndSortingFunctionLibrary);
	UClass* Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary_NoRegister()
	{
		return UAssetFilteringAndSortingFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_GetAllAssetsByMetaDataTags, "GetAllAssetsByMetaDataTags" }, // 2052180549
		{ &Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByAssetName, "SortByAssetName" }, // 3901559809
		{ &Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByCustomPredicate, "SortByCustomPredicate" }, // 1239962871
		{ &Z_Construct_UFunction_UAssetFilteringAndSortingFunctionLibrary_SortByMetaData, "SortByMetaData" }, // 2579186420
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** This library's purpose is to facilitate Blueprints to discover assets using some filters and sort them. */" },
		{ "IncludePath", "FunctionLibraries/AssetFilteringAndSortingFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/AssetFilteringAndSortingFunctionLibrary.h" },
		{ "ToolTip", "This library's purpose is to facilitate Blueprints to discover assets using some filters and sort them." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetFilteringAndSortingFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary_Statics::ClassParams = {
		&UAssetFilteringAndSortingFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UAssetFilteringAndSortingFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetFilteringAndSortingFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetFilteringAndSortingFunctionLibrary.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<UAssetFilteringAndSortingFunctionLibrary>()
	{
		return UAssetFilteringAndSortingFunctionLibrary::StaticClass();
	}
	UAssetFilteringAndSortingFunctionLibrary::UAssetFilteringAndSortingFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetFilteringAndSortingFunctionLibrary);
	UAssetFilteringAndSortingFunctionLibrary::~UAssetFilteringAndSortingFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_Statics::EnumInfo[] = {
		{ ESortOrder_StaticEnum, TEXT("ESortOrder"), &Z_Registration_Info_UEnum_ESortOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 168850386U) },
		{ EAssetTagMetaDataSortType_StaticEnum, TEXT("EAssetTagMetaDataSortType"), &Z_Registration_Info_UEnum_EAssetTagMetaDataSortType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1343011497U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetFilteringAndSortingFunctionLibrary, UAssetFilteringAndSortingFunctionLibrary::StaticClass, TEXT("UAssetFilteringAndSortingFunctionLibrary"), &Z_Registration_Info_UClass_UAssetFilteringAndSortingFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetFilteringAndSortingFunctionLibrary), 303173546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_2255710045(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_AssetFilteringAndSortingFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
