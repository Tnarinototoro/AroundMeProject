// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterPreviewShareComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterPreviewShareComponent() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterRootActor_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterPreviewShareComponent();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterPreviewShareComponent_NoRegister();
	DISPLAYCLUSTER_API UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareIcvfxSync();
	DISPLAYCLUSTER_API UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareMode();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterPreviewShareMode;
	static UEnum* EDisplayClusterPreviewShareMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterPreviewShareMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterPreviewShareMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareMode, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("EDisplayClusterPreviewShareMode"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterPreviewShareMode.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UEnum* StaticEnum<EDisplayClusterPreviewShareMode>()
	{
		return EDisplayClusterPreviewShareMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareMode_Statics::Enumerators[] = {
		{ "EDisplayClusterPreviewShareMode::None", (int64)EDisplayClusterPreviewShareMode::None },
		{ "EDisplayClusterPreviewShareMode::PullActor", (int64)EDisplayClusterPreviewShareMode::PullActor },
		{ "EDisplayClusterPreviewShareMode::Send", (int64)EDisplayClusterPreviewShareMode::Send },
		{ "EDisplayClusterPreviewShareMode::Receive", (int64)EDisplayClusterPreviewShareMode::Receive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Available sharing modes */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "None.Comment", "/** Preview share disabled. */" },
		{ "None.Name", "EDisplayClusterPreviewShareMode::None" },
		{ "None.ToolTip", "Preview share disabled." },
		{ "PullActor.Comment", "/** Pull from Source nDisplay Actor (if set) */" },
		{ "PullActor.Name", "EDisplayClusterPreviewShareMode::PullActor" },
		{ "PullActor.ToolTip", "Pull from Source nDisplay Actor (if set)" },
		{ "Receive.Comment", "/** Receives textures to replace the viewport textures with */" },
		{ "Receive.Name", "EDisplayClusterPreviewShareMode::Receive" },
		{ "Receive.ToolTip", "Receives textures to replace the viewport textures with" },
		{ "Send.Comment", "/** Sends the viewport textures for sharing */" },
		{ "Send.Name", "EDisplayClusterPreviewShareMode::Send" },
		{ "Send.ToolTip", "Sends the viewport textures for sharing" },
		{ "ToolTip", "Available sharing modes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		"EDisplayClusterPreviewShareMode",
		"EDisplayClusterPreviewShareMode",
		Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareMode()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterPreviewShareMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterPreviewShareMode.InnerSingleton, Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterPreviewShareMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterPreviewShareIcvfxSync;
	static UEnum* EDisplayClusterPreviewShareIcvfxSync_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterPreviewShareIcvfxSync.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterPreviewShareIcvfxSync.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareIcvfxSync, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("EDisplayClusterPreviewShareIcvfxSync"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterPreviewShareIcvfxSync.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UEnum* StaticEnum<EDisplayClusterPreviewShareIcvfxSync>()
	{
		return EDisplayClusterPreviewShareIcvfxSync_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareIcvfxSync_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareIcvfxSync_Statics::Enumerators[] = {
		{ "EDisplayClusterPreviewShareIcvfxSync::None", (int64)EDisplayClusterPreviewShareIcvfxSync::None },
		{ "EDisplayClusterPreviewShareIcvfxSync::PullActor", (int64)EDisplayClusterPreviewShareIcvfxSync::PullActor },
		{ "EDisplayClusterPreviewShareIcvfxSync::PushActor", (int64)EDisplayClusterPreviewShareIcvfxSync::PushActor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareIcvfxSync_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Available Icvfx camera sync types */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "None.Comment", "/** Icvfx cameras will not be synced */" },
		{ "None.Name", "EDisplayClusterPreviewShareIcvfxSync::None" },
		{ "None.ToolTip", "Icvfx cameras will not be synced" },
		{ "PullActor.Comment", "/** Pull from Source nDisplay Actor */" },
		{ "PullActor.Name", "EDisplayClusterPreviewShareIcvfxSync::PullActor" },
		{ "PullActor.ToolTip", "Pull from Source nDisplay Actor" },
		{ "PushActor.Comment", "/** Pushes to source display actor */" },
		{ "PushActor.Name", "EDisplayClusterPreviewShareIcvfxSync::PushActor" },
		{ "PushActor.ToolTip", "Pushes to source display actor" },
		{ "ToolTip", "Available Icvfx camera sync types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareIcvfxSync_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		"EDisplayClusterPreviewShareIcvfxSync",
		"EDisplayClusterPreviewShareIcvfxSync",
		Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareIcvfxSync_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareIcvfxSync_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareIcvfxSync_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareIcvfxSync_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareIcvfxSync()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterPreviewShareIcvfxSync.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterPreviewShareIcvfxSync.InnerSingleton, Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareIcvfxSync_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterPreviewShareIcvfxSync.InnerSingleton;
	}
	DEFINE_FUNCTION(UDisplayClusterPreviewShareComponent::execSetUniqueName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewUniqueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUniqueName(Z_Param_NewUniqueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterPreviewShareComponent::execSetMode)
	{
		P_GET_ENUM(EDisplayClusterPreviewShareMode,Z_Param_NewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMode(EDisplayClusterPreviewShareMode(Z_Param_NewMode));
		P_NATIVE_END;
	}
	void UDisplayClusterPreviewShareComponent::SetMode_WrapperImpl(void* Object, const void* InValue)
	{
	#if WITH_EDITORONLY_DATA
		UDisplayClusterPreviewShareComponent* Obj = (UDisplayClusterPreviewShareComponent*)Object;
		EDisplayClusterPreviewShareMode& Value = *(EDisplayClusterPreviewShareMode*)InValue;
		Obj->SetMode(Value);
	#endif // WITH_EDITORONLY_DATA
	}
	void UDisplayClusterPreviewShareComponent::SetUniqueName_WrapperImpl(void* Object, const void* InValue)
	{
	#if WITH_EDITORONLY_DATA
		UDisplayClusterPreviewShareComponent* Obj = (UDisplayClusterPreviewShareComponent*)Object;
		FString& Value = *(FString*)InValue;
		Obj->SetUniqueName(Value);
	#endif // WITH_EDITORONLY_DATA
	}
	void UDisplayClusterPreviewShareComponent::StaticRegisterNativesUDisplayClusterPreviewShareComponent()
	{
		UClass* Class = UDisplayClusterPreviewShareComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMode", &UDisplayClusterPreviewShareComponent::execSetMode },
			{ "SetUniqueName", &UDisplayClusterPreviewShareComponent::execSetUniqueName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics
	{
		struct DisplayClusterPreviewShareComponent_eventSetMode_Parms
		{
			EDisplayClusterPreviewShareMode NewMode;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DisplayClusterPreviewShareComponent_eventSetMode_Parms, NewMode), Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareMode, METADATA_PARAMS(0, nullptr) }; // 4204196209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::NewProp_NewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::NewProp_NewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sharing" },
		{ "Comment", "/** Sets the sharing mode */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "ToolTip", "Sets the sharing mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterPreviewShareComponent, nullptr, "SetMode", nullptr, nullptr, Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::DisplayClusterPreviewShareComponent_eventSetMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::DisplayClusterPreviewShareComponent_eventSetMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics
	{
		struct DisplayClusterPreviewShareComponent_eventSetUniqueName_Parms
		{
			FString NewUniqueName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewUniqueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewUniqueName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::NewProp_NewUniqueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::NewProp_NewUniqueName = { "NewUniqueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DisplayClusterPreviewShareComponent_eventSetUniqueName_Parms, NewUniqueName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::NewProp_NewUniqueName_MetaData), Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::NewProp_NewUniqueName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::NewProp_NewUniqueName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sharing" },
		{ "Comment", "/** Sets the unique name, which should match between sender and receiver of viewport textures */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "ToolTip", "Sets the unique name, which should match between sender and receiver of viewport textures" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterPreviewShareComponent, nullptr, "SetUniqueName", nullptr, nullptr, Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::DisplayClusterPreviewShareComponent_eventSetUniqueName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::DisplayClusterPreviewShareComponent_eventSetUniqueName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterPreviewShareComponent);
	UClass* Z_Construct_UClass_UDisplayClusterPreviewShareComponent_NoRegister()
	{
		return UDisplayClusterPreviewShareComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceNDisplayActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceNDisplayActor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IcvfxCamerasSyncType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IcvfxCamerasSyncType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IcvfxCamerasSyncType;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaOutputs_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaOutputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MediaOutputs;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaCaptures_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaCaptures_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaCaptures_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MediaCaptures;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSources_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaSources_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSources_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MediaSources;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaPlayers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaPlayers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MediaPlayers;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaTextures_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaTextures_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaTextures_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MediaTextures;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginalSourceTextures_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginalSourceTextures_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalSourceTextures_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OriginalSourceTextures;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OriginalTextureReplaces_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginalTextureReplaces_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalTextureReplaces_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OriginalTextureReplaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetMode, "SetMode" }, // 926198500
		{ &Z_Construct_UFunction_UDisplayClusterPreviewShareComponent_SetUniqueName, "SetUniqueName" }, // 518125594
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "DisplayCluster" },
		{ "Comment", "/**\n * nDisplay Viewport preview share component\n * \n * It shares using Shared Memory Media the viewport textures of the parent nDisplay Actor.\n * It should only be added to DisplayClusterRootActor instances, and only one component per instance.\n * The way it works is that the sender generates a unique name for each viewport and captures its texture\n * by getting a pointer to it from the corresponding Preview Component.\n * The receiver will read it using the corresponding media source, and use the Texture Replace functionality\n * in the nDisplay actor viewports to have them used and displayed.\n */" },
		{ "HideCategories", "Activation Collision Cooking" },
		{ "IncludePath", "Components/DisplayClusterPreviewShareComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "nDisplay Viewport preview share component\n\nIt shares using Shared Memory Media the viewport textures of the parent nDisplay Actor.\nIt should only be added to DisplayClusterRootActor instances, and only one component per instance.\nThe way it works is that the sender generates a unique name for each viewport and captures its texture\nby getting a pointer to it from the corresponding Preview Component.\nThe receiver will read it using the corresponding media source, and use the Texture Replace functionality\nin the nDisplay actor viewports to have them used and displayed." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_Mode_MetaData[] = {
		{ "BlueprintSetter", "SetMode" },
		{ "Category", "Sharing" },
		{ "Comment", "/** Current sharing mode of this component */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "ToolTip", "Current sharing mode of this component" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, &UDisplayClusterPreviewShareComponent::SetMode_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UDisplayClusterPreviewShareComponent, Mode), Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_Mode_MetaData), Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_Mode_MetaData) }; // 4204196209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_UniqueName_MetaData[] = {
		{ "BlueprintSetter", "SetUniqueName" },
		{ "Category", "Sharing" },
		{ "Comment", "/** Current unique name of this component, which should match between sender and receiver of viewport textures */" },
		{ "EditCondition", "Mode == EDisplayClusterPreviewShareMode::Send || Mode == EDisplayClusterPreviewShareMode::Receive" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "ToolTip", "Current unique name of this component, which should match between sender and receiver of viewport textures" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, &UDisplayClusterPreviewShareComponent::SetUniqueName_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UDisplayClusterPreviewShareComponent, UniqueName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_UniqueName_MetaData), Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_UniqueName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_SourceNDisplayActor_MetaData[] = {
		{ "Category", "Sharing" },
		{ "Comment", "/** The source nDisplay actor to pull the preview from */" },
		{ "DisplayName", "Source nDisplay Actor" },
		{ "EditCondition", "Mode == EDisplayClusterPreviewShareMode::PullActor" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "ToolTip", "The source nDisplay actor to pull the preview from" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_SourceNDisplayActor = { "SourceNDisplayActor", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplayClusterPreviewShareComponent, SourceNDisplayActor), Z_Construct_UClass_ADisplayClusterRootActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_SourceNDisplayActor_MetaData), Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_SourceNDisplayActor_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_IcvfxCamerasSyncType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_IcvfxCamerasSyncType_MetaData[] = {
		{ "Category", "Sharing" },
		{ "Comment", "/** Type of Icvfx camera sync to be performed between the Source nDisplay actor and the owner of this component */" },
		{ "EditCondition", "Mode == EDisplayClusterPreviewShareMode::PullActor" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "ToolTip", "Type of Icvfx camera sync to be performed between the Source nDisplay actor and the owner of this component" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_IcvfxCamerasSyncType = { "IcvfxCamerasSyncType", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplayClusterPreviewShareComponent, IcvfxCamerasSyncType), Z_Construct_UEnum_DisplayCluster_EDisplayClusterPreviewShareIcvfxSync, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_IcvfxCamerasSyncType_MetaData), Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_IcvfxCamerasSyncType_MetaData) }; // 3922297860
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaOutputs_ValueProp = { "MediaOutputs", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaOutputs_Key_KeyProp = { "MediaOutputs_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaOutputs_MetaData[] = {
		{ "Comment", "/** Media Outputs associated with the given viewport unique names */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "ToolTip", "Media Outputs associated with the given viewport unique names" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaOutputs = { "MediaOutputs", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplayClusterPreviewShareComponent, MediaOutputs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaOutputs_MetaData), Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaOutputs_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaCaptures_ValueProp = { "MediaCaptures", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMediaCapture_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaCaptures_Key_KeyProp = { "MediaCaptures_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaCaptures_MetaData[] = {
		{ "Comment", "/** Media Captures associated with the given viewport unique names */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "ToolTip", "Media Captures associated with the given viewport unique names" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaCaptures = { "MediaCaptures", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplayClusterPreviewShareComponent, MediaCaptures), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaCaptures_MetaData), Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaCaptures_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaSources_ValueProp = { "MediaSources", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaSources_Key_KeyProp = { "MediaSources_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaSources_MetaData[] = {
		{ "Comment", "/** Media Sources associated with the given viewport unique names */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "ToolTip", "Media Sources associated with the given viewport unique names" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaSources = { "MediaSources", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplayClusterPreviewShareComponent, MediaSources), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaSources_MetaData), Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaSources_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaPlayers_ValueProp = { "MediaPlayers", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaPlayers_Key_KeyProp = { "MediaPlayers_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaPlayers_MetaData[] = {
		{ "Comment", "/** Media Players associated with the given viewport unique names */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "ToolTip", "Media Players associated with the given viewport unique names" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaPlayers = { "MediaPlayers", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplayClusterPreviewShareComponent, MediaPlayers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaPlayers_MetaData), Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaPlayers_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaTextures_ValueProp = { "MediaTextures", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaTextures_Key_KeyProp = { "MediaTextures_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaTextures_MetaData[] = {
		{ "Comment", "/** Media Textures associated with the given viewport unique names */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "ToolTip", "Media Textures associated with the given viewport unique names" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaTextures = { "MediaTextures", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplayClusterPreviewShareComponent, MediaTextures), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaTextures_MetaData), Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaTextures_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalSourceTextures_ValueProp = { "OriginalSourceTextures", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalSourceTextures_Key_KeyProp = { "OriginalSourceTextures_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalSourceTextures_MetaData[] = {
		{ "Comment", "/** Cache of original Texture Replace Source Textures associated with the given viewport unique names. Used when restoring the original state */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "ToolTip", "Cache of original Texture Replace Source Textures associated with the given viewport unique names. Used when restoring the original state" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalSourceTextures = { "OriginalSourceTextures", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplayClusterPreviewShareComponent, OriginalSourceTextures), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalSourceTextures_MetaData), Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalSourceTextures_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalTextureReplaces_ValueProp = { "OriginalTextureReplaces", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalTextureReplaces_Key_KeyProp = { "OriginalTextureReplaces_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalTextureReplaces_MetaData[] = {
		{ "Comment", "/** Cache of original Texture Replace enable boolean associated with the given viewport unique names. Used when restoring the original state */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewShareComponent.h" },
		{ "ToolTip", "Cache of original Texture Replace enable boolean associated with the given viewport unique names. Used when restoring the original state" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalTextureReplaces = { "OriginalTextureReplaces", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplayClusterPreviewShareComponent, OriginalTextureReplaces), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalTextureReplaces_MetaData), Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalTextureReplaces_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_UniqueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_SourceNDisplayActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_IcvfxCamerasSyncType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_IcvfxCamerasSyncType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaOutputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaOutputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaCaptures_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaCaptures_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaCaptures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaSources_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaSources_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaPlayers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaPlayers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaTextures_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaTextures_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_MediaTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalSourceTextures_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalSourceTextures_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalSourceTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalTextureReplaces_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalTextureReplaces_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::NewProp_OriginalTextureReplaces,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterPreviewShareComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::ClassParams = {
		&UDisplayClusterPreviewShareComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::PropPointers), 0),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::Class_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::PropPointers) < 2048);
#endif
	UClass* Z_Construct_UClass_UDisplayClusterPreviewShareComponent()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterPreviewShareComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterPreviewShareComponent.OuterSingleton, Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterPreviewShareComponent.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterPreviewShareComponent>()
	{
		return UDisplayClusterPreviewShareComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterPreviewShareComponent);
	UDisplayClusterPreviewShareComponent::~UDisplayClusterPreviewShareComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDisplayClusterPreviewShareComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_Statics::EnumInfo[] = {
		{ EDisplayClusterPreviewShareMode_StaticEnum, TEXT("EDisplayClusterPreviewShareMode"), &Z_Registration_Info_UEnum_EDisplayClusterPreviewShareMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4204196209U) },
		{ EDisplayClusterPreviewShareIcvfxSync_StaticEnum, TEXT("EDisplayClusterPreviewShareIcvfxSync"), &Z_Registration_Info_UEnum_EDisplayClusterPreviewShareIcvfxSync, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3922297860U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterPreviewShareComponent, UDisplayClusterPreviewShareComponent::StaticClass, TEXT("UDisplayClusterPreviewShareComponent"), &Z_Registration_Info_UClass_UDisplayClusterPreviewShareComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterPreviewShareComponent), 3258250766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_2405428906(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
