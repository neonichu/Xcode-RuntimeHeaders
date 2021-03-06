//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSImage;

@interface XDCompartmentLabelCell : NSButtonCell
{
    NSImage *_iconImage;
}

+ (id)_defaultDownArrowImage;
+ (id)_defaultRightArrowImage;
+ (void)initialize;
- (void).cxx_destruct;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (void)dealloc;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;

@end

