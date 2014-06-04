/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTLayoutView_ML.h"

@class IBCanvasView, NSMutableSet, NSNumber, NSSet;

@interface IBCanvasFrame : DVTLayoutView_ML
{
    IBCanvasView *canvasView;
    IBCanvasFrame *parentFrame;
    NSMutableSet *childFrames;
    NSNumber *dockedEdge;
    BOOL autopositionOnNextLayout;
    BOOL _showSelectionRing;
    struct CGPoint _anchor;
}

@property(nonatomic) struct CGPoint anchor; // @synthesize anchor=_anchor;
@property BOOL showSelectionRing; // @synthesize showSelectionRing=_showSelectionRing;
@property BOOL autopositionOnNextLayout; // @synthesize autopositionOnNextLayout;
@property(copy, nonatomic) NSNumber *dockedEdge; // @synthesize dockedEdge;
@property(readonly) IBCanvasFrame *parentFrame; // @synthesize parentFrame;
@property(readonly) NSSet *childFrames; // @synthesize childFrames;
@property(retain) IBCanvasView *canvasView; // @synthesize canvasView;
- (void).cxx_destruct;
- (BOOL)isVerticallyResizableForCanvasAlignment;
- (BOOL)isHorizontallyResizableForCanvasAlignment;
- (CDStruct_c519178c)canvasAlignmentInset;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (struct CGPoint)integralizedFrameOriginForAnchor:(struct CGPoint)arg1;
- (struct CGPoint)integralizedFrameOriginForAnchor:(struct CGPoint)arg1 andSize:(struct CGSize)arg2;
- (struct CGPoint)anchorForFrameOrigin:(struct CGPoint)arg1;
- (struct CGPoint)anchorForFrame:(struct CGRect)arg1;
- (struct CGRect)integralizedFrameForAnchor:(struct CGPoint)arg1;
- (struct CGRect)integralizedFrameForAnchor:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (struct CGPoint)convertFrameSpacePointToAnchorSpacePoint:(struct CGPoint)arg1;
- (struct CGPoint)convertAnchorSpacePointToFrameSpacePoint:(struct CGPoint)arg1;
- (CDStruct_c519178c)dockingInset;
- (id)hitTest:(struct CGPoint)arg1;
- (id)boundingRectsForBandSelectionHitTesting;
- (struct CGRect)boundsForHitTesting;
- (struct CGRect)frameForCenteringInRect:(struct CGRect)arg1;
- (void)positionChildFrames;
- (void)makeKeyAndOrderFrontTakingFocus:(BOOL)arg1;
- (void)makeKeyTakingFocus:(BOOL)arg1;
- (void)orderFront;
- (void)descendantFrameDidResignKey:(id)arg1;
- (void)descendantFrameDidBecomeKey:(id)arg1;
- (void)resignKeyCanvasFrame;
- (void)becomeKeyCanvasFrame;
- (void)hasKeyLookDidChange;
- (BOOL)hasKeyLook;
- (BOOL)isAncestorOfKeyCanvasFrame;
- (BOOL)isKeyCanvasFrame;
- (void)removeFromParentFrame;
- (void)addChildFrame:(id)arg1;

@end
