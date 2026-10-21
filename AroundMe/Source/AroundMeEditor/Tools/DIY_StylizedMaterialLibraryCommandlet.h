#pragma once

#include "Commandlets/Commandlet.h"
#include "DIY_StylizedMaterialLibraryCommandlet.generated.h"

UCLASS()
class UDIY_StylizedMaterialLibraryCommandlet : public UCommandlet
{
    GENERATED_BODY()

public:
    UDIY_StylizedMaterialLibraryCommandlet();

    virtual int32 Main(const FString &Params) override;
};
