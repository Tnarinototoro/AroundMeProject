#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PropHuntTypes.h"
#include "PropHuntPropActor.generated.h"

class UStaticMeshComponent;
class UCameraComponent;
class USpringArmComponent;
class APropHuntCharacter;

// 白盒道具（Cube）：Ghost 附身 / Hunter 拾取的目标。
UCLASS()
class PROPHUNT_API APropHuntPropActor : public AActor
{
    GENERATED_BODY()

public:
    APropHuntPropActor();

    virtual void OnConstruction(const FTransform& Transform) override;
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PropHunt")
    UStaticMeshComponent* Mesh;

    // 环绕臂：附身后 Ghost 视角绕 Prop 旋转。
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PropHunt")
    USpringArmComponent* SpringArm;

    // Ghost 附身后镜头绑定到这里。
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PropHunt")
    UCameraComponent* Camera;

    UPROPERTY(Replicated, BlueprintReadOnly, Category = "PropHunt")
    bool bIsPossessed{false};

    UPROPERTY(Replicated, BlueprintReadOnly, Category = "PropHunt")
    class APlayerState* PossessedBy{nullptr};

    // 被 Hunter 拿在手里（null = 没被拿）。
    UPROPERTY(ReplicatedUsing = OnRep_HeldBy, BlueprintReadOnly, Category = "PropHunt")
    APropHuntCharacter* HeldBy{nullptr};

    UFUNCTION()
    void OnRep_HeldBy();

    void AttachToHolder(APropHuntCharacter* Holder);

    // 附身时由 Look 输入驱动，环绕相机旋转。
    void AddOrbitRotation(const FVector2D& Axis);

    // QTE（server 端）
    void BeginQTE();
    void EndQTE();
    void Expel();
    void ReportQTEKey(EPropHuntQTEKey Key);

    UPROPERTY(EditDefaultsOnly, Category = "PropHunt|QTE")
    float BaseRate{0.15f};   // 基础膨胀速率（每秒 15%，约 6.5s 到 100%）

    UPROPERTY(EditDefaultsOnly, Category = "PropHunt|QTE")
    float ShakeRate{0.002f}; // 摇晃加速系数（度/秒）

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // 更新被附身的视觉标记（server 端与 OnRep 都调用）。
    void ApplyPossessedVisual();

protected:
    UFUNCTION()
    void OnRep_bIsPossessed();

    void RandomizeExpectedKey();
    void PushQTEUpdate();

    // QTE 状态（server 端，不复制）
    bool bInQTE{false};
    float QTEProgress{0.0f};
    EPropHuntQTEKey ExpectedKey{EPropHuntQTEKey::Space};
    float FreezeUntil{0.0f};
    float LastYaw{0.0f};
};
