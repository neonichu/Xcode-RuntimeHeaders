//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DTXConnectionServices/DTXRateLimiter-Protocol.h>

@class DTXSendAndWaitStats, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DTXSendAndWaitRateLimiter : NSObject <DTXRateLimiter>
{
    NSObject<OS_dispatch_queue> *_actionQueue;
    double _microsecondsPerUnit;
    struct mach_timebase_info _timeBaseInfo;
    _Bool _logSends;
    NSObject<OS_dispatch_queue> *_statsQueue;
    NSObject<OS_dispatch_source> *_timer;
    DTXSendAndWaitStats *_stats;
}

- (void)notifyCompressedData:(unsigned long long)arg1 withUncompressedSize:(unsigned long long)arg2 nanosToCompress:(unsigned long long)arg3 usingCompressionType:(int)arg4;
- (void)spendUnits:(unsigned long long)arg1 onAction:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithUnitsPerSecond:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

