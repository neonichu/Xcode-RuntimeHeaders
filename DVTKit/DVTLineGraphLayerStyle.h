//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBezierPath, NSColor, NSImage;

@interface DVTLineGraphLayerStyle : NSObject
{
    NSImage *_symbolImage;
    NSBezierPath *_symbolPath;
    NSImage *_selectedSymbolImage;
    BOOL _fillSymbol;
    int _symbolStyle;
    double _lineWidth;
    NSColor *_lineColor;
    double _symbolSize;
}

@property(nonatomic) BOOL fillSymbol; // @synthesize fillSymbol=_fillSymbol;
@property(nonatomic) double symbolSize; // @synthesize symbolSize=_symbolSize;
@property(nonatomic) int symbolStyle; // @synthesize symbolStyle=_symbolStyle;
@property(copy, nonatomic) NSColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
- (void).cxx_destruct;
- (void)_sendStyleChangedNotification;
@property(readonly) NSImage *selectedSymbolImage;
- (id)_createSymbolPathForSymbolStyle:(int)arg1;
@property(readonly) NSBezierPath *symbolPath;
@property(readonly) NSImage *symbolImage;
- (void)_resetSymbol;
- (id)init;

@end

