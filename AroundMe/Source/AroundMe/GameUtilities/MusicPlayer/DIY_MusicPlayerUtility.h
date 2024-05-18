#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DIY_MusicPlayerUtility.generated.h"


class ADIY_MusicPlayer;
/**
 *
 */
UCLASS(Blueprintable)
class AROUNDME_API UDIY_MusicPlayerUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	// Get ItemManager static singleton
	UFUNCTION(BlueprintCallable, Category = "DIY_MusicPlayerUtilities")
		static ADIY_MusicPlayer* DIY_GetMusicPlayerInstance();

	


	UDIY_MusicPlayerUtility();


private:
	
};

