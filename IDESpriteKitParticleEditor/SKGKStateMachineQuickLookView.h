//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class GTFGraph, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface SKGKStateMachineQuickLookView : NSView
{
    NSMutableDictionary *_stateViews;
    NSMutableArray *_transitionViews;
    GTFGraph *_graph;
    NSDictionary *_machineInfo;
}

@property(copy, nonatomic) NSDictionary *machineInfo; // @synthesize machineInfo=_machineInfo;
@property(readonly, nonatomic) NSArray *transitionViews; // @synthesize transitionViews=_transitionViews;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_generateStateAndTransitionViews;
@property(readonly, nonatomic) NSArray *stateViews;
- (void)setupMyGraph;
- (void)awakeFromNib;

@end

