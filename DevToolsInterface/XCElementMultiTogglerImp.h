/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCElementBaseTogglerImp.h>

#import "XCElementMultiTogglerP-Protocol.h"

@class NSMutableArray, NSObject, NSString;

@interface XCElementMultiTogglerImp : XCElementBaseTogglerImp <XCElementMultiTogglerP>
{
    NSObject *_toggleValue;
    NSMutableArray *_toggleValues;
    NSObject *_anticipatedToggleValue;
}

- (void)dealloc;
- (void)clearView;
- (void)_releaseValuesMultiToggler;
- (void)removeAndClearChildren;
- (void)receiveObservedValue:(id)arg1;
- (id)toggleValue;
- (void)setToggleValue:(id)arg1;
- (void)anticipateElementForAllToggleValues;
- (void)anticipateElementForToggleValue:(id)arg1;
- (void)addChild:(id)arg1;
- (void)updateCurrentChildren;
- (id)initInMain:(id)arg1;
- (BOOL)isMultiToggler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
