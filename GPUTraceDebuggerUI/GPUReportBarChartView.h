//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class GPUReportChartData, NSColor, NSString;

__attribute__((visibility("hidden")))
@interface GPUReportBarChartView : NSView
{
    unsigned long long _maxValueAdjustmentTimestamp;
    float _minValue;
    float _maxValue;
    BOOL _showsData;
    BOOL _showSubColumnTitles;
    NSColor *_currentColor;
    NSColor *_baselineColor;
    struct GPUValueRange _maxRange;
    GPUReportChartData *_chartData;
    NSString *_dataLabel;
}

+ (id)dataTextAttributes;
+ (id)titleTextAttributes;
@property(nonatomic) BOOL showSubColumnTitles; // @synthesize showSubColumnTitles=_showSubColumnTitles;
@property(nonatomic) BOOL showsData; // @synthesize showsData=_showsData;
@property(retain, nonatomic) NSString *dataLabel; // @synthesize dataLabel=_dataLabel;
@property(retain, nonatomic) GPUReportChartData *chartData; // @synthesize chartData=_chartData;
@property(nonatomic) struct GPUValueRange maxRange; // @synthesize maxRange=_maxRange;
@property(nonatomic) NSColor *baselineColor; // @synthesize baselineColor=_baselineColor;
@property(nonatomic) NSColor *currentColor; // @synthesize currentColor=_currentColor;
- (void).cxx_destruct;
- (void)drawGraphInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateChartBaselineData:(id)arg1;
- (void)updateChartCurrentData:(id)arg1;
- (void)updateMinMaxValues;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

