//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDelayedInvocation, DVTDispatchLock, NSMutableSet;
@protocol OS_dispatch_queue;

@interface DVTProvisioningProfileReaper : NSObject
{
    DVTDelayedInvocation *_delayedInvocation;
    NSObject<OS_dispatch_queue> *_considerationQueue;
    DVTDispatchLock *_considerationLock;
    NSMutableSet *_profilesToConsider;
    NSObject<OS_dispatch_queue> *_currentCompletionQueue;
    CDUnknownBlockType _currentCompletionHandler;
}

- (void).cxx_destruct;
- (id)purgeableProfilesFromProfileSet:(id)arg1;
- (void)_considerProfiles;
- (id)_takeConsideredProfiles;
- (void)_addProfilesToConsider:(id)arg1;
- (void)determinePurgeableSetFromProvisioningProfiles:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

