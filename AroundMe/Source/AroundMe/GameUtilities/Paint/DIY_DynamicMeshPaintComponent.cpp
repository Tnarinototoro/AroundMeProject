#include "DIY_DynamicMeshPaintComponent.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "GameFramework/Actor.h"
#include "Materials/MaterialInstance.h"
#include "Kismet/KismetMathLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/TextureRenderTarget2D.h"
#include "MaterialTypes.h"
#include "../Logs/DIY_LogHelper.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Materials/MaterialParameterCollection.h"
#include "Engine/Canvas.h"
#include "Kismet/KismetMaterialLibrary.h"
UDIY_DynamicMeshPaintComponent::UDIY_DynamicMeshPaintComponent()
{

    PrimaryComponentTick.bCanEverTick = false;
}

void UDIY_DynamicMeshPaintComponent::OnInitializePaintableMaterial()
{

#if 0
    AActor *Owner = GetOwner();

    if (Owner)
    {
        UMeshComponent *MeshComp = Owner->FindComponentByClass<UMeshComponent>();

        if (MeshComp && MeshComp->GetMaterial(0))
        {
            // Create a dynamic material instance
            OriginalDynamicMaterialInstance = MeshComp->CreateAndSetMaterialInstanceDynamic(0);
        }

        if (OriginalDynamicMaterialInstance && SceneCaptureCompo->TextureTarget)
        {
            EASY_LOG_MAINPLAYER("layer stain mask set yyyyyyyyy");
            // Set the texture parameter in the material layer for "Layer1"
            FMaterialParameterInfo info;
            info.Name = FName("StainMask");
            info.Association = EMaterialParameterAssociation::BlendParameter;
            info.Index = 0;

            OriginalDynamicMaterialInstance->SetTextureParameterValueByInfo(info, SceneCaptureCompo->TextureTarget);
        }
    }

#endif
}

void UDIY_DynamicMeshPaintComponent::OnResetComponentValues()
{

    // need to get weathre temperature from world
}

void UDIY_DynamicMeshPaintComponent::BeginPlay()
{
    Super::BeginPlay();
    OnInitializePaintableMaterial();
    OnResetComponentValues();
#if 0
   checkf(UnwrapMaterial != nullptr, TEXT("wrap material is not loaded properly"));
    DynamicMaterialInstance_forCapturing = UKismetMaterialLibrary::CreateDynamicMaterialInstance(GetWorld(),
                                                                                                 UnwrapMaterial);

    checkf(
        nullptr != DynamicMaterialInstance_forCapturing,
        TEXT("capturing material instance is not created properly"));
#endif
}

void UDIY_DynamicMeshPaintComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UDIY_DynamicMeshPaintComponent::AddStainAt(const FVector &WorldPosition, float BrushRadius)
{
#if 0
    AActor *OwnerActor = GetOwner();
    checkf(OwnerActor != nullptr, TEXT("OWner Actor is null this is really weird"));
    if (nullptr == OwnerMeshCompo)
    {
        OwnerMeshCompo = Cast<UStaticMeshComponent>(OwnerActor->GetRootComponent());
        checkf(OwnerMeshCompo != nullptr, TEXT("OWner Actor is null about root staticmesh component"));
    }

    checkf(OriginalDynamicMaterialInstance != nullptr, TEXT("original material should be non-null"));

    OwnerMeshCompo->SetMaterial(0, DynamicMaterialInstance_forCapturing);
    DynamicMaterialInstance_forCapturing->SetVectorParameterValue(
        FName("HitLocation"),
        WorldPosition);
    DynamicMaterialInstance_forCapturing->SetScalarParameterValue(
        FName("BrushRadius"),

        BrushRadius);
#endif
}

void UDIY_DynamicMeshPaintComponent::ClearAllPaint()
{
    
}
