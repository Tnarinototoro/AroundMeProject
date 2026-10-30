// Copyright Epic Games, Inc. All Rights Reserved.

#include "DIY_PaperPoCBuildCommandlet.h"

#include "AssetImportTask.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetToolsModule.h"
#include "Camera/CameraActor.h"
#include "Camera/CameraComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/LightComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Editor.h"
#include "Engine/DirectionalLight.h"
#include "Engine/Engine.h"
#include "Engine/PointLight.h"
#include "Engine/StaticMesh.h"
#include "Engine/SkyLight.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/Texture2D.h"
#include "Engine/World.h"
#include "FileHelpers.h"
#include "GameFramework/PlayerStart.h"
#include "GameFramework/WorldSettings.h"
#include "IAssetTools.h"
#include "Interfaces/IPluginManager.h"
#include "MaterialDomain.h"
#include "MaterialShared.h"
#include "Materials/Material.h"
#include "Materials/MaterialExpressionConstant3Vector.h"
#include "Materials/MaterialInterface.h"
#include "Misc/PackageName.h"
#include "Misc/Paths.h"
#include "PaperFlipbook.h"
#include "PaperSprite.h"
#include "UObject/Package.h"
#include "UObject/SavePackage.h"
#include "UObject/UnrealType.h"

#include "DIY_EquipmentVisualData.h"
#include "DIY_PaperPoCGameMode.h"

DEFINE_LOG_CATEGORY_STATIC(LogDIYPaperPoC, Log, All);

namespace DIYPaperPoC
{
	static const TCHAR* ContentRoot = TEXT("/DIYPaper2D/PaperPoC");
	static constexpr int32 CanvasSize = 256;
	static constexpr int32 FeetPivotX = 128;
	static constexpr int32 FeetPivotY = 224;

	struct FSheetDef
	{
		FString Layer;
		FString State;
		int32 Frames = 8;
		float Fps = 10.0f;
	};

	static bool SaveAsset(UObject* Asset)
	{
		if (Asset == nullptr)
		{
			return false;
		}

		UPackage* Package = Asset->GetOutermost();
		if (Package == nullptr)
		{
			return false;
		}

		Package->MarkPackageDirty();
		const FString FileName = FPackageName::LongPackageNameToFilename(Package->GetName(), FPackageName::GetAssetPackageExtension());

		FSavePackageArgs Args;
		Args.TopLevelFlags = RF_Public | RF_Standalone;
		Args.SaveFlags = SAVE_NoError;
		const bool bSaved = UPackage::SavePackage(Package, Asset, *FileName, Args);
		if (!bSaved || Asset->GetName().StartsWith(TEXT("DA_")))
		{
			UE_LOG(LogTemp, Display, TEXT("[PaperPoC] Save %s -> %s : %s"), *Asset->GetPathName(), *FileName,
				bSaved ? TEXT("ok") : TEXT("FAILED"));
		}
		return bSaved;
	}

	static UTexture2D* ImportTexture(const FString& FilePath, const FString& AssetName, bool bNormalMap)
	{
		if (!FPaths::FileExists(FilePath))
		{
			UE_LOG(LogDIYPaperPoC, Error, TEXT("[PaperPoC] Missing source image: %s"), *FilePath);
			return nullptr;
		}

		const FString DestinationPath = FString::Printf(TEXT("%s/Textures"), ContentRoot);

		UAssetImportTask* Task = NewObject<UAssetImportTask>();
		Task->Filename = FilePath;
		Task->DestinationPath = DestinationPath;
		Task->DestinationName = AssetName;
		Task->bAutomated = true;
		Task->bReplaceExisting = true;
		Task->bSave = false;

		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		TArray<UAssetImportTask*> Tasks;
		Tasks.Add(Task);
		AssetTools.ImportAssetTasks(Tasks);

		UTexture2D* Texture = nullptr;
		for (UObject* Imported : Task->GetObjects())
		{
			Texture = Cast<UTexture2D>(Imported);
			if (Texture != nullptr)
			{
				break;
			}
		}

		if (Texture == nullptr)
		{
			UE_LOG(LogDIYPaperPoC, Error, TEXT("[PaperPoC] Failed to import texture: %s"), *FilePath);
			return nullptr;
		}

		Texture->LODGroup = TEXTUREGROUP_Pixels2D;
		Texture->MipGenSettings = TMGS_NoMipmaps;
		Texture->Filter = TF_Nearest;
		Texture->SRGB = !bNormalMap;
		Texture->CompressionSettings = bNormalMap ? TC_Normalmap : TC_EditorIcon;
		Texture->NeverStream = true;
		Texture->AddressX = TA_Clamp;
		Texture->AddressY = TA_Clamp;
		Texture->PostEditChange();

		SaveAsset(Texture);
		return Texture;
	}

	/**
	 * CreatePackage() can hand back a package object that the asset registry only partially loaded
	 * (header-only) when the .uasset already exists on disk. Saving into such a package is rejected
	 * with "asset cannot be saved as it has only been partially loaded". Fully load it first, then
	 * move the old object out of the way so NewObject() can take the canonical name.
	 */
	static UPackage* PreparePackage(const FString& PackageName, const FString& AssetName)
	{
		if (FPackageName::DoesPackageExist(PackageName))
		{
			LoadPackage(nullptr, *PackageName, LOAD_None);
		}

		UPackage* Package = CreatePackage(*PackageName);
		if (UObject* OldAsset = FindObject<UObject>(Package, *AssetName))
		{
			OldAsset->Rename(nullptr, GetTransientPackage(), REN_DontCreateRedirectors | REN_DoNotDirty);
		}
		return Package;
	}

	static UMaterialInterface* CreateUnlitMaterial(const FString& AssetName, const FLinearColor& Color)
	{
		const FString PackageName = FString::Printf(TEXT("%s/Materials/%s"), ContentRoot, *AssetName);
		UPackage* Package = PreparePackage(PackageName, AssetName);

		UMaterial* Material = NewObject<UMaterial>(Package, *AssetName, RF_Public | RF_Standalone | RF_Transactional);
		Material->MaterialDomain = MD_Surface;
		Material->BlendMode = BLEND_Opaque;
		Material->SetShadingModel(MSM_Unlit);
		Material->TwoSided = true;

		UMaterialExpressionConstant3Vector* ColorExpression = NewObject<UMaterialExpressionConstant3Vector>(Material);
		ColorExpression->Constant = Color;
		Material->GetExpressionCollection().AddExpression(ColorExpression);
		Material->GetEditorOnlyData()->EmissiveColor.Connect(0, ColorExpression);

		FAssetRegistryModule::AssetCreated(Material);
		Material->PostEditChange();
		SaveAsset(Material);
		return Material;
	}

	static UPaperSprite* CreateSprite(
		UTexture2D* Atlas,
		UTexture2D* NormalAtlas,
		const FString& AssetName,
		int32 FrameIndex,
		UMaterialInterface* DefaultMaterial)
	{
		const FString PackageName = FString::Printf(TEXT("%s/Sprites/%s"), ContentRoot, *AssetName);
		UPackage* Package = PreparePackage(PackageName, AssetName);

		UPaperSprite* Sprite = NewObject<UPaperSprite>(Package, *AssetName, RF_Public | RF_Standalone | RF_Transactional);

		FSpriteAssetInitParameters Params;
		Params.Texture = Atlas;
		Params.Offset = FIntPoint(FrameIndex * CanvasSize, 0);
		Params.Dimension = FIntPoint(CanvasSize, CanvasSize);
		Params.DefaultMaterialOverride = DefaultMaterial;
		if (NormalAtlas != nullptr)
		{
			Params.AdditionalTextures.Add(NormalAtlas);
		}

		Sprite->InitializeSprite(Params, /*bRebuildData=*/false);
		Sprite->SetPivotMode(
			ESpritePivotMode::Custom,
			FVector2D(static_cast<float>(FrameIndex * CanvasSize + FeetPivotX), static_cast<float>(FeetPivotY)),
			/*bRebuildData=*/false);
		Sprite->RebuildData();

		FAssetRegistryModule::AssetCreated(Sprite);
		Sprite->PostEditChange();
		SaveAsset(Sprite);
		return Sprite;
	}

	static void SetFlipbookDefaultMaterial(UPaperFlipbook* Flipbook, UMaterialInterface* Material)
	{
		if (Flipbook == nullptr || Material == nullptr)
		{
			return;
		}

		if (FObjectProperty* Property = FindFProperty<FObjectProperty>(UPaperFlipbook::StaticClass(), TEXT("DefaultMaterial")))
		{
			Property->SetObjectPropertyValue_InContainer(Flipbook, Material);
		}
	}

	static UPaperFlipbook* CreateFlipbook(
		const FString& AssetName,
		const TArray<UPaperSprite*>& Frames,
		float Fps,
		UMaterialInterface* DefaultMaterial)
	{
		const FString PackageName = FString::Printf(TEXT("%s/Flipbooks/%s"), ContentRoot, *AssetName);
		UPackage* Package = PreparePackage(PackageName, AssetName);

		UPaperFlipbook* Flipbook = NewObject<UPaperFlipbook>(Package, *AssetName, RF_Public | RF_Standalone | RF_Transactional);
		{
			FScopedFlipbookMutator Mutator(Flipbook);
			Mutator.FramesPerSecond = Fps;
			Mutator.KeyFrames.Reset();

			for (UPaperSprite* Sprite : Frames)
			{
				FPaperFlipbookKeyFrame KeyFrame;
				KeyFrame.Sprite = Sprite;
				KeyFrame.FrameRun = 1;
				Mutator.KeyFrames.Add(KeyFrame);
			}
		}

		SetFlipbookDefaultMaterial(Flipbook, DefaultMaterial);

		{
			const UMaterialInterface* AppliedMaterial = Flipbook->GetDefaultMaterial();
			UE_LOG(LogTemp, Display, TEXT("[PaperPoC] %s default material: %s"), *AssetName,
				AppliedMaterial != nullptr ? *AppliedMaterial->GetName() : TEXT("None"));
		}

		FAssetRegistryModule::AssetCreated(Flipbook);
		Flipbook->PostEditChange();
		SaveAsset(Flipbook);
		return Flipbook;
	}

	static UDIY_EquipmentVisualData* CreateEquipment(
		const FString& AssetName,
		FName ItemId,
		EDIY_EquipSlot Slot,
		const TArray<FDIY_FlipbookEntry>& Entries)
	{
		const FString PackageName = FString::Printf(TEXT("%s/Data/%s"), ContentRoot, *AssetName);
		UPackage* Package = PreparePackage(PackageName, AssetName);

		UDIY_EquipmentVisualData* Data = NewObject<UDIY_EquipmentVisualData>(Package, *AssetName, RF_Public | RF_Standalone | RF_Transactional);
		Data->ItemId = ItemId;
		Data->Slot = Slot;
		Data->Entries = Entries;
		Data->ExpectedCanvasSize = FIntPoint(CanvasSize, CanvasSize);
		Data->ExpectedPivotPixels = FVector2D(static_cast<float>(FeetPivotX), static_cast<float>(FeetPivotY));

		FAssetRegistryModule::AssetCreated(Data);
		SaveAsset(Data);

		for (const FDIY_FlipbookEntry& Entry : Data->Entries)
		{
			UE_LOG(LogTemp, Display, TEXT("[PaperPoC]   %s / %s -> %s"), *AssetName, *Entry.State.ToString(),
				Entry.Flipbook != nullptr ? *Entry.Flipbook->GetName() : TEXT("NULL"));
		}
		return Data;
	}

	static void BuildAnimals(const FString& ArtDir, UMaterialInterface* UnlitMaterial)
	{
		const TCHAR* Animals[] = { TEXT("Dog"), TEXT("Bird") };
		const TCHAR* States[] = { TEXT("Walk"), TEXT("Idle"), TEXT("Run") };
		const int32 FrameCounts[] = { 8, 4, 8 };
		const float FrameRates[] = { 10.0f, 6.0f, 14.0f };
		const TCHAR* Facings[] = { TEXT("Front"), TEXT("Right"), TEXT("Left"), TEXT("Back") };
		const EDIY_Facing FacingValues[] = { EDIY_Facing::Front, EDIY_Facing::Right, EDIY_Facing::Left, EDIY_Facing::Back };

		for (const TCHAR* Animal : Animals)
		{
			TMap<FString, UPaperFlipbook*> AnimalFlipbooks;

			for (int32 StateIndex = 0; StateIndex < 3; ++StateIndex)
			{
				for (int32 FacingIndex = 0; FacingIndex < 4; ++FacingIndex)
				{
					const FString Stem = FString::Printf(TEXT("%s_%s_%s"), Animal, States[StateIndex], Facings[FacingIndex]);
					const FString BaseFile = FPaths::Combine(ArtDir, TEXT("Animals"), Stem + TEXT(".png"));
					const FString NormalFile = FPaths::Combine(ArtDir, TEXT("Animals"), Stem + TEXT("_N.png"));

					const FString BaseName = FString::Printf(TEXT("T_Animal_%s_Base"), *Stem);
					const FString NormalName = FString::Printf(TEXT("T_Animal_%s_Normal"), *Stem);

					UTexture2D* Atlas = ImportTexture(BaseFile, BaseName, false);
					UTexture2D* NormalAtlas = ImportTexture(NormalFile, NormalName, true);
					if (Atlas == nullptr)
					{
						UE_LOG(LogDIYPaperPoC, Error, TEXT("[PaperPoC] Missing animal atlas %s"), *Stem);
						continue;
					}

					TArray<UPaperSprite*> Sprites;
					for (int32 FrameIndex = 0; FrameIndex < FrameCounts[StateIndex]; ++FrameIndex)
					{
						const FString SpriteName = FString::Printf(TEXT("S_Animal_%s_%02d"), *Stem, FrameIndex);
						UPaperSprite* Sprite = CreateSprite(Atlas, NormalAtlas, SpriteName, FrameIndex, UnlitMaterial);
						if (Sprite != nullptr)
						{
							Sprites.Add(Sprite);
						}
					}

					const FString FlipbookName = FString::Printf(TEXT("FB_Animal_%s"), *Stem);
					UPaperFlipbook* Flipbook = CreateFlipbook(FlipbookName, Sprites, FrameRates[StateIndex], UnlitMaterial);
					AnimalFlipbooks.Add(Stem, Flipbook);
				}
			}

			TArray<FDIY_FlipbookEntry> Entries;
			for (int32 StateIndex = 0; StateIndex < 3; ++StateIndex)
			{
				for (int32 FacingIndex = 0; FacingIndex < 4; ++FacingIndex)
				{
					const FString Stem = FString::Printf(TEXT("%s_%s_%s"), Animal, States[StateIndex], Facings[FacingIndex]);
					Entries.Add({ FName(States[StateIndex]), FacingValues[FacingIndex], AnimalFlipbooks.FindRef(Stem) });
				}
			}

			CreateEquipment(*FString::Printf(TEXT("DA_Animal_%s"), Animal), FName(*FString::Printf(TEXT("Animal_%s"), Animal)),
				EDIY_EquipSlot::Torso, Entries);

			UE_LOG(LogTemp, Display, TEXT("[PaperPoC] Built animal %s"), Animal);
		}
	}

	static void SpawnSceneActors(UWorld* World)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		// Unlit materials: the project disables auto exposure (r.DefaultFeature.AutoExposure=False),
		// so physically dim lights turn the Lit view nearly black. These surfaces are exposure-proof.
		UMaterialInterface* BackdropMaterial = CreateUnlitMaterial(TEXT("M_PaperPoC_Backdrop"), FLinearColor(0.10f, 0.12f, 0.16f));
		UMaterialInterface* FloorMaterial = CreateUnlitMaterial(TEXT("M_PaperPoC_Floor"), FLinearColor(0.055f, 0.065f, 0.085f));
		UMaterialInterface* PropMaterial = CreateUnlitMaterial(TEXT("M_PaperPoC_Prop"), FLinearColor(0.24f, 0.21f, 0.17f));

		World->SpawnActor<APlayerStart>(APlayerStart::StaticClass(), FVector(0.0f, 0.0f, 0.0f), FRotator::ZeroRotator, SpawnParams);

		// Sky is kept for the Lit material test, but the unlit backdrop below guarantees a visible scene.
		World->SpawnActor<ASkyAtmosphere>(ASkyAtmosphere::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);

		if (ADirectionalLight* Sun = World->SpawnActor<ADirectionalLight>(
			ADirectionalLight::StaticClass(), FVector(0.0f, 0.0f, 600.0f), FRotator(-40.0f, -55.0f, 0.0f), SpawnParams))
		{
			if (UDirectionalLightComponent* Light = Cast<UDirectionalLightComponent>(Sun->GetLightComponent()))
			{
				Light->SetMobility(EComponentMobility::Movable);
				Light->SetIntensity(50000.0f);
				Light->SetAtmosphereSunLight(true);
				Light->SetLightColor(FLinearColor(1.0f, 0.95f, 0.88f));
			}
		}

		if (ASkyLight* Sky = World->SpawnActor<ASkyLight>(
			ASkyLight::StaticClass(), FVector(0.0f, 0.0f, 400.0f), FRotator::ZeroRotator, SpawnParams))
		{
			if (USkyLightComponent* SkyLight = Sky->GetLightComponent())
			{
				SkyLight->SetMobility(EComponentMobility::Movable);
				SkyLight->bRealTimeCapture = true;
				SkyLight->SetIntensity(2.0f);
				SkyLight->RecaptureSky();
			}
		}

		if (APointLight* Fill = World->SpawnActor<APointLight>(
			APointLight::StaticClass(), FVector(160.0f, -220.0f, 240.0f), FRotator::ZeroRotator, SpawnParams))
		{
			if (UPointLightComponent* Light = Cast<UPointLightComponent>(Fill->GetLightComponent()))
			{
				Light->SetMobility(EComponentMobility::Movable);
				Light->SetIntensity(8000.0f);
				Light->SetAttenuationRadius(900.0f);
				Light->SetLightColor(FLinearColor(1.0f, 0.72f, 0.45f));
			}
		}

		if (AStaticMeshActor* Floor = World->SpawnActor<AStaticMeshActor>(
			AStaticMeshActor::StaticClass(), FVector(0.0f, 0.0f, -2.0f), FRotator::ZeroRotator, SpawnParams))
		{
			if (UStaticMeshComponent* MeshComponent = Floor->GetStaticMeshComponent())
			{
				if (UStaticMesh* PlaneMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Plane.Plane")))
				{
					MeshComponent->SetStaticMesh(PlaneMesh);
				}
				MeshComponent->SetMaterial(0, FloorMaterial);
				MeshComponent->SetMobility(EComponentMobility::Static);
			}
			Floor->SetActorScale3D(FVector(20.0f, 20.0f, 1.0f));
		}

		if (UStaticMesh* CubeMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cube.Cube")))
		{
			const FVector CrateLocations[] = {
				FVector(-260.0f, -80.0f, 0.0f),
				FVector(260.0f, 40.0f, 0.0f),
				FVector(-120.0f, 240.0f, 0.0f),
				FVector(180.0f, 260.0f, 0.0f)
			};

			for (const FVector& CrateLocation : CrateLocations)
			{
				if (AStaticMeshActor* Crate = World->SpawnActor<AStaticMeshActor>(
					AStaticMeshActor::StaticClass(), CrateLocation, FRotator(0.0f, 15.0f, 0.0f), SpawnParams))
				{
					if (UStaticMeshComponent* MeshComponent = Crate->GetStaticMeshComponent())
					{
						MeshComponent->SetStaticMesh(CubeMesh);
						MeshComponent->SetMaterial(0, PropMaterial);
						MeshComponent->SetMobility(EComponentMobility::Static);
					}
					Crate->SetActorScale3D(FVector(0.7f, 0.7f, 0.7f));
					Crate->SetActorLocation(CrateLocation + FVector(0.0f, 0.0f, 35.0f));
				}
			}

			// Grid-free but guaranteed-visible backdrop wall behind the stage.
			if (AStaticMeshActor* Backdrop = World->SpawnActor<AStaticMeshActor>(
				AStaticMeshActor::StaticClass(), FVector(0.0f, 850.0f, 300.0f), FRotator::ZeroRotator, SpawnParams))
			{
				if (UStaticMeshComponent* MeshComponent = Backdrop->GetStaticMeshComponent())
				{
					MeshComponent->SetStaticMesh(CubeMesh);
					MeshComponent->SetMaterial(0, BackdropMaterial);
					MeshComponent->SetMobility(EComponentMobility::Static);
				}
				Backdrop->SetActorScale3D(FVector(24.0f, 0.4f, 8.0f));
			}
		}

	}
}

UDIY_PaperPoCBuildCommandlet::UDIY_PaperPoCBuildCommandlet()
{
	IsClient = false;
	IsServer = false;
	IsEditor = true;
	LogToConsole = true;
}

int32 UDIY_PaperPoCBuildCommandlet::Main(const FString& Params)
{
	using namespace DIYPaperPoC;

	UE_LOG(LogTemp, Display, TEXT("[PaperPoC] Build started."));

	if (Params.Contains(TEXT("verify")))
	{

		const TCHAR* AssetPaths[] = {
			TEXT("/DIYPaper2D/PaperPoC/Data/DA_Part_Head.DA_Part_Head"),
			TEXT("/DIYPaper2D/PaperPoC/Data/DA_Part_Torso.DA_Part_Torso"),
			TEXT("/DIYPaper2D/PaperPoC/Data/DA_Part_ArmL.DA_Part_ArmL"),
			TEXT("/DIYPaper2D/PaperPoC/Data/DA_Part_ArmR.DA_Part_ArmR"),
			TEXT("/DIYPaper2D/PaperPoC/Data/DA_Part_Legs.DA_Part_Legs"),
			TEXT("/DIYPaper2D/PaperPoC/Data/DA_Equip_Shirt.DA_Equip_Shirt"),
			TEXT("/DIYPaper2D/PaperPoC/Data/DA_Equip_Shoes.DA_Equip_Shoes"),
			TEXT("/DIYPaper2D/PaperPoC/Data/DA_Equip_Helmet.DA_Equip_Helmet"),
			TEXT("/DIYPaper2D/PaperPoC/Data/DA_Equip_Cap.DA_Equip_Cap")
		};
		for (const TCHAR* AssetPath : AssetPaths)
		{
			UDIY_EquipmentVisualData* Data = LoadObject<UDIY_EquipmentVisualData>(nullptr, AssetPath);
			if (Data == nullptr)
			{
				UE_LOG(LogTemp, Error, TEXT("[PaperPoC] verify: could not load %s"), AssetPath);
				continue;
			}
			for (const FDIY_FlipbookEntry& Entry : Data->Entries)
			{
				UE_LOG(LogTemp, Display, TEXT("[PaperPoC] verify: %s / %s -> %s (%d frames @ %.1f)"), *Data->GetName(),
					*Entry.State.ToString(), Entry.Flipbook != nullptr ? *Entry.Flipbook->GetName() : TEXT("NULL"),
					Entry.Flipbook != nullptr ? Entry.Flipbook->GetNumFrames() : 0,
					Entry.Flipbook != nullptr ? Entry.Flipbook->GetFramesPerSecond() : 0.0f);
			}
		}
		return 0;
	}

	const TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("DIYPaper2D"));
	if (!Plugin.IsValid())
	{
		UE_LOG(LogDIYPaperPoC, Error, TEXT("[PaperPoC] Plugin DIYPaper2D not found."));
		return 1;
	}

	const FString ArtDir = FPaths::Combine(Plugin->GetBaseDir(), TEXT("ArtSource"), TEXT("PaperPoC"));
	if (!FPaths::DirectoryExists(ArtDir))
	{
		UE_LOG(LogDIYPaperPoC, Error, TEXT("[PaperPoC] ArtSource folder not found: %s"), *ArtDir);
		return 1;
	}

	// Paper2D's DefaultSpriteMaterial is a *masked* material: coplanar layers depth-test against
	// each other and z-fight. Translucent materials are sorted per component by sort priority.
	UMaterialInterface* UnlitMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Paper2D/TranslucentUnlitSpriteMaterial.TranslucentUnlitSpriteMaterial"));
	UMaterialInterface* LitMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Paper2D/TranslucentLitSpriteMaterial.TranslucentLitSpriteMaterial"));
	if (UnlitMaterial == nullptr)
	{
		UE_LOG(LogDIYPaperPoC, Error, TEXT("[PaperPoC] Could not load /Paper2D/TranslucentUnlitSpriteMaterial."));
		return 1;
	}

	const TArray<FSheetDef> Sheets = {
		{ TEXT("Head"), TEXT("Walk"), 8, 10.0f },
		{ TEXT("Head"), TEXT("Idle"), 4, 6.0f },
		{ TEXT("Head"), TEXT("Run"), 8, 14.0f },
		{ TEXT("Torso"), TEXT("Walk"), 8, 10.0f },
		{ TEXT("Torso"), TEXT("Idle"), 4, 6.0f },
		{ TEXT("Torso"), TEXT("Run"), 8, 14.0f },
		{ TEXT("ArmL"), TEXT("Walk"), 8, 10.0f },
		{ TEXT("ArmL"), TEXT("Idle"), 4, 6.0f },
		{ TEXT("ArmL"), TEXT("Run"), 8, 14.0f },
		{ TEXT("ArmR"), TEXT("Walk"), 8, 10.0f },
		{ TEXT("ArmR"), TEXT("Idle"), 4, 6.0f },
		{ TEXT("ArmR"), TEXT("Run"), 8, 14.0f },
		{ TEXT("Legs"), TEXT("Walk"), 8, 10.0f },
		{ TEXT("Legs"), TEXT("Idle"), 4, 6.0f },
		{ TEXT("Legs"), TEXT("Run"), 8, 14.0f },
		{ TEXT("Shirt"), TEXT("Walk"), 8, 10.0f },
		{ TEXT("Shirt"), TEXT("Idle"), 4, 6.0f },
		{ TEXT("Shirt"), TEXT("Run"), 8, 14.0f },
		{ TEXT("Shoes"), TEXT("Walk"), 8, 10.0f },
		{ TEXT("Shoes"), TEXT("Idle"), 4, 6.0f },
		{ TEXT("Shoes"), TEXT("Run"), 8, 14.0f },
		{ TEXT("HatHelmet"), TEXT("Walk"), 8, 10.0f },
		{ TEXT("HatHelmet"), TEXT("Idle"), 4, 6.0f },
		{ TEXT("HatHelmet"), TEXT("Run"), 8, 14.0f },
		{ TEXT("HatCap"), TEXT("Walk"), 8, 10.0f },
		{ TEXT("HatCap"), TEXT("Idle"), 4, 6.0f },
		{ TEXT("HatCap"), TEXT("Run"), 8, 14.0f }
	};

	TMap<FString, UPaperFlipbook*> Flipbooks;

	struct FFacingArt
	{
		const TCHAR* Suffix;
		EDIY_Facing Facing;
	};

	const FFacingArt FacingArts[] = {
		{ TEXT(""), EDIY_Facing::Front },
		{ TEXT("_Right"), EDIY_Facing::Right },
		{ TEXT("_Left"), EDIY_Facing::Left }
	};

	for (const FSheetDef& Sheet : Sheets)
	{
		for (const FFacingArt& FacingArt : FacingArts)
		{
			const FString ArtStem = FString::Printf(TEXT("%s_%s%s"), *Sheet.Layer, *Sheet.State, FacingArt.Suffix);
			const FString BaseFile = FPaths::Combine(ArtDir, ArtStem + TEXT(".png"));
			const FString NormalFile = FPaths::Combine(ArtDir, ArtStem + TEXT("_N.png"));

			const FString BaseName = FString::Printf(TEXT("T_%s_Base"), *ArtStem);
			const FString NormalName = FString::Printf(TEXT("T_%s_Normal"), *ArtStem);

			UTexture2D* Atlas = ImportTexture(BaseFile, BaseName, /*bNormalMap=*/false);
			UTexture2D* NormalAtlas = ImportTexture(NormalFile, NormalName, /*bNormalMap=*/true);

			if (Atlas == nullptr)
			{
				UE_LOG(LogDIYPaperPoC, Error, TEXT("[PaperPoC] Aborting: missing atlas %s."), *ArtStem);
				return 1;
			}

			TArray<UPaperSprite*> Sprites;
			for (int32 FrameIndex = 0; FrameIndex < Sheet.Frames; ++FrameIndex)
			{
				const FString SpriteName = FString::Printf(TEXT("S_%s_%02d"), *ArtStem, FrameIndex);
				UPaperSprite* Sprite = CreateSprite(Atlas, NormalAtlas, SpriteName, FrameIndex, UnlitMaterial);
				if (Sprite == nullptr)
				{
					return 1;
				}
				Sprites.Add(Sprite);
			}

			const FString FlipbookName = FString::Printf(TEXT("FB_%s"), *ArtStem);
			UPaperFlipbook* Flipbook = CreateFlipbook(FlipbookName, Sprites, Sheet.Fps, UnlitMaterial);
			Flipbooks.Add(ArtStem, Flipbook);
		}
	}

	auto MakeEntries = [&Flipbooks](const FString& Layer) -> TArray<FDIY_FlipbookEntry>
	{
		TArray<FDIY_FlipbookEntry> Entries;
		for (const TCHAR* State : { TEXT("Walk"), TEXT("Idle"), TEXT("Run") })
		{
			const FString Stem = FString::Printf(TEXT("%s_%s"), *Layer, State);
			Entries.Add({ FName(State), EDIY_Facing::Front, Flipbooks.FindRef(Stem) });
			Entries.Add({ FName(State), EDIY_Facing::Right, Flipbooks.FindRef(Stem + TEXT("_Right")) });
			Entries.Add({ FName(State), EDIY_Facing::Left, Flipbooks.FindRef(Stem + TEXT("_Left")) });
		}
		return Entries;
	};

	CreateEquipment(TEXT("DA_Part_Head"), TEXT("Part_Head"), EDIY_EquipSlot::Head, MakeEntries(TEXT("Head")));
	CreateEquipment(TEXT("DA_Part_Torso"), TEXT("Part_Torso"), EDIY_EquipSlot::Torso, MakeEntries(TEXT("Torso")));
	CreateEquipment(TEXT("DA_Part_ArmL"), TEXT("Part_ArmL"), EDIY_EquipSlot::LeftArm, MakeEntries(TEXT("ArmL")));
	CreateEquipment(TEXT("DA_Part_ArmR"), TEXT("Part_ArmR"), EDIY_EquipSlot::RightArm, MakeEntries(TEXT("ArmR")));
	CreateEquipment(TEXT("DA_Part_Legs"), TEXT("Part_Legs"), EDIY_EquipSlot::Legs, MakeEntries(TEXT("Legs")));
	CreateEquipment(TEXT("DA_Equip_Shirt"), TEXT("Equip_Shirt"), EDIY_EquipSlot::Shirt, MakeEntries(TEXT("Shirt")));
	CreateEquipment(TEXT("DA_Equip_Shoes"), TEXT("Equip_Shoes"), EDIY_EquipSlot::Shoes, MakeEntries(TEXT("Shoes")));
	CreateEquipment(TEXT("DA_Equip_Helmet"), TEXT("Equip_Helmet"), EDIY_EquipSlot::Hat, MakeEntries(TEXT("HatHelmet")));
	CreateEquipment(TEXT("DA_Equip_Cap"), TEXT("Equip_Cap"), EDIY_EquipSlot::Hat, MakeEntries(TEXT("HatCap")));

	BuildAnimals(ArtDir, UnlitMaterial);

	const FString MapPackageName = FString::Printf(TEXT("%s/Maps/L_PaperPoC"), ContentRoot);
	UPackage* MapPackage = CreatePackage(*MapPackageName);
	MapPackage->SetFlags(RF_Public | RF_Standalone);

	UWorld::InitializationValues InitValues;
	InitValues.AllowAudioPlayback(false)
		.RequiresHitProxies(false)
		.CreatePhysicsScene(true)
		.CreateNavigation(false)
		.CreateAISystem(false)
		.ShouldSimulatePhysics(false)
		.SetTransactional(true)
		.SetDefaultGameMode(ADIY_PaperPoCGameMode::StaticClass());

	// CreateWorld() runs InitializeNewWorld() internally; calling it again would spawn a second
	// WorldSettings actor and fatal with "Cannot generate unique name for 'WorldSettings'".
	UWorld* World = UWorld::CreateWorld(
		EWorldType::Editor, /*bInformEngineOfWorld=*/false, TEXT("L_PaperPoC"), MapPackage,
		/*bAddToRoot=*/true, ERHIFeatureLevel::Num, &InitValues);
	if (World == nullptr)
	{
		UE_LOG(LogDIYPaperPoC, Error, TEXT("[PaperPoC] Could not create the test world."));
		return 1;
	}

	FWorldContext& WorldContext = GEngine->CreateNewWorldContext(EWorldType::Editor);
	WorldContext.SetCurrentWorld(World);

	if (AWorldSettings* WorldSettings = World->GetWorldSettings())
	{
		WorldSettings->bForceNoPrecomputedLighting = true;
	}

	SpawnSceneActors(World);

	const FString MapFileName = FPackageName::LongPackageNameToFilename(MapPackageName, FPackageName::GetMapPackageExtension());
	const bool bSavedMap = FEditorFileUtils::SaveMap(World, MapFileName);
	if (bSavedMap)
	{
		FAssetRegistryModule::AssetCreated(World);
		const int32 ActorCount = World->GetCurrentLevel() != nullptr ? World->GetCurrentLevel()->Actors.Num() : -1;
		UE_LOG(LogTemp, Display, TEXT("[PaperPoC] Saved map: %s (%d actors, GameMode=%s)"),
			*MapPackageName, ActorCount,
			World->GetWorldSettings() != nullptr ? *GetNameSafe(World->GetWorldSettings()->DefaultGameMode.Get()) : TEXT("None"));
	}
	else
	{
		UE_LOG(LogDIYPaperPoC, Error, TEXT("[PaperPoC] Failed to save map: %s"), *MapPackageName);
	}

	World->DestroyWorld(false);
	GEngine->DestroyWorldContext(World);

	UE_LOG(LogTemp, Display, TEXT("[PaperPoC] Done. Content root: %s, assets: %d flipbooks."), ContentRoot, Flipbooks.Num());
	return bSavedMap ? 0 : 1;
}



















