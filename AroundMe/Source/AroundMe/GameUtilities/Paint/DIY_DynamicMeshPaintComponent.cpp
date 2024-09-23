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
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/Private/Sigua_Folder/MeshPaintBackground.MeshPaintBackground"));

    BackgroundPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackgroundPlane"));
    if (MeshAsset.Succeeded())
    {
        BackgroundPlane->SetStaticMesh(MeshAsset.Object);
    }
    BackgroundPlane->SetupAttachment(this);
    BackgroundPlane->SetRelativeScale3D({50.f, 50.f, 1.0f});
    BackgroundPlane->SetRelativeLocation({0.f, 0.f, -1000.f});

    SceneCaptureCompo = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureCompo"));

    SceneCaptureCompo->SetupAttachment(this);

    SceneCaptureCompo->SetRelativeRotation({-90, 0.f, -90});
    SceneCaptureCompo->SetRelativeLocation({0.f, 0.f, 500.f});
    SceneCaptureCompo->ProjectionType = ECameraProjectionMode::Orthographic;
    SceneCaptureCompo->OrthoWidth = 500.0f;
    SceneCaptureCompo->CompositeMode = ESceneCaptureCompositeMode::SCCM_Additive;
    SceneCaptureCompo->bCaptureEveryFrame = false;
    SceneCaptureCompo->bCaptureOnMovement = false;

    static ConstructorHelpers::FObjectFinder<UTextureRenderTarget2D> RenderTargetAsset(TEXT("/Game/Private/Sigua_Folder/RT_Capture.RT_Capture"));
    /// Script/Engine.MaterialParameterCollection'/Game/Private/Sigua_Folder/MPC_DynamicMeshPaint.MPC_DynamicMeshPaint'
    if (RenderTargetAsset.Succeeded())
    {

        SceneCaptureCompo->TextureTarget = RenderTargetAsset.Object;
    }

    static ConstructorHelpers::FObjectFinder<UMaterialParameterCollection> MPC_Asset(TEXT("/Game/Private/Sigua_Folder/MPC_DynamicMeshPaint.MPC_DynamicMeshPaint"));

    if (MPC_Asset.Succeeded())
    {

        Global_DynamicPaintMaterialCollection = MPC_Asset.Object;
    }
    static ConstructorHelpers::FObjectFinder<UMaterial> UnwrapMaterial_Asset(TEXT("/Game/MeshPainter/Materials/M_Unwrap.M_Unwrap"));

    if (UnwrapMaterial_Asset.Succeeded())
    {
        UnwrapMaterial = UnwrapMaterial_Asset.Object;
    }
}

void UDIY_DynamicMeshPaintComponent::OnInitializePaintableMaterial()
{

    UKismetMaterialLibrary::SetScalarParameterValue(
        GetWorld(),
        Global_DynamicPaintMaterialCollection,
        FName("CaptureSize"),
        SceneCaptureCompo->OrthoWidth);

    UKismetMaterialLibrary::SetVectorParameterValue(GetWorld(),
                                                    Global_DynamicPaintMaterialCollection,
                                                    FName("UnwrapLocation"),
                                                    UnwrapPosition);

    // delay
    // clear render target

#if 1
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
    checkf(UnwrapMaterial != nullptr, TEXT("wrap material is not loaded properly"));
    DynamicMaterialInstance_forCapturing = UKismetMaterialLibrary::CreateDynamicMaterialInstance(GetWorld(),
                                                                                                 UnwrapMaterial);

    checkf(
        nullptr != DynamicMaterialInstance_forCapturing,
        TEXT("capturing material instance is not created properly"));

    UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), SceneCaptureCompo->TextureTarget);
}

void UDIY_DynamicMeshPaintComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UDIY_DynamicMeshPaintComponent::AddStainAt(const FVector &WorldPosition, float BrushRadius)
{

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

    SceneCaptureCompo->CaptureScene();

    OwnerMeshCompo->SetMaterial(0, OriginalDynamicMaterialInstance);

#if 0
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

#endif
}