//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>
#import <IDEInterfaceBuilderKit/IBSelectionOwnerDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/NSAccessibilityLayoutArea-Protocol.h>

@class DVTStackBacktrace, IBCanvasBackgroundView, IBCanvasBandSelectionView, IBCanvasFrame, IBCanvasScrollView, IBMutableIdentityDictionary, IBSelectionOwner, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSValue, NSView;
@protocol IBCanvasViewDelegate;

@interface IBCanvasView : DVTLayoutView_ML <IBSelectionOwnerDelegate, NSAccessibilityLayoutArea, DVTInvalidation>
{
    long long _trackingAreaUpdateSuppressionCount;
    IBMutableIdentityDictionary *_overlaysPerCanvasFrame;
    NSMutableSet *_frameViews;
    NSMutableArray *_canvasOverlays;
    NSView *_endOfCanvasFramesToken;
    NSMutableDictionary *_expansionRects;
    IBSelectionOwner *_canvasFrameSelectionOwner;
    IBCanvasBandSelectionView *_bandSelectionView;
    NSValue *_centerToPoint;
    BOOL _autoscrollEnabled;
    struct CGRect _trackedEventCanvasBounds;
    struct CGSize _lastClipViewBoundsSize;
    double _nextMagnification;
    BOOL _drawsWithActiveLook;
    BOOL _shrinksToFitFrames;
    IBCanvasBackgroundView *_backgroundView;
    IBCanvasScrollView *_scrollView;
    id <IBCanvasViewDelegate> _delegate;
    IBCanvasFrame *_keyCanvasFrame;
    struct CGSize _layoutPositioningScale;
}

+ (void)initialize;
@property(nonatomic) struct CGSize layoutPositioningScale; // @synthesize layoutPositioningScale=_layoutPositioningScale;
@property(nonatomic) BOOL shrinksToFitFrames; // @synthesize shrinksToFitFrames=_shrinksToFitFrames;
@property(nonatomic) BOOL drawsWithActiveLook; // @synthesize drawsWithActiveLook=_drawsWithActiveLook;
@property(retain, nonatomic) IBCanvasFrame *keyCanvasFrame; // @synthesize keyCanvasFrame=_keyCanvasFrame;
@property(nonatomic) __weak id <IBCanvasViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IBCanvasScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly) IBCanvasBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(getter=isAutoscrollEnabled) BOOL autoscrollEnabled; // @synthesize autoscrollEnabled=_autoscrollEnabled;
- (void).cxx_destruct;
- (long long)accessibilityVerticalUnits;
- (long long)accessibilityHorizontalUnits;
@property(readonly) id accessibilityFocusedUIElement;
- (id)accessibilitySelectedChildren;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (void)canvasFrameResizingTest:(id)arg1;
- (void)canvasScrollTest:(id)arg1;
- (void)canvasZoomTest:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)trackBandSelection:(id)arg1;
- (BOOL)canvasFrame:(id)arg1 intersectsBandRect:(struct CGRect)arg2;
- (id)trackMouse:(id)arg1 toMoveClickedFrame:(id)arg2 layoutManager:(id)arg3;
- (void)transferFirstResponderAfterDragConclusion:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)dragWillForceRedrawOfDestinationWindowPriorToDragEnd:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)draggedImageState:(id)arg1;
- (id)expandOnEdge:(unsigned long long)arg1 amount:(double)arg2 animatingSynchronously:(BOOL)arg3;
- (id)addExpansionRect:(struct CGRect)arg1;
- (BOOL)dvt_autoscrollWithExternalDragEvent:(id)arg1 animate:(BOOL)arg2;
- (void)selectionOwner:(id)arg1 didSelect:(id)arg2 andDeselect:(id)arg3;
- (struct CGRect)adjustScroll:(struct CGRect)arg1;
- (void)adjustScrollersForCanvasContentSizingAndMovingWhileInvoking:(CDUnknownBlockType)arg1;
- (void)centerToPoint:(struct CGPoint)arg1;
- (void)setMagnification:(double)arg1 centeredAtPoint:(struct CGPoint)arg2 animated:(BOOL)arg3;
- (struct CGPoint)convertFrameSpacePointToAnchorSpacePoint:(struct CGPoint)arg1;
- (struct CGPoint)convertAnchorSpacePointToFrameSpacePoint:(struct CGPoint)arg1;
- (void)_updateTrackingAreas;
- (void)_invalidateCursorRects;
- (BOOL)isUpdateTrackingAreasEnabled;
- (void)stopSuppressingTrackingAreaUpdates;
- (void)suppressTrackingAreaUpdates;
- (void)resetCursorRects;
- (id)hitTest:(struct CGPoint)arg1;
- (void)scrollCanvasFrameToVisible:(id)arg1 keepingRectVisible:(struct CGRect)arg2 zoomingToFactor:(double)arg3 shouldCenter:(BOOL)arg4 animate:(BOOL)arg5;
- (BOOL)zoomRectToVisible:(struct CGRect)arg1 maxMagnification:(double)arg2;
- (void)smartMagnifyWithEvent:(id)arg1;
- (struct CGRect)rectToScrollCanvasFrameToVisible:(id)arg1 keepingRectVisible:(struct CGRect)arg2;
- (void)canvasFrame:(id)arg1 didChangeFrame:(struct CGRect)arg2;
- (void)canvasFrame:(id)arg1 anchorDidChange:(struct CGPoint)arg2;
- (void)didCompleteLayout;
- (void)didLayoutSubview:(id)arg1;
- (void)layoutTopDown;
- (struct CGPoint)initialAnchorForCanvasFrame:(id)arg1 visibleRect:(struct CGRect)arg2;
- (void)sizeAndPositionOverlays;
- (void)sizeToFitFixedCanvasFrames;
- (void)setBoundsOrigin:(struct CGPoint)arg1;
- (struct CGRect)boundsForCanvasFrameViewsFrame:(struct CGRect)arg1;
- (void)_adjustPaddingInPreparationForMagnification:(double)arg1;
- (struct CGRect)rectForUserPositionedCanvasFramesInView:(id)arg1;
- (struct CGRect)layoutRectForNonAutoPositionedFrame:(id)arg1;
- (void)positionChildFrames;
- (id)subviewsOrderedForLayout;
- (void)scrollViewDidEndLiveMagnify:(id)arg1;
- (void)clipViewBoundsDidChange:(id)arg1;
- (id)framesForViews:(id)arg1 inView:(id)arg2;
- (struct CGRect)currentInteractableViewPort;
- (struct CGRect)currentViewPort;
- (BOOL)isFlipped;
- (void)setSubviews:(id)arg1;
- (void)orderCanvasFrameFront:(id)arg1;
- (id)currentCanvasOrder;
- (void)removeOverlayView:(id)arg1 forCanvasFrame:(id)arg2;
- (void)addOverlayView:(id)arg1 forCanvasFrame:(id)arg2;
- (void)removeOverlayView:(id)arg1;
- (void)addOverlayView:(id)arg1;
- (void)removeCanvasFrame:(id)arg1;
- (void)addCanvasFrame:(id)arg1;
@property(readonly) NSArray *canvasFramesFromBackToFront;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
@property(copy) NSSet *selectedCanvasFrames;
- (void)awakeFromNib;
- (void)primitiveInvalidate;
- (void)insertTreeOfFrames;
- (void)insertRootDebugFrameWithColor:(id)arg1 point:(struct CGPoint *)arg2;
- (void)insertDebugTreeWithColor:(id)arg1 point:(struct CGPoint *)arg2 parent:(id)arg3 branchFactor:(long long)arg4 depth:(long long)arg5 totalDepth:(long long)arg6;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

