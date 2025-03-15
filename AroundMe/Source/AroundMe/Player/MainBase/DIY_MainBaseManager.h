#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "DIY_MainBaseManager.generated.h"

UCLASS()
class AROUNDME_API ADIY_MainBaseManager : public AActor
{
    GENERATED_BODY()

public:	
    // Sets default values for this actor's properties
    ADIY_MainBaseManager();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;



    UPROPERTY( BlueprintReadWrite, EditDefaultsOnly, Category = "BaseMesh")
    class UStaticMeshComponent* BaseMesh;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "BaseCameras")
    TArray<class UCameraComponent*> BaseCameras;


    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "BaseLights")
    TArray<class UPointLightComponent*> BaseLights; 

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "CheckVolume")
    class UBoxComponent* EntranceCollisionCheckVolume;

    UPROPERTY( BlueprintReadWrite, EditDefaultsOnly, Category = "AroundBaseCamera")
	class USpringArmComponent* CameraBoom;

    UPROPERTY(BlueprintReadWrite)
    int32 CurCameraIndex = -1;
public:	
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    UFUNCTION()
    void CheckPawnEntrance(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    // 切换摄像机到基地摄像机
    void SwitchToBaseCamera();

    // 切换摄像机回Pawn的摄像机
    void SwitchToPawnCamera();


    UFUNCTION(BlueprintCallable)
    void SwitchBaseCamToType(EDIY_MainBaseCamLocType inType);

    UFUNCTION(BlueprintCallable)
    void SwitchCamType_Delta(int32 inStep);

private:

    UPROPERTY(EditAnywhere)
    float CameraSwitchRadius = 100.0f;

   

    bool is_watcher_inside = false;
};