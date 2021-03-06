//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/NSObject-Protocol.h>

@class DTTapConfig, DTXMessage, NSObject, _GenericTapGuarded;
@protocol OS_dispatch_semaphore;

@protocol DTTapDelegate <NSObject>
- (void)fetchFromTap:(id)arg1 guard:(_GenericTapGuarded *)arg2;
- (void)unpauseTap:(id)arg1 guard:(_GenericTapGuarded *)arg2;
- (void)pauseTap:(id)arg1 guard:(_GenericTapGuarded *)arg2;
- (void)stopTap:(id)arg1 semaphore:(NSObject<OS_dispatch_semaphore> *)arg2 guard:(_GenericTapGuarded *)arg3;
- (void)startTap:(id)arg1 guard:(_GenericTapGuarded *)arg2;
- (void)invokeClientHandlers:(id)arg1;
- (id)willInvokeClientHandlers:(_GenericTapGuarded *)arg1;
- (void)reset:(_GenericTapGuarded *)arg1;
- (void)populateGuarded:(_GenericTapGuarded *)arg1;
- (_GenericTapGuarded *)createGuarded;
- (DTTapConfig *)createNewTapConfig;

@optional
- (BOOL)handleMessage:(DTXMessage *)arg1 fromTap:(id)arg2 guard:(_GenericTapGuarded *)arg3;
@end

