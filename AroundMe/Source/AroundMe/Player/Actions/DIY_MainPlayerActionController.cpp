#include "DIY_MainPlayerActionController.h"

UDIY_MainPlayerActionController::UDIY_MainPlayerActionController()
{
      // 启用每帧调用Tick()
    PrimaryComponentTick.bCanEverTick = true;

    // 初始化自定义属性
    CustomValue = 0.0f;
}

void UDIY_MainPlayerActionController::BeginPlay()
{
    Super::BeginPlay();
}

void UDIY_MainPlayerActionController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UDIY_MainPlayerActionController::CustomFunction()
{
     // 打印自定义值
    UE_LOG(LogTemp, Warning, TEXT("Custom Value: %f"), CustomValue);
}

void UDIY_MainPlayerActionController::ProcessJumpInput()
{
    
}
