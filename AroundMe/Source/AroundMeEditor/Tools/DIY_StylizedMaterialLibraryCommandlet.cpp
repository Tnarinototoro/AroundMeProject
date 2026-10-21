#include "DIY_StylizedMaterialLibraryCommandlet.h"

#include "DIY_StylizedMaterialLibrary.h"

UDIY_StylizedMaterialLibraryCommandlet::UDIY_StylizedMaterialLibraryCommandlet()
{
    IsClient = false;
    IsEditor = true;
    LogToConsole = true;
    ShowErrorCount = true;
    HelpDescription = TEXT("Generates the AroundMe stylized rendering material library.");
}

int32 UDIY_StylizedMaterialLibraryCommandlet::Main(const FString &Params)
{
    FString Message;
    const bool bSuccess = DIYStylizedMaterialLibrary::Generate(Message);
    UE_LOG(LogTemp, Display, TEXT("%s"), *Message);
    return bSuccess ? 0 : 1;
}
