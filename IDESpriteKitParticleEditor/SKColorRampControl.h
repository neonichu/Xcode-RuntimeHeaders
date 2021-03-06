//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@class NSMutableArray, SKColorRampStop, SKColorWell;

@interface SKColorRampControl : NSControl
{
    SKColorRampStop *_selectedStop;
    SKColorWell *_fakeColorWell;
    NSMutableArray *_stops;
    struct CGColor *_stopColor;
    struct CGColor *_selectedStopColor;
    struct CGColor *_bgColor;
    BOOL _didDragSelected;
    BOOL _shouldDeleteSelected;
    SKColorRampStop *_selectedColorStop;
}

@property(retain) SKColorRampStop *selectedColorStop; // @synthesize selectedColorStop=_selectedColorStop;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)displayKeyframeSequence:(id)arg1;
- (id)createKeyframeSequence;
- (id)colorStopAtLocation:(double)arg1;
- (void)removeColorStop:(id)arg1;
- (void)removeAllColorStops;
- (void)addColorStop:(id)arg1;
- (void)_sortColorStops;
- (id)colorStops;
- (void)mouseUp:(id)arg1;
- (void)activateColorPanel;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)changeColor:(id)arg1;
- (double)_rampLocationOfPoint:(struct CGPoint)arg1;
- (struct CGRect)_colorRampRect;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)deactivate;

@end

