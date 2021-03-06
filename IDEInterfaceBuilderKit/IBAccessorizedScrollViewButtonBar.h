//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEInterfaceBuilderKit/NSAccessibilityGroup-Protocol.h>

@class NSArray, NSColor, NSLayoutConstraint, NSStackView, NSString;

@interface IBAccessorizedScrollViewButtonBar : NSView <NSAccessibilityGroup>
{
    NSStackView *_verticalStackView;
    NSView *_topView;
    NSStackView *_leftStackView;
    NSStackView *_centerStackView;
    NSStackView *_rightStackView;
    NSStackView *_bottomStackView;
    NSArray *_verticalStackPinningConstraints;
    NSLayoutConstraint *_verticalStackWidthConstraint;
    NSColor *_barBackgroundColor;
}

+ (id)barButtonWithTitle:(id)arg1;
+ (id)barButtonWithImage:(id)arg1;
+ (id)barSegmentWithSegments:(id)arg1;
+ (id)barPopUpButton;
+ (id)barButton;
@property(copy, nonatomic) NSColor *barBackgroundColor; // @synthesize barBackgroundColor=_barBackgroundColor;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)hitTest:(struct CGPoint)arg1;
- (void)constrainWidthTo:(double)arg1;
- (void)removeCenterView:(id)arg1;
- (void)removeRightView:(id)arg1;
- (void)removeLeftView:(id)arg1;
- (BOOL)isBottomViewHidden;
- (void)showBottomBar:(BOOL)arg1;
- (void)addBottomView:(id)arg1;
- (void)insertCenterView:(id)arg1 atIndex:(long long)arg2;
- (void)addCenterView:(id)arg1;
- (void)insertRightView:(id)arg1 atIndex:(long long)arg2;
- (void)addRightView:(id)arg1;
- (void)_updateLeftViewConstraints;
- (void)insertLeftView:(id)arg1 atIndex:(long long)arg2;
- (void)addLeftView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)pinViewToSuperView:(id)arg1;
- (id)makeStackView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

