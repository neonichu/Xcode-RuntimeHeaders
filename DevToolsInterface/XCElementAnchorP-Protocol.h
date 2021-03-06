//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCElementP-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, XCEActivity, XCESignal;
@protocol XCElementAnchorDelegateP, XCElementP;

@protocol XCElementAnchorP <XCElementP>
@property(nonatomic) BOOL contentGroupDisplayed;
@property(readonly, nonatomic) NSMutableArray *activities;
@property(retain, nonatomic) NSObject<XCElementP> *contentGroup;
@property(readonly, nonatomic) NSMutableDictionary *configuration;
@property(retain, nonatomic) NSObject<XCElementAnchorDelegateP> *anchorDelegate;
@property(retain, nonatomic) id representedObject;
- (void)close;
- (BOOL)prepareToClose;
- (BOOL)canBeClosed;
- (BOOL)handleSelectionOf:(struct NSObject *)arg1;
- (BOOL)configurationIsInstantiated;
- (void)addActivity:(XCEActivity *)arg1;
- (void)objectDidChange;
- (void)configureAndSetToggleActivity:(XCEActivity *)arg1;
- (void)configureAndSetObjectDidChangeActivity:(XCEActivity *)arg1;
- (void)configureAndSetObjectActivity:(XCEActivity *)arg1;
- (void)setInitialContentGroupDisplayed:(BOOL)arg1;
- (void)observeToggleSignal:(XCESignal *)arg1;
- (void)observeToggleSource:(NSObject *)arg1 keyPath:(NSString *)arg2;
- (void)observeObjectSignal:(XCESignal *)arg1;
- (void)observeObjectSource:(NSObject *)arg1 keyPath:(NSString *)arg2;
- (void)initialRepresentedObject:(id)arg1;
@end

