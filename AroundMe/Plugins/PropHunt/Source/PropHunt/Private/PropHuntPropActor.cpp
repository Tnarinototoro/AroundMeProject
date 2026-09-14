#include "PropHuntPropActor.h"

#include "PropHuntTypes.h"
#include "PropHuntCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Net/UnrealNetwork.h"
#include "Engine/StaticMesh.h"
#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"

void APropHuntPropActor::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    // 让场景中已放置的实例也强制 Movable（构造函数的默认值会被序列化覆盖）。
    if (Mesh)
    {
        Mesh->SetMobility(EComponentMobility::Movable);
    }
}

APropHuntPropActor::APropHuntPropActor()
{
    PrimaryActorTick.bCanEverTick = false;

    bReplicates = true;
    SetReplicateMovement(true);
    bAlwaysRelevant = true;

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    RootComponent = Mesh;
    Mesh->SetMobility(EComponentMobility::Movable);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
    if (CubeMesh.Succeeded())
    {
        Mesh->SetStaticMesh(CubeMesh.Object);
    }

    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArm->SetupAttachment(Mesh);
    SpringArm->TargetArmLength = 250.0f;
    SpringArm->bUsePawnControlRotation = false;

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm);
    Camera->SetRelativeLocation(FVector(250.0f, 0.0f, 0.0f));
}

void APropHuntPropActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(APropHuntPropActor, bIsPossessed);
    DOREPLIFETIME(APropHuntPropActor, PossessedBy);
    DOREPLIFETIME(APropHuntPropActor, HeldBy);
}

void APropHuntPropActor::OnRep_HeldBy()
{
    if (HeldBy)
    {
        AttachToHolder(HeldBy);
    }
    else
    {
        // 放下：客户端 detach + 开物理（物理状态由 bReplicateMovement 同步）。
        DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        Mesh->SetSimulatePhysics(true);
    }
}

void APropHuntPropActor::AttachToHolder(APropHuntCharacter* Holder)
{
    if (!Holder)
    {
        return;
    }

    Mesh->SetSimulatePhysics(false);
    AttachToComponent(Holder->GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
    SetActorRelativeLocation(FVector(80.0f, 0.0f, 0.0f));
    SetActorRelativeRotation(FRotator::ZeroRotator);
}

void APropHuntPropActor::AddOrbitRotation(const FVector2D& Axis)
{
    if (!SpringArm)
    {
        UE_LOG(LogPropHunt, Warning, TEXT("[Orbit] SpringArm is NULL"));
        return;
    }

    FRotator ArmRot = SpringArm->GetRelativeRotation();
    UE_LOG(LogPropHunt, Warning, TEXT("[Orbit] before yaw=%.2f pitch=%.2f, axis=(%.2f,%.2f)"), ArmRot.Yaw, ArmRot.Pitch, Axis.X, Axis.Y);
    if (GEngine) { GEngine->AddOnScreenDebugMessage(102, 1.0f, FColor::Orange, FString::Printf(TEXT("[Orbit] yaw=%.1f pitch=%.1f"), ArmRot.Yaw, ArmRot.Pitch)); }
    ArmRot.Yaw += Axis.X;
    ArmRot.Pitch = FMath::Clamp(ArmRot.Pitch + Axis.Y, -80.0f, 80.0f);
    SpringArm->SetRelativeRotation(ArmRot);
}

void APropHuntPropActor::OnRep_bIsPossessed()
{
    ApplyPossessedVisual();
}

void APropHuntPropActor::ApplyPossessedVisual()
{
    // debug 标记：被附身变红，未附身恢复白（后续阶段改为对 Hunter 隐藏）。
    UMaterialInstanceDynamic* DynMat = Cast<UMaterialInstanceDynamic>(Mesh->GetMaterial(0));
    if (!DynMat)
    {
        DynMat = Mesh->CreateAndSetMaterialInstanceDynamic(0);
    }
    if (DynMat)
    {
        DynMat->SetVectorParameterValue(TEXT("Color"), bIsPossessed ? FLinearColor::Red : FLinearColor::White);
    }
}
