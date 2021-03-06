//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface DTAssertionPidInfo : NSObject
{
    int _pid;
    NSArray *_blocks;
    NSMutableSet *_clientsWithClaim;
}

@property(readonly) int pid; // @synthesize pid=_pid;
@property(readonly) NSArray *blocks; // @synthesize blocks=_blocks;
- (void).cxx_destruct;
- (BOOL)hasNoMoreClients;
- (BOOL)removeClaimFromClient:(id)arg1;
- (void)addClaimForClient:(id)arg1;
- (void)removeAssertions;
- (id)initForPid:(int)arg1 withRemoveBlocks:(id)arg2 onBehalfOfClient:(id)arg3;

@end

