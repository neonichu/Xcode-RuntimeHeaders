//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class NSString, NSValue;

@interface IBUIScrollView : IBUIView <IBDocumentArchiving, NSCoding>
{
    CDStruct_c519178c contentInset;
    BOOL directionalLockEnabled;
    BOOL bounces;
    BOOL alwaysBounceVertical;
    BOOL alwaysBounceHorizontal;
    BOOL scrollEnabled;
    BOOL pagingEnabled;
    BOOL showsHorizontalScrollIndicator;
    BOOL showsVerticalScrollIndicator;
    CDStruct_c519178c scrollIndicatorInsets;
    int indicatorStyle;
    BOOL delaysContentTouches;
    BOOL canCancelContentTouches;
    double minimumZoomScale;
    double maximumZoomScale;
    BOOL bouncesZoom;
    NSValue *cachedContentSize;
    int keyboardDismissMode;
    struct CGPoint _contentOffsetAdjustment;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIbInspectedScrollIndicatorInsetsMaxY;
+ (id)keyPathsForValuesAffectingIbInspectedScrollIndicatorInsetsMinY;
+ (id)keyPathsForValuesAffectingIbInspectedScrollIndicatorInsetsMaxX;
+ (id)keyPathsForValuesAffectingIbInspectedScrollIndicatorInsetsMinX;
+ (id)keyPathsForValuesAffectingIbInspectedContentInsetMaxY;
+ (id)keyPathsForValuesAffectingIbInspectedContentInsetMinY;
+ (id)keyPathsForValuesAffectingIbInspectedContentInsetMaxX;
+ (id)keyPathsForValuesAffectingIbInspectedContentInsetMinX;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) struct CGPoint contentOffsetAdjustment; // @synthesize contentOffsetAdjustment=_contentOffsetAdjustment;
@property(nonatomic) int keyboardDismissMode; // @synthesize keyboardDismissMode;
- (void).cxx_destruct;
- (BOOL)canPresentSimulatedMetrics;
- (BOOL)contentFitsWithinBounds;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)shouldDrawAsPlaceholder;
- (BOOL)prefersCachedImageBasedDrawing;
- (id)valueForKey:(id)arg1;
- (void)inheritedScrollViewExtendedEdgeInsetsDidChange;
- (CDStruct_c519178c)viewControllerExtendedEdgeInsets;
- (id)localExtraMarshalledAttributesKeyPaths;
- (void)populateCachedGeometryInfos:(id)arg1;
- (BOOL)computesContentSize;
@property(readonly) struct CGSize contentSize;
- (void)setContentOffsetAdjustmentAfterConstraining:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBouncesZoom:(BOOL)arg1;
- (BOOL)bouncesZoom;
- (void)setMaximumZoomScale:(double)arg1;
- (double)maximumZoomScale;
- (void)setMinimumZoomScale:(double)arg1;
- (double)minimumZoomScale;
- (void)setCanCancelContentTouches:(BOOL)arg1;
- (BOOL)canCancelContentTouches;
- (void)setDelaysContentTouches:(BOOL)arg1;
- (BOOL)delaysContentTouches;
- (void)setIndicatorStyle:(int)arg1;
- (int)indicatorStyle;
- (void)setScrollIndicatorInsets:(CDStruct_c519178c)arg1;
- (CDStruct_c519178c)scrollIndicatorInsets;
- (void)setShowsVerticalScrollIndicator:(BOOL)arg1;
- (BOOL)showsVerticalScrollIndicator;
- (void)setShowsHorizontalScrollIndicator:(BOOL)arg1;
- (BOOL)showsHorizontalScrollIndicator;
- (void)setScrollEnabled:(BOOL)arg1;
- (BOOL)isScrollEnabled;
- (void)setPagingEnabled:(BOOL)arg1;
- (BOOL)isPagingEnabled;
- (void)setBounces:(BOOL)arg1;
- (BOOL)bounces;
- (void)setAlwaysBounceHorizontal:(BOOL)arg1;
- (BOOL)alwaysBounceHorizontal;
- (void)setAlwaysBounceVertical:(BOOL)arg1;
- (BOOL)alwaysBounceVertical;
- (void)setDirectionalLockEnabled:(BOOL)arg1;
- (BOOL)directionalLockEnabled;
- (void)setContentInset:(CDStruct_c519178c)arg1;
- (CDStruct_c519178c)contentInset;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setIbInspectedScrollIndicatorInsetsMaxY:(double)arg1;
- (double)ibInspectedScrollIndicatorInsetsMaxY;
- (void)setIbInspectedScrollIndicatorInsetsMinY:(double)arg1;
- (double)ibInspectedScrollIndicatorInsetsMinY;
- (void)setIbInspectedScrollIndicatorInsetsMaxX:(double)arg1;
- (double)ibInspectedScrollIndicatorInsetsMaxX;
- (void)setIbInspectedScrollIndicatorInsetsMinX:(double)arg1;
- (double)ibInspectedScrollIndicatorInsetsMinX;
- (void)setIbInspectedContentInsetMaxY:(double)arg1;
- (double)ibInspectedContentInsetMaxY;
- (void)setIbInspectedContentInsetMinY:(double)arg1;
- (double)ibInspectedContentInsetMinY;
- (void)setIbInspectedContentInsetMaxX:(double)arg1;
- (double)ibInspectedContentInsetMaxX;
- (void)setIbInspectedContentInsetMinX:(double)arg1;
- (double)ibInspectedContentInsetMinX;
- (void)ibWasAddedToAutolayoutDocument:(id)arg1;
- (void)ibViewControllerEffectiveSimulatedMetricsDidChange;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)ibAllowsScrollingInEditor;
- (BOOL)ibSizesToFillViewControllers;
- (id)ibDesignableContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

