//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface DTXSendAndWaitStats : NSObject
{
    unsigned long long _totalSendBytes;
    unsigned long long _previousSendBytes;
    unsigned long long _lastStatTime;
    NSObject<OS_dispatch_queue> *_statsQueue;
    struct mach_timebase_info _timeBaseInfo;
    double _microsecondsPerUnit;
    unsigned long long _compressionTotalDataCompressed;
    unsigned long long _compressionTotalDataUncompressed;
    unsigned long long _compressionTotalNanosToCompress;
    NSMutableSet *_compressionTypeSet;
}

- (void)logStats:(id)arg1;
- (void)notifyCompressedData:(unsigned long long)arg1 withUncompressedSize:(unsigned long long)arg2 nanosToCompress:(unsigned long long)arg3 usingCompressionType:(int)arg4;
- (void)sentAdditionalBytes:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 andMicrosPerUnit:(double)arg2;

@end

