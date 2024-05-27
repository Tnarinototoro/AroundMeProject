#pragma once

#include "CoreMinimal.h"
#include "DIY_EmergentInteractDefines.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "DIY_InteractionUtility.generated.h"

UCLASS(Blueprintable)
class AROUNDME_API UDIY_InteractionUtility : public UBlueprintFunctionLibrary 
{

  GENERATED_BODY()

public:
  
  UFUNCTION(BlueprintCallable, Category = "DIY_InteractionUtility")
  static bool IsFlagSet(const int32 &inOriginCombinedFlag, const EDIY_InteractItemFlag &inFlag) 
  {
    return inOriginCombinedFlag | GetRealValueFromFlag(inFlag);
  }

  UFUNCTION(BlueprintCallable, Category = "DIY_InteractionUtility")
  static void SetFlag(int32 &OutOriginCombinedFlag,const EDIY_InteractItemFlag &inFlag) 
  {
    OutOriginCombinedFlag |= GetRealValueFromFlag(inFlag);
  }

  UFUNCTION(BlueprintCallable, Category = "DIY_InteractionUtility")
  static void UnSetFlag(int32 &OutOriginCombinedFlag,const EDIY_InteractItemFlag &inFlag) 
  {
    
    
    OutOriginCombinedFlag &= (~GetRealValueFromFlag(inFlag));
  }
private:

  static uint32 GetRealValueFromFlag(const EDIY_InteractItemFlag &inFlag) 
  {

    return (1 << static_cast<uint32>(inFlag));
  }
};
