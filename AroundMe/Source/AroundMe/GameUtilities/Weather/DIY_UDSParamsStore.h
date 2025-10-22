// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "DIY_UDSParamsStore.generated.h" 

UCLASS()
class AROUNDME_API ADIY_UDSParamsStore : public AActor
{
    GENERATED_BODY()

public:
    ADIY_UDSParamsStore();
    ~ADIY_UDSParamsStore();

private:
    

protected:
   
   

public:


    UFUNCTION(BlueprintImplementableEvent, Category="DIY_UDSParamsStore")
    void SetParam_TimeOfDay(float InTimeOfDay);
    
    
};