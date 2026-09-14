#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // 更新被附身的视觉标记（server 端与 OnRep 都调用）。
    void ApplyPossessedVisual();

protected:
    UFUNCTION()
    void OnRep_bIsPossessed();
};
