#include "DIY_IconBrowserPanel.h"

#include "Styling/AppStyle.h"
#include "Styling/SlateColor.h"

#include "Widgets/Images/SImage.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SWrapBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Layout/SSeparator.h"
#include "Widgets/SBoxPanel.h"

#include "Styling/SlateStyleRegistry.h"
#include "Styling/SlateStyle.h"
#include "Styling/AppStyle.h"

#include "Styling/SlateStyleRegistry.h"
#include "Styling/ISlateStyle.h"

void DumpAllIconStyles()
{
    FSlateStyleRegistry::IterateAllStyles(
        [](const ISlateStyle &Style)
        {
            const FName StyleSetName = Style.GetStyleSetName();

            // All registered style keys in this style set
            for (const FName &StyleKey : Style.GetStyleKeys())
            {
                // Only keep things that look like icon entries
                const FString KeyString = StyleKey.ToString();
                if (!KeyString.StartsWith(TEXT("Icons.")))
                {
                    continue;
                }

                const FSlateBrush *Brush = Style.GetBrush(StyleKey);
                if (!Brush)
                {
                    continue;
                }

                UE_LOG(LogTemp, Log, TEXT("StyleSet: %s  Key: %s  Resource: %s"),
                       *StyleSetName.ToString(),
                       *KeyString,
                       *Brush->GetResourceName().ToString());
            }

            return true; // continue iteration
        });
}

void SDIY_IconBrowserPanel::Construct(const FArguments &InArgs)
{
    DumpAllIconStyles();
    ToolPtr = InArgs._Tool;

    ChildSlot
        [SNew(SVerticalBox)

         // Header
         + SVerticalBox::Slot()
               .AutoHeight()
               .Padding(4.0f, 4.0f)
                   [SNew(STextBlock)
                        .Text(FText::FromString(TEXT("Unreal Icon Browser")))
                        .Font(FAppStyle::Get().GetFontStyle("BoldFont"))]

         // Separator
         + SVerticalBox::Slot()
               .AutoHeight()
               .Padding(4.0f, 0.0f)
                   [SNew(SSeparator)]

         // Icon grid
         + SVerticalBox::Slot()
               .FillHeight(1.0f)
               .Padding(4.0f)
                   [SNew(SScrollBox) + SScrollBox::Slot()
                                           [SAssignNew(IconWrapBox, SWrapBox)
                                                .UseAllottedSize(true)]]];

    BuildIconItems();
}
void SDIY_IconBrowserPanel::BuildIconItems()
{
    if (!IconWrapBox.IsValid())
    {
        return;
    }

    IconWrapBox->ClearChildren();

    static const TCHAR *IconNames[] =
        {
            // ==== CoreStyle / common ====
            TEXT("Icons.Denied"),
            TEXT("Icons.Help"),
            TEXT("Icons.Download"),
            TEXT("Icons.Server"),
            TEXT("Icons.Cloud"),
            TEXT("Icons.Local"),

            TEXT("Icons.Alert"),
            TEXT("Icons.Error"),
            TEXT("Icons.Error.Large"),
            TEXT("Icons.ErrorWithColor"),
            TEXT("Icons.ErrorWithColor.Large"),

            TEXT("Icons.Warning"),
            TEXT("Icons.Warning.Large"),
            TEXT("Icons.WarningWithColor"),
            TEXT("Icons.WarningWithColor.Large"),
            TEXT("Icons.WarningWithColor.Thumbnail"),

            TEXT("Icons.Info"),
            TEXT("Icons.Info.Small"),
            TEXT("Icons.Info.Large"),
            TEXT("Icons.InfoWithColor"),
            TEXT("Icons.InfoWithColor.Large"),

            TEXT("Icons.Success"),
            TEXT("Icons.Success.Large"),
            TEXT("Icons.SuccessWithColor"),
            TEXT("Icons.SuccessWithColor.Large"),

            TEXT("Icons.AlertCircle"),
            TEXT("Icons.AlertCircleWithColor"),

            TEXT("Icons.box-perspective"),
            TEXT("Icons.cylinder"),
            TEXT("Icons.pyramid"),
            TEXT("Icons.sphere"),

            TEXT("Icons.Settings"),
            TEXT("Icons.Blueprints"),

            TEXT("Icons.Cross"),
            TEXT("Icons.Plus"),
            TEXT("Icons.Minus"),
            TEXT("Icons.PlusCircle"),
            TEXT("Icons.MinusCircle"),
            TEXT("Icons.X"),
            TEXT("Icons.XCircle"),
            TEXT("Icons.Delete"),

            TEXT("Icons.Save"),
            TEXT("Icons.SaveModified"),

            TEXT("Icons.Favorites.Small"),
            TEXT("Icons.Import"),
            TEXT("Icons.Filter"),
            TEXT("Icons.AutoFilter"),

            TEXT("Icons.Lock"),
            TEXT("Icons.Unlock"),
            TEXT("Icons.Normalize"),

            TEXT("Icons.CircleArrowLeft"),
            TEXT("Icons.CircleArrowRight"),
            TEXT("Icons.CircleArrowUp"),
            TEXT("Icons.CircleArrowDown"),

            TEXT("Icons.ArrowLeft"),
            TEXT("Icons.ArrowRight"),
            TEXT("Icons.ArrowUp"),
            TEXT("Icons.ArrowDown"),

            TEXT("Icons.Check"),
            TEXT("Icons.FolderOpen"),
            TEXT("Icons.FolderClosed"),

            TEXT("Icons.ChevronLeft"),
            TEXT("Icons.ChevronRight"),
            TEXT("Icons.ChevronUp"),
            TEXT("Icons.ChevronDown"),

            TEXT("Icons.Search"),
            TEXT("Icons.FilledCircle"),
            TEXT("Icons.Duplicate"),
            TEXT("Icons.Edit"),
            TEXT("Icons.Visible"),
            TEXT("Icons.Hidden"),
            TEXT("Icons.DragHandle"),
            TEXT("Icons.Refresh"),
            TEXT("Icons.Star"),
            TEXT("Icons.Link"),
            TEXT("Icons.Unlink"),

            TEXT("Icons.BulletPoint"),
            TEXT("Icons.BulletPoint16"),
            TEXT("Icons.SortDown"),
            TEXT("Icons.SortUp"),

            TEXT("Icons.EyeDropper"),
            TEXT("Icons.C++"),
            TEXT("Icons.Advanced"),
            TEXT("Icons.Launch"),

            TEXT("Icons.Rotate90Clockwise"),
            TEXT("Icons.Rotate90CounterClockwise"),
            TEXT("Icons.Rotate180"),
            TEXT("Icons.FlipHorizontal"),
            TEXT("Icons.FlipVertical"),

            TEXT("Icons.Layout"),
            TEXT("Icons.Recent"),

            TEXT("Icons.Badge"),
            TEXT("Icons.BadgeModified"),

            TEXT("Icons.Toolbar.Settings"),
            TEXT("Icons.ConstraintManager.LookAt"),
            TEXT("Icons.ConstraintManager.ParentHierarchy"),
            TEXT("Icons.Role"),
            TEXT("Icons.Merge"),
            TEXT("Icons.Calendar"),

            // ==== UMGCoreStyle basic ====
            TEXT("Icons.Contact"),
            TEXT("Icons.Crop"),
            TEXT("Icons.Fullscreen"),

            // ==== EditorStyle / editor common ====
            TEXT("Icons.SaveChanged"),
            TEXT("Icons.DirtyBadge"),
            TEXT("Icons.MakeStaticMesh"),
            TEXT("Icons.Documentation"),
            TEXT("Icons.Support"),
            TEXT("Icons.Package"),
            TEXT("Icons.Comment"),
            TEXT("Icons.SelectInViewport"),
            TEXT("Icons.BrowseContent"),
            TEXT("Icons.Use"),

            TEXT("Icons.Next"),
            TEXT("Icons.Previous"),
            TEXT("Icons.Visibility"),
            TEXT("Icons.World"),
            TEXT("Icons.Details"),
            TEXT("Icons.Convert"),
            TEXT("Icons.Adjust"),
            TEXT("Icons.PlaceActors"),
            TEXT("Icons.ReplaceActor"),
            TEXT("Icons.GroupActors"),
            TEXT("Icons.FrameActor"),
            TEXT("Icons.Transform"),
            TEXT("Icons.SetShowPivot"),
            TEXT("Icons.Snap"),

            TEXT("Icons.Event"),
            TEXT("Icons.JumpToEvent"),
            TEXT("Icons.Level"),
            TEXT("Icons.Play"),
            TEXT("Icons.Localization"),
            TEXT("Icons.Audit"),
            TEXT("Icons.Blueprint"),
            TEXT("Icons.Color"),
            TEXT("Icons.LOD"),
            TEXT("Icons.SkeletalMesh"),

            TEXT("Icons.OpenInExternalEditor"),
            TEXT("Icons.OpenSourceLocation"),
            TEXT("Icons.OpenInBrowser"),
            TEXT("Icons.Find"),
            TEXT("Icons.Validate"),

            TEXT("Icons.Pinned"),
            TEXT("Icons.Unpinned"),

            TEXT("Icons.Tools"),
            TEXT("Icons.Clipboard"),
            TEXT("Icons.HollowHeart"),
            TEXT("Icons.Heart"),
            TEXT("Icons.RecentAssets"),
            TEXT("Icons.Scalability"),

            TEXT("Icons.Toolbar.Play"),
            TEXT("Icons.Toolbar.Pause"),
            TEXT("Icons.Toolbar.Stop"),
            TEXT("Icons.Toolbar.Details"),
            TEXT("Icons.Toolbar.Import"),
            TEXT("Icons.Toolbar.Export"),

            TEXT("Icons.Alert.Solid"),
            TEXT("Icons.Alert.Badge"),
            TEXT("Icons.Alert.Background"),
            TEXT("Icons.Error.Solid"),
            TEXT("Icons.Error.Background"),
            TEXT("Icons.Warning.Solid"),
            TEXT("Icons.Warning.Background"),

            TEXT("Icons.PromoteElements"),
            TEXT("Icons.DemoteElements"),
            TEXT("Icons.NaniteBrowseContent"),
            TEXT("Icons.TextEditor"),
        };

    for (const TCHAR *IconName : IconNames)
    {
        const FName BrushName(IconName);
        const FSlateBrush *MissingBrush = FAppStyle::GetNoBrush();
        // Use GetOptionalBrush so missing brushes return nullptr instead of default brush
        // const FSlateBrush* Brush = FAppStyle::Get().GetOptionalBrush(BrushName);
        // if (Brush == MissingBrush)
        // {
        // 	continue;
        // }
        const FSlateBrush *Brush = FAppStyle::Get().GetBrush(BrushName);
        if (!Brush)
        {
            continue;
        }

        IconWrapBox->AddSlot()
            .Padding(FMargin(4.0f))
                [SNew(SBorder)
                     .Padding(FMargin(8.0f))
                     .BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
                         [SNew(SHorizontalBox) + SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)[SNew(SImage).Image(Brush).DesiredSizeOverride(FVector2D(16.0f, 16.0f))] + SHorizontalBox::Slot().AutoWidth().Padding(FMargin(8.0f, 0.0f, 0.0f, 0.0f)).VAlign(VAlign_Center)[SNew(STextBlock).Text(FText::FromString(FString(IconName)))]]];
    }
}
