/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTCancellable-Protocol.h"

@class NSString;

// Not exported
@interface IDEActivityLogSectionObservation : NSObject <DVTCancellable>
{
    id _block;
}

+ (id)sharedNullObservation;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (id)block;
- (id)init;
- (id)initWithBlock:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
