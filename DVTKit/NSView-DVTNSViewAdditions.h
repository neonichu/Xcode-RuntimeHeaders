/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@interface NSView (DVTNSViewAdditions)
- (BOOL)dvt_viewShouldDrawActive;
- (void)dvt_invalidateCursorRects;
- (void)dvt_scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)dvt_viewDidEndLiveAnimation;
- (void)dvt_viewWillBeginLiveAnimation;
- (void)dvt_setFrameHeight:(double)arg1;
- (void)dvt_setFrameWidth:(double)arg1;
- (void)dvt_drawBubbledPlaceholderMessage:(id)arg1;
- (BOOL)dvt_autoscrollWithExternalDragEvent:(id)arg1 animate:(BOOL)arg2;
- (struct CGRect)dvt_convertRectFromScreen:(struct CGRect)arg1;
- (struct CGRect)dvt_convertRectToScreen:(struct CGRect)arg1;
- (struct CGPoint)dvt_convertPointToScreen:(struct CGPoint)arg1;
- (struct CGPoint)dvt_convertPointFromScreen:(struct CGPoint)arg1;
- (struct CGPoint)dvt_integralPointInBase:(struct CGPoint)arg1;
- (struct CGRect)dvt_integralRectInBase:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic, getter=isHidden) BOOL hidden;
@end
