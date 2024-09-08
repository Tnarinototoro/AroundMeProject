#include "DIY_DynamicMeshPaintComponent.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "GameFramework/Actor.h"
#include "Materials/MaterialInstance.h"
#include "Kismet/KismetMathLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/TextureRenderTarget2D.h"
#include "MaterialTypes.h"
#include "../Logs/DIY_LogHelper.h"
#include "Engine/Canvas.h"
UDIY_DynamicMeshPaintComponent::UDIY_DynamicMeshPaintComponent()
{

    PrimaryComponentTick.bCanEverTick = false;
}

void UDIY_DynamicMeshPaintComponent::OnInitializePaintableMaterial()
{
    AActor *Owner = GetOwner();

    if (Owner)
    {
        UMeshComponent *MeshComp = Owner->FindComponentByClass<UMeshComponent>();

        if (MeshComp && MeshComp->GetMaterial(0))
        {
            // Create a dynamic material instance
            DynamicMaterialInstance = MeshComp->CreateAndSetMaterialInstanceDynamic(0);
        }

        // Create a render target for the stain mask
        StainRenderTarget = UKismetRenderingLibrary::CreateRenderTarget2D(this, 1024, 1024, ETextureRenderTargetFormat::RTF_RGBA16f);

        if (DynamicMaterialInstance && StainRenderTarget)
        {
            EASY_LOG_MAINPLAYER("layer stain mask set yyyyyyyyy");
            // Set the texture parameter in the material layer for "Layer1"
            FMaterialParameterInfo info;
            info.Name = FName("StainMask");
            info.Association = EMaterialParameterAssociation::BlendParameter;
            info.Index = 0;
            // DynamicMaterialInstance->SetTextureParameterValue(FName("Layer1.StainMask"), StainRenderTarget);
            DynamicMaterialInstance->SetTextureParameterValueByInfo(info, StainRenderTarget);
        }
    }
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
}

void UDIY_DynamicMeshPaintComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UDIY_DynamicMeshPaintComponent::AddStainAt(const FVector2D &HitLocationUV)
{
    EASY_LOG_MAINPLAYER("AddStainAt executed");
    if (!StainRenderTarget || !DynamicMaterialInstance)
        return;

    FVector2D UVCoords = FVector2D(0.5f, 0.5f); // Simplified conversion

    if (ClearMaterial)
    {
        FMaterialParameterInfo info;
        info.Name = FName("StainMask");
        info.Association = EMaterialParameterAssociation::BlendParameter;
        info.Index = 0;

        UCanvas *cur_canvas{nullptr};
        FVector2D cur_canvas_size;
        FDrawToRenderTargetContext cur_context;
        float brush_size = 100;

        UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(GetWorld(), StainRenderTarget, cur_canvas, cur_canvas_size, cur_context);
        EASY_LOG_MAINPLAYER("AddStainAt executed XXXXXXXXXX canvas size %f, %f \n uv %f, %f", cur_canvas_size.X, cur_canvas_size.Y, HitLocationUV.X, HitLocationUV.Y);

        FVector2D Screnn_pos = HitLocationUV * cur_canvas_size - FVector2D{brush_size / 2.0f, brush_size / 2.0f};

        cur_canvas->K2_DrawMaterial(ClearMaterial, Screnn_pos, FVector2D{brush_size, brush_size}, {0.0f, 0.0f});
        UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(GetWorld(), cur_context);
        // UKismetRenderingLibrary::DrawMaterialToRenderTarget(GetWorld(), StainRenderTarget, ClearMaterial);
    }
}