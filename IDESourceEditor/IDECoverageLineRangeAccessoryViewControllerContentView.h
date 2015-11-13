//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTControllerContentView.h>

@class DVTTextDocumentLocation, IDECoverageAnnotationLineCoverageRange, IDECoverageTextVisualization, NSTextField, NSTrackingArea, NSView;

@interface IDECoverageLineRangeAccessoryViewControllerContentView : DVTControllerContentView
{
    BOOL _isConfigured;
    BOOL _hovering;
    NSView *_controlsView;
    unsigned long long _executionCount;
    IDECoverageTextVisualization *_textVisualization;
    DVTTextDocumentLocation *_location;
    NSTextField *_label;
    NSTrackingArea *_trackingArea;
    CDUnknownBlockType _hoverHandler;
    IDECoverageAnnotationLineCoverageRange *_coverageRange;
}

+ (void)initialize;
@property(retain, nonatomic) IDECoverageAnnotationLineCoverageRange *coverageRange; // @synthesize coverageRange=_coverageRange;
@property(copy, nonatomic) CDUnknownBlockType hoverHandler; // @synthesize hoverHandler=_hoverHandler;
@property(nonatomic) BOOL hovering; // @synthesize hovering=_hovering;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
@property(retain, nonatomic) DVTTextDocumentLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) IDECoverageTextVisualization *textVisualization; // @synthesize textVisualization=_textVisualization;
@property(nonatomic) unsigned long long executionCount; // @synthesize executionCount=_executionCount;
@property __weak NSView *controlsView; // @synthesize controlsView=_controlsView;
@property(nonatomic) BOOL isConfigured; // @synthesize isConfigured=_isConfigured;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)uncoveredColor;
- (id)coveredColor;
- (BOOL)isOpaque;
- (void)layoutBottomUp;
- (unsigned long long)lineNumberForPoint:(struct CGPoint)arg1;
- (void)layoutTopDown;
- (void)updateCountColor;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)refreshEditorHighlightRange;
- (void)updateTrackingAreas;
- (void)select:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isSelected;
- (id)colorFromUserDefaults:(id)arg1;

@end
