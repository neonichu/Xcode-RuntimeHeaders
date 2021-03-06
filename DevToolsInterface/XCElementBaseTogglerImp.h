//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCElementImp.h>

@class NSMutableArray, XCEActivity;

@interface XCElementBaseTogglerImp : XCElementImp
{
    NSMutableArray *_toggleElements;
    XCEActivity *_sourceActivity;
    struct {
        unsigned int initial:1;
        unsigned int initialPositioning:1;
        unsigned int positionOnUpdate:1;
        unsigned int adjustPreviousWhenToggling:1;
        unsigned int displayed:1;
        unsigned int _reserved:27;
    } _tFlags;
}

- (void)dealloc;
- (BOOL)adjustPreviousWhenToggling;
- (void)setAdjustPreviousWhenToggling:(BOOL)arg1;
- (void)setObservedValueToNO:(id)arg1;
- (void)setObservedValueToYES:(id)arg1;
- (void)setObservedValueTo:(id)arg1;
- (void)reflectObservedToggleState;
- (id)initInMain:(id)arg1;
- (void)clearView;
- (void)_releaseValuesBaseToggler;
- (void)receiveXCESignal:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)observeToggleSignal:(id)arg1;
- (void)observeToggleSource:(id)arg1 keyPath:(id)arg2;
- (void)configureAndSetSourceActivity:(id)arg1;
- (id)sourceActivity;
- (void)setSourceActivity:(id)arg1;
- (void)preparePositioningAfterChildren;
- (void)removeAndClearChildren;
- (void)addChild:(id)arg1;
- (void)_addChildAsOriginally:(id)arg1;
- (BOOL)positionOnUpdate;
- (void)setPositionOnUpdate:(BOOL)arg1;
- (void)_updateChangedElementState;
- (void)updateCurrentChildren;

@end

