//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/NSObject-Protocol.h>

@class NSNumber, NSString, XCWorkQueue, XCWorkQueueOperation;
@protocol XCBuildables, XCWorkQueueCommands;

@protocol XCWorkQueueOperationDelegates <NSObject>
- (BOOL)workQueueOperationCommandsShouldPropagateCachedOutputs:(XCWorkQueueOperation *)arg1;
- (void)workQueueOperation:(XCWorkQueueOperation *)arg1 didReportStatus:(NSString *)arg2 andPercentComplete:(double)arg3;
- (NSNumber *)workQueueOperationUniqueId;
- (BOOL)addWorkQueueForNextReadyBuildableToWorkQueueOperation:(XCWorkQueueOperation *)arg1;
- (BOOL)workQueueOperation:(XCWorkQueueOperation *)arg1 buildable:(id <XCBuildables>)arg2 didEndWithSuccessCount:(unsigned long long)arg3 failureCount:(unsigned long long)arg4 resultCode:(int)arg5;
- (void)workQueueOperationDidWaitForCommandActivity:(XCWorkQueueOperation *)arg1;
- (void)workQueueOperationWillWaitForCommandActivity:(XCWorkQueueOperation *)arg1;
- (void)workQueueOperation:(XCWorkQueueOperation *)arg1 buildable:(id <XCBuildables>)arg2 didActivateCommand:(id <XCWorkQueueCommands>)arg3;
- (void)workQueueOperation:(XCWorkQueueOperation *)arg1 buildable:(id <XCBuildables>)arg2 willActivateNextProcessableCommandIfAnyOnWorkQueue:(XCWorkQueue *)arg3;
@end

