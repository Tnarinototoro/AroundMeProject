#pragma once

#include "Widgets/SCompoundWidget.h"

class FIconBrowserTool;
class SWrapBox;

class SDIY_IconBrowserPanel : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SDIY_IconBrowserPanel) {}
    SLATE_ARGUMENT(TWeakPtr<FIconBrowserTool>, Tool)
    SLATE_END_ARGS()

    virtual ~SDIY_IconBrowserPanel() {}
    void Construct(const FArguments &InArgs);

protected:
    TWeakPtr<FIconBrowserTool> ToolPtr;

    /** Wrap box that holds all icon cards */
    TSharedPtr<SWrapBox> IconWrapBox;

    /** Build / rebuild all icon widgets */
    void BuildIconItems();
};
