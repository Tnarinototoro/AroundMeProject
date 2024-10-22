// Copyright Sun BoHeng 2022

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "RuntimeVertexPainterBPLibrary.generated.h"

// The FColor channel in which you'll paint.
UENUM(BlueprintType)
enum class EPaintChannel : uint8
{
    // RGBA,typically if you want to use vertex color as a color
    RGBA,
    // Select one channel to paint,which is useful when you want use vertex color as mask
    R,
    G,
    B,
    A,
};

// A shape,used as paint brush sphape
UENUM(BlueprintType)
enum class EPaintShape : uint8
{
    Sphere,
    Box,
};

// A shape,used as paint brush sphape
UENUM(BlueprintType)
enum class EPaintMode : uint8
{
    // only for debug not really use it
    EPM_SET,
    EPM_ADD,
    EPM_SUB,
    EPM_MUL
};

// To make an Array of Array,like TArray<TArray<FColor>>
// Each LOD needs a TArray<FColor>,we need to create an array to save these arrays
// Use Struct to make Array nesting
USTRUCT(BlueprintType)
struct FVertexColorsArray
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadWrite, Category = "RuntimeVertexPainter")
    TArray<FColor> VertexColors;
};

// This is a struct for StaticMeshComponent vertex-painting process.
// This struct is used to stage/pass information in BeginPaint-Paint-EndPaint
USTRUCT(BlueprintType)
struct FRVPContext
{
    GENERATED_BODY()
    UPROPERTY()
    UStaticMeshComponent *StaticMeshComponent;

    UPROPERTY()
    TArray<FVertexColorsArray> VertexColorsArray;

    UPROPERTY()
    EPaintChannel Channel;

    UPROPERTY()
    bool bSingleLOD;

    UPROPERTY()
    uint32 LODIndex;
};

// This is a struct for SkeletalMeshComponent vertex-painting process.
// This struct is used to stage/pass information in BeginPaint-Paint-EndPaint
USTRUCT(BlueprintType)
struct FRVPContextSK
{
    GENERATED_BODY()
    UPROPERTY()
    USkeletalMeshComponent *SkeletalMeshComponent;

    UPROPERTY()
    TArray<FVertexColorsArray> VertexColorsArray;

    UPROPERTY()
    EPaintChannel Channel;

    UPROPERTY()
    bool bSingleLOD;

    UPROPERTY()
    uint32 LODIndex;
};

UCLASS()
class RUNTIMEVERTEXPAINTER_API URuntimeVertexPainterBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_UCLASS_BODY()

    // Vertex-painting functions for static mesh component-----------------------------------------------------------------------------------------START

    /*Begin paint vertex color in a static mesh component,needs EndPaintVertexColor to finish painting and override resource
     *Parameters:
     *StaticMeshComponent:A pointer to StaticMeshComponent,in which you want to paint vertices on
     *OutContext:A reference,used as an output value,a FRVPContext for vertex-painting functions
     *PaintChannel:In which channel you'll paint.If RGBA,paint in all channels
     *bPaintInSingleLOD:bool,if false,paint vertex color in all LODs
     *LODIndex:if bPaintInSingleLOD = true,in which LOD you'll paint
     */
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "BeginPaintVertexColor_SM"),
              Category = "RuntimeVertexPainter|StaticMesh")
    static bool BeginPaintVertexColor_SM(UStaticMeshComponent *StaticMeshComponent,
                                         FRVPContext &OutContext, EPaintChannel PaintChannel = EPaintChannel::RGBA, bool bPaintInSingleLOD = false, int32 LODIndex = 0);

    /*Finish paint vertex color of static mesh
     *Parameters:
     *Context:The context BeginPaintVertexColor outputs
     */
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "EndPaintVertexColor_SM"),
              Category = "RuntimeVertexPainter|StaticMesh")
    static void EndPaintVertexColor_SM(FRVPContext Context);

    /*Paint vertex color of vertices in range of a shape
     *Parameters:
     *Context:A reference used as a input value,which should be the context BeginPaintVertexColor outputs
     *Position/Extent/Rotation:World Position/Extent/Rotation of PaintShape
     *PaintShape:the shape of brush
     *Color:The Color you'll paint,only use the channel of PaintChannel
     *Opacity:The opacity of color,if 1,override old color.Calculate like lerp(OldColor,Color,Opacity).
     *FallOff:A float curve,also used like Opacity,falloff opacity along Extent.Key value should bi in [0,1]
     *bConvertToSRGB:Convert LinearColor to FColor,whether convert to SRGB
     */
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "PaintVertexColorinShape_SM"),
              Category = "RuntimeVertexPainter|StaticMesh")
    static void ContextPaintVertexColorInShape_SM(UPARAM(ref) FRVPContext &Context, FVector Position, FVector Extent, FRotator Rotation, EPaintShape PaintShape,
                                                  FLinearColor Color, EPaintMode inMode, float Opacity = 1, UCurveFloat *FallOff = nullptr,
                                                  bool bConvertToSRGB = true);

    /*Paint vertex color of all vertices of StaticMeshComponent
     *Parameters:
     *Context:A reference used as a input value,which should be the context BeginPaintVertexColor outputs
     *Color:The Color you'll paint,only use the channel of PaintChannel
     *Opacity:The opacity of color,if 1,override old color.Calculate like lerp(OldColor,Color,Opacity).
     *bConvertToSRGB:Convert LinearColor to FColor,whether convert to SRGB
     */
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "PaintAllVerticesColor_SM"),
              Category = "RuntimeVertexPainter|StaticMesh")
    static void ContextPaintAllVerticesColor_SM(UPARAM(ref) FRVPContext &Context, FLinearColor Color, EPaintMode inMode, float Opacity = 1, bool bConvertToSRGB = true);

    // Vertex-painting functions for static mesh component-----------------------------------------------------------------------------------------END

    // Functions for skeletal mesh component-----------------------------------------------------------------------------------------------------------START
    // Thiese functions are same like three functions above,but designed for skeletal mesh component

    /*Begin paint vertex color in a skeletal mesh component,needs EndPaintSkeletalMeshVertexColor to finish painting and override resource
     *Parameters:
     *SkeletalMeshComponent:A pointer to SkeletalMeshComponent,in which you want to paint vertices on
     *ContextSK:A reference,used as an output value,a FRVPContextSK for vertex-painting functions
     *PaintChannel:In which channel you'll paint.If RGBA,paint in all channels
     *bPaintInSingleLOD:bool,if false,paint vertex color in all LODs
     *LODIndex:if bPaintInSingleLOD = true,in which LOD you'll paint
     */
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "BeginPaintVertexColor_SKM"),
              Category = "RuntimeVertexPainter|SkeletalMesh")
    static bool BeginPaintVertexColor_SKM(USkeletalMeshComponent *SkeletalMeshComponent,
                                          FRVPContextSK &ContextSK, EPaintChannel PaintChannel = EPaintChannel::RGBA, bool bPaintInSingleLOD = false, int32 LODIndex = 0);

    /*Finish paint vertex color of static mesh
     *Parameters:
     *ContextSK:The context BeginPaintSkeletalMeshVertexColor outputs
     */
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "EndPaintVertexColor_SKM"),
              Category = "RuntimeVertexPainter|SkeletalMesh")
    static void EndPaintVertexColor_SKM(FRVPContextSK ContextSK);

    /*Paint vertex color of vertices in range of a shape
     *Parameters:
     *ContextSK:A reference used as a input value,which should be context BeginPaintSkeletalMeshVertexColor outputs
     *Position/Extent/Rotation:World Position/Extent/Rotation of PaintShape
     *PaintShape:the shape of brush
     *Color:The Color you'll paint,only use the channel of PaintChannel
     *Opacity:The opacity of color,if 1,override old color.Calculate like lerp(OldColor,Color,Opacity).
     *FallOff:A float curve,also used like Opacity,falloff opacity along Extent.Key value should bi in [0,1]
     *bConvertToSRGB:Convert LinearColor to FColor,whether convert to SRGB
     */
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "PaintVertexColorinShape_SKM"),
              Category = "RuntimeVertexPainter|SkeletalMesh")
    static void ContextPaintVertexColorInShape_SKM(UPARAM(ref) FRVPContextSK &ContextSK, FVector Position,
                                                   FVector Extent, FRotator Rotation, EPaintShape PaintShape, FLinearColor Color, EPaintMode inMode, float Opacity = 1,
                                                   UCurveFloat *FallOff = nullptr, bool bConvertToSRGB = true);

    /*Paint vertex color of all vertices of SkeletalMeshComponent
     *Parameters:
     *ContextSK:A reference used as a input value,which should be context BeginPaintSkeletalMeshVertexColor outputs
     *Color:The Color you'll paint,only use the channel of PaintChannel
     *Opacity:The opacity of color,if 1,override old color.Calculate like lerp(OldColor,Color,Opacity).
     *bConvertToSRGB:Convert LinearColor to FColor,whether convert to SRGB
     */
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "PaintAllVerticesColor_SKM"),
              Category = "RuntimeVertexPainter|SkeletalMesh")
    static void ContextPaintAllVerticesColor_SKM(UPARAM(ref) FRVPContextSK &ContextSK, FLinearColor Color, EPaintMode inMode, float Opacity = 1, bool bConvertToSRGB = true);

    // Functions for skeletal mesh component-----------------------------------------------------------------------------------------------------------END

    // Helper Functions
#pragma region

    // Get VertexColors

    // Get StaticMeshComponent VertexColors in LOD
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Veretex Colors"),
              Category = "RuntimeVertexPainter|Helper|StaticMesh")
    static TArray<FColor> GetVertexColorsInLOD(UStaticMeshComponent *StaticMeshComponent, int32 LODIndex);

    // Get StaticMeshComponent VertexColors in all LODs
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Veretex Colors in All LOD"),
              Category = "RuntimeVertexPainter|Helper|StaticMesh")
    static TArray<FVertexColorsArray> GetVertexColorsInAllLOD(UStaticMeshComponent *StaticMeshComponent);

    // Get SkeletalMeshComponent VertexColors in LOD
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Veretex Colors"),
              Category = "RuntimeVertexPainter|Helper|SkeletalMesh")
    static TArray<FColor> SkeletalMeshGetVertexColorsInLOD(USkeletalMeshComponent *SkeletalMeshComponent,
                                                           int32 LODIndex);
    // Get SkeletalMeshComponent VertexColors in all LODs
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Veretex Colors in All LOD"),
              Category = "RuntimeVertexPainter|Helper|SkeletalMesh")
    static TArray<FVertexColorsArray> SkeletalMeshGetVertexColorsInAllLOD(USkeletalMeshComponent *SkeletalMeshComponent);

    // Get vertices number

    // Get StaticMeshComponent Vertices number in LOD ,if is not valid,return -1
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Vertices Number"),
              Category = "RuntimeVertexPainter|Helper|StaticMesh")
    static int32 GetVerticesNum(UStaticMesh *StaticMesh, int32 LODIndex);

    // Get SkeletalMeshComponent Vertices number in LOD ,if is not valid,return -1
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Vertices Number"),
              Category = "RuntimeVertexPainter|Helper|SKeletalMesh")
    static int32 GetSkeletalMeshVerticesNum(USkeletalMesh *SkeletalMesh, int32 LODIndex);

    // OverrideVertexColors

    // Override StaticMeshComponent vertex colors of single LOD with an FColor Array
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Override Vertex Colors"),
              Category = "RuntimeVertexPainter|Helper|StaticMesh")
    static void OverrideVertexColors(UStaticMeshComponent *StaticMeshComponent, int32 LODIndex, TArray<FColor> VertexColors);

    // Override SkeletalMeshComponent vertex colors of single LOD with an FColor Array
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Override Vertex Colors"),
              Category = "RuntimeVertexPainter|Helper|SkeletalMesh")
    static void SkeletalMeshOverrideVertexColors(USkeletalMeshComponent *SkeletalMeshComponent, int32 LODIndex, TArray<FColor> VertexColors);

#pragma endregion

    FORCEINLINE static FVector Vector3fToVector(const FVector3f &Vector3F)
    {
        return UKismetMathLibrary::MakeVector(Vector3F.X, Vector3F.Y, Vector3F.Z);
    }
};
