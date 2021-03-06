//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDebugGaugeReportEditor.h>

#import <IDEIODebugGaugesUI/IDEDebugGaugeReportContentDelegate-Protocol.h>
#import <IDEIODebugGaugesUI/IDEDebugGaugeReportTopSectionContentDelegate-Protocol.h>
#import <IDEIODebugGaugesUI/IDEEnergyAnnotatedBarGraphDelegate-Protocol.h>
#import <IDEIODebugGaugesUI/IDEGaugeCollectedDataListeners-Protocol.h>

@class DVTMeterView, IDEAppEnergyGraph, IDEEnergyAdditionGuidance, IDEEnergyGaugeDebuggingAddition, IDEEnergyLogScoreFormatter, NSButton, NSString, NSTextField, NSView;

@interface IDEEnergyGaugeEditor : IDEDebugGaugeReportEditor <IDEDebugGaugeReportContentDelegate, IDEDebugGaugeReportTopSectionContentDelegate, IDEEnergyAnnotatedBarGraphDelegate, IDEGaugeCollectedDataListeners>
{
    IDEEnergyAdditionGuidance *_highCPUGuidance;
    IDEEnergyAdditionGuidance *_networkGuidance;
    IDEEnergyAdditionGuidance *_locationGuidance;
    IDEEnergyAdditionGuidance *_highGPUGuidance;
    IDEEnergyAdditionGuidance *_backgroundModeGuidance;
    IDEEnergyLogScoreFormatter *_scoreFormatter;
    unsigned long long _adjustedStartingIndex;
    unsigned long long _adjustedEndingIndex;
    unsigned long long _chartIndex;
    float _observedLogScoreMin;
    float _observedLogScoreMax;
    unsigned long long _averageRunningCount;
    double _lastTotalAverage;
    double _lastOverheadAverage;
    IDEEnergyGaugeDebuggingAddition *_debuggingAddition;
    unsigned long long _lastMetricsDeltaCount;
    IDEAppEnergyGraph *_categoriesGraph;
    DVTMeterView *_energyMeterView;
    NSView *_costOverheadExplanationView;
    NSView *_highCPUGuidanceView;
    NSView *_networkGuidanceView;
    NSView *_locationGuidanceView;
    NSView *_highGPUGuidanceView;
    NSView *_appStateGuidanceView;
    NSView *_overheadStatArea;
    NSView *_meterArea;
    NSTextField *_totalAverageField;
    NSTextField *_totalAverageOverheadField;
    NSTextField *_energyLogScoreField;
    NSButton *_timeProfileButton;
    NSButton *_networkProfileButton;
    NSButton *_locationProfileButton;
}

@property(nonatomic) __weak NSButton *locationProfileButton; // @synthesize locationProfileButton=_locationProfileButton;
@property(nonatomic) __weak NSButton *networkProfileButton; // @synthesize networkProfileButton=_networkProfileButton;
@property(nonatomic) __weak NSButton *timeProfileButton; // @synthesize timeProfileButton=_timeProfileButton;
@property(nonatomic) __weak NSTextField *energyLogScoreField; // @synthesize energyLogScoreField=_energyLogScoreField;
@property(nonatomic) __weak NSTextField *totalAverageOverheadField; // @synthesize totalAverageOverheadField=_totalAverageOverheadField;
@property(nonatomic) __weak NSTextField *totalAverageField; // @synthesize totalAverageField=_totalAverageField;
@property(retain, nonatomic) NSView *meterArea; // @synthesize meterArea=_meterArea;
@property(retain, nonatomic) NSView *overheadStatArea; // @synthesize overheadStatArea=_overheadStatArea;
@property(retain, nonatomic) NSView *appStateGuidanceView; // @synthesize appStateGuidanceView=_appStateGuidanceView;
@property(retain, nonatomic) NSView *highGPUGuidanceView; // @synthesize highGPUGuidanceView=_highGPUGuidanceView;
@property(retain, nonatomic) NSView *locationGuidanceView; // @synthesize locationGuidanceView=_locationGuidanceView;
@property(retain, nonatomic) NSView *networkGuidanceView; // @synthesize networkGuidanceView=_networkGuidanceView;
@property(retain, nonatomic) NSView *highCPUGuidanceView; // @synthesize highCPUGuidanceView=_highCPUGuidanceView;
@property(retain, nonatomic) NSView *costOverheadExplanationView; // @synthesize costOverheadExplanationView=_costOverheadExplanationView;
@property __weak DVTMeterView *energyMeterView; // @synthesize energyMeterView=_energyMeterView;
@property(retain, nonatomic) IDEAppEnergyGraph *categoriesGraph; // @synthesize categoriesGraph=_categoriesGraph;
@property(nonatomic) unsigned long long lastMetricsDeltaCount; // @synthesize lastMetricsDeltaCount=_lastMetricsDeltaCount;
@property(retain, nonatomic) IDEEnergyGaugeDebuggingAddition *debuggingAddition; // @synthesize debuggingAddition=_debuggingAddition;
- (void).cxx_destruct;
- (void)debuggingAdditionDidUpdateCollectedQueryResults:(id)arg1;
- (id)_fillChartsWithOneQueryResult:(id)arg1 atIndex:(id)arg2;
- (void)profileInInstruments:(id)arg1;
- (id)translateValue:(id)arg1 keypath:(id)arg2;
- (id)gradientForColor:(id)arg1;
- (id)colorForChartNamed:(id)arg1;
- (id)categoryTitles;
- (void)primitiveInvalidate;
- (id)topSectionComponentEntries;
- (id)topSectionTitle;
- (void)_createCategoryGraphs;
- (void)_calculateLastRunningAverageWithCost:(id)arg1 overhead:(id)arg2;
- (void)_updateViewsWithCost:(unsigned long long)arg1 overhead:(unsigned long long)arg2;
- (id)_getGuidanceArrayFromQueryResult:(id)arg1;
- (void)addSectionsToView:(id)arg1;
- (BOOL)hasDefaultTopSection;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

