//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEWorkspace;
@protocol OS_dispatch_queue;

@interface IDEIndexingPrebuildController : NSObject
{
    IDEWorkspace *_workspace;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasInitiatedPrebuild;
    BOOL _hasPerformedPrebuild;
}

@property BOOL hasPerformedPrebuild; // @synthesize hasPerformedPrebuild=_hasPerformedPrebuild;
- (void).cxx_destruct;
- (void)cancelAnyPrebuild;
- (void)needsPrebuild;
- (void)initiatePrebuild;
- (id)initWithWorkspace:(id)arg1;

@end

