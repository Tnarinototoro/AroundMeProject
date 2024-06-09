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
  static bool IsFlagSet(const int32 &inOriginCombinedFlag, const uint8 &inFlag) 
  {
    ensure(inOriginCombinedFlag>=0);
    return inOriginCombinedFlag & GetRealValueFromFlag(inFlag);
  }

  UFUNCTION(BlueprintCallable, Category = "DIY_InteractionUtility")
  static void SetFlag(int32 &OutOriginCombinedFlag,const uint8 &inFlag) 
  {
    ensure(OutOriginCombinedFlag>=0);
    OutOriginCombinedFlag |= GetRealValueFromFlag(inFlag);
  }

  UFUNCTION(BlueprintCallable, Category = "DIY_InteractionUtility")
  static void UnSetFlag(int32 &OutOriginCombinedFlag,const uint8 &inFlag) 
  {
    
    ensure(OutOriginCombinedFlag>=0);
    OutOriginCombinedFlag &= (~GetRealValueFromFlag(inFlag));
  }
  UFUNCTION(BlueprintCallable, Category = "DIY_InteractionUtility")
      static void ApplyDamage(const FDIY_DamageInfo& inDamageInfo);


private:

  static uint32 GetRealValueFromFlag(const uint8 &inFlag) 
  {
    return (1 << static_cast<uint32>(inFlag));
  }
};
