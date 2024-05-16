#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_MainPlayerActionController.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_MainPlayerActionController : public UActorComponent
{
    GENERATED_BODY()

public:    
    // 设置默认值
    UDIY_MainPlayerActionController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:    
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // 一个自定义的属性
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Custom")
    float CustomValue;

    // 一个自定义的函数
    UFUNCTION(BlueprintCallable, Category="Custom")
    void CustomFunction();

    void ProcessJumpInput();
};
