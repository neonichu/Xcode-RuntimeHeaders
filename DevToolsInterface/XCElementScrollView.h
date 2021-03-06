//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSView;

@interface XCElementScrollView : NSScrollView
{
    BOOL _autohidesHScroller;
    BOOL _autohidesVScroller;
    BOOL _showHScroller;
    BOOL _showVScroller;
    NSView *_dynGrowBox;
    long long _nesting;
    BOOL _debug;
    struct CGSize _lowerAdjustingBoundary;
    struct CGSize _upperAdjustingBoundary;
}

@property(nonatomic) struct CGSize upperAdjustingBoundary; // @synthesize upperAdjustingBoundary=_upperAdjustingBoundary;
@property(nonatomic) struct CGSize lowerAdjustingBoundary; // @synthesize lowerAdjustingBoundary=_lowerAdjustingBoundary;
- (void)dealloc;
- (void)reflectScrolledClipView:(id)arg1;
- (void)tile;
- (void)_adjustSizeWithBoundaries:(id)arg1;
- (void)_additionalTile;
- (void)_setFrame:(struct CGRect)arg1 forView:(id)arg2;
- (void)setDebug:(BOOL)arg1;
- (id)dynGrowBox;
- (void)setDynGrowBox:(id)arg1;
- (BOOL)autohidesVScroller;
- (void)setAutohidesVScroller:(BOOL)arg1;
- (BOOL)autohidesHScroller;
- (void)setAutohidesHScroller:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

