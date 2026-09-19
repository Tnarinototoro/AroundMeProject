#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "PropHuntGhostPawn.generated.h"

class UInputMappingContext;
class UInputAction;
class UWidgetComponent;

// Ghost 的漂浮 Pawn：FloatingPawnMovement + 球体身体。
UCLASS()
class PROPHUNT_API APropHuntGhostPawn : public ADefaultPawn
{
    GENERATED_BODY()

public:
    APropHuntGhostPawn();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // 手动同步 Ghost 位置到 server（FloatingPawnMovement 无 replicated movement）。
    UFUNCTION(Server, Unreliable)
    void ServerUpdateTransform(FVector Location, FRotator Rotation);

    // 复制给所有客户端的位置（Hunter 需要据此算距离）。
    UPROPERTY(ReplicatedUsing = OnRep_GhostLocation)
    FVector GhostLocation{FVector::ZeroVector};

    UPROPERTY(ReplicatedUsing = OnRep_GhostLocation)
    FRotator GhostRotation{FRotator::ZeroRotator};

    UFUNCTION()
    void OnRep_GhostLocation();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PropHunt|Debug")
    bool bShowNameplate{true};

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PropHunt")
    UWidgetComponent* NameplateComponent;

    UPROPERTY()
    UInputMappingContext* DefaultMappingContext;

    UPROPERTY()
    UInputAction* MoveAction;

    UPROPERTY()
    UInputAction* LookAction;

    void SetupInputActions();
    void Move(const struct FInputActionValue& Value);
    void Look(const struct FInputActionValue& Value);
    void UpdateNameplate();

    float TimeSinceLastUpdate{0.0f};
};
