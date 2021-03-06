//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPopUpButtonCell.h>

@class NSImage, PBXThemeButtonImageSource;

@interface PBXDelayedPopUpButtonCell : NSPopUpButtonCell
{
    id _buttonTarget;
    SEL _buttonAction;
    NSImage *_overridingImage;
    PBXThemeButtonImageSource *_overridingImageSource;
    float _popUpDelay;
}

- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setOverridingImageSource:(id)arg1;
- (id)overridingImageSource;
- (void)setOverridingImage:(id)arg1;
- (id)overridingImage;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (SEL)buttonAction;
- (void)setButtonAction:(SEL)arg1;
- (id)buttonTarget;
- (void)setButtonTarget:(id)arg1;
- (float)popUpDelay;
- (void)setPopUpDelay:(float)arg1;
- (void)dealloc;

@end

