//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@class NSColor, NSObject;

@interface NSPredicateViewToolBarHeader : NSControl
{
    double _width;
    double _offset;
    NSColor *_color;
    NSObject *_target;
}

- (id)addTextButton:(id)arg1 width:(double)arg2 color:(id)arg3 selector:(SEL)arg4;
- (id)addText:(id)arg1 width:(double)arg2;
- (void)addPopUp:(id)arg1;
- (void)addButton:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithTarget:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

