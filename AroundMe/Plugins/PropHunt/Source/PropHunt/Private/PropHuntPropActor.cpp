#include "PropHuntPropActor.h"

#include "PropHuntTypes.h"
#include "PropHuntCharacter.h"
#include "PropHuntPlayerController.h"
#include "PropHuntGameMode.h"
#include "GameFramework/PlayerState.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/Material.h"
#include "Net/UnrealNetwork.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"

void APropHuntPropActor::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    // 让场景中已放置的实例也强制 Movable（构造函数的默认值会被序列化覆盖）。
    if (Mesh)
    {
        Mesh->SetMobility(EComponentMobility::Movable);

        // 确保有动态材质实例（场景旧实例的序列化材质可能覆盖构造函数）。
        if (!Cast<UMaterialInstanceDynamic>(Mesh->GetMaterial(0)))
        {
            Mesh->CreateAndSetMaterialInstanceDynamic(0);
        }
    }

    // 场景旧实例的序列化 attach 关系可能过时，强制 Camera attach 到 SpringArm 末端。
    if (Camera && SpringArm)
    {
        Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
    }
}

APropHuntPropActor::APropHuntPropActor()
{
    PrimaryActorTick.bCanEverTick = true; // QTE 需要 Tick（server 端推进膨胀）

    // 作为 view target 时使用 Camera 组件（SpringArm 末端），而不是 Actor transform。
    bFindCameraComponentWhenViewTarget = true;

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

    // 确保材质是 BasicShapeMaterial（带 "Color" 参数），并预创建动态实例方便变色。
    static ConstructorHelpers::FObjectFinder<UMaterial> ShapeMaterial(TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));
    if (ShapeMaterial.Succeeded())
    {
        Mesh->SetMaterial(0, ShapeMaterial.Object);
    }
    Mesh->CreateAndSetMaterialInstanceDynamic(0);

    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArm->SetupAttachment(Mesh);
    SpringArm->TargetArmLength = 250.0f;
    SpringArm->bUsePawnControlRotation = false;

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
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
    ArmRot.Yaw += Axis.X;
    ArmRot.Pitch = FMath::Clamp(ArmRot.Pitch - Axis.Y, -80.0f, 80.0f);
    SpringArm->SetRelativeRotation(ArmRot);
}

void APropHuntPropActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!HasAuthority())
    {
        return;
    }

    // 只在被附身且被拿时 QTE。
    if (!bIsPossessed || !HeldBy)
    {
        if (bInQTE)
        {
            EndQTE();
        }
        return;
    }

    if (!bInQTE)
    {
        BeginQTE();
    }

    // 冻结中（按对后暂停）。
    const float Now = GetWorld()->GetTimeSeconds();
    if (Now < FreezeUntil)
    {
        return;
    }

    // 旋转速度（度/秒），摇晃越猛涨得越快。
    const float CurrentYaw = GetActorRotation().Yaw;
    const float AngularSpeed = FMath::Abs(CurrentYaw - LastYaw) / DeltaTime;
    LastYaw = CurrentYaw;

    QTEProgress += (BaseRate + ShakeRate * AngularSpeed) * DeltaTime;

    PushQTEUpdate();

    if (QTEProgress >= 1.0f)
    {
        Expel();
    }
}

void APropHuntPropActor::BeginQTE()
{
    bInQTE = true;
    QTEProgress = 0.0f;
    LastYaw = GetActorRotation().Yaw;
    RandomizeExpectedKey();

    if (PossessedBy)
    {
        if (APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(PossessedBy->GetOwningController()))
        {
            PC->ClientShowQTE();
        }
    }
}

void APropHuntPropActor::EndQTE()
{
    bInQTE = false;
    QTEProgress = 0.0f;

    if (PossessedBy)
    {
        if (APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(PossessedBy->GetOwningController()))
        {
            PC->ClientHideQTE();
        }
    }
}

void APropHuntPropActor::Expel()
{
    if (APropHuntGameMode* GM = GetWorld()->GetAuthGameMode<APropHuntGameMode>())
    {
        GM->HandleExpel(this);
    }
}

void APropHuntPropActor::ReportQTEKey(EPropHuntQTEKey Key)
{
    if (!bInQTE)
    {
        return;
    }

    if (Key == ExpectedKey)
    {
        // 命中：暂停 1s + 重新随机。
        FreezeUntil = GetWorld()->GetTimeSeconds() + 1.0f;
        QTEProgress = FMath::Max(0.0f, QTEProgress - 0.05f);
        RandomizeExpectedKey();
    }
    else
    {
        // 未命中：额外惩罚。
        QTEProgress += 0.1f;
    }
}

void APropHuntPropActor::RandomizeExpectedKey()
{
    const int32 KeyIndex = FMath::RandRange(0, 2);
    ExpectedKey = static_cast<EPropHuntQTEKey>(KeyIndex);
}

void APropHuntPropActor::PushQTEUpdate()
{
    if (PossessedBy)
    {
        if (APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(PossessedBy->GetOwningController()))
        {
            PC->ClientUpdateQTE(QTEProgress, ExpectedKey);
        }
    }
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
