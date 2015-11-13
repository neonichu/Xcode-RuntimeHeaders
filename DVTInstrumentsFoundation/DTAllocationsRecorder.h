//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface DTAllocationsRecorder : NSObject
{
    struct DTXSharedMemory *_shmem;
    NSObject<OS_dispatch_queue> *_processingQueue;
    struct {
        double _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned long long _field4;
        unsigned long long _field5;
        unsigned long long _field6;
        long long _field7;
        unsigned long long _field8[0];
        char _field9[0];
    } *_partialEvent;
    unsigned int _partialSize;
    unsigned int _partialFilled;
    int _eventTotal;
    unsigned int _targetTask;
    int _stopCollection;
    BOOL _readStackLogsUponAttach;
    unsigned int _sharedMemorySize;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _bufferHandler;
}

+ (BOOL)configureLocalLaunchEnvironment:(id)arg1 recordedEventsMask:(unsigned int)arg2;
+ (long long)currentVersion;
+ (id)serviceIdentifier;
+ (unsigned int)cppClassNamesMask;
+ (unsigned int)zombieEventsMask;
+ (unsigned int)mallocReallocFreeEventsMask;
+ (unsigned int)retainReleaseAutoEventsMask;
+ (unsigned int)vmEventsMask;
+ (unsigned int)allEventsMask;
@property(nonatomic) unsigned int sharedMemorySize; // @synthesize sharedMemorySize=_sharedMemorySize;
@property(nonatomic) BOOL readStackLogsUponAttach; // @synthesize readStackLogsUponAttach=_readStackLogsUponAttach;
@property(copy, nonatomic) CDUnknownBlockType bufferHandler; // @synthesize bufferHandler=_bufferHandler;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)_processIncomingData;
@property(readonly) int eventCount;
- (void)_endAndTossResources:(BOOL)arg1;
- (void)cancel;
- (void)stop;
- (void)processBufferMessage:(id)arg1;
- (BOOL)_startWithError:(id *)arg1;
- (BOOL)startForProcessingBuffersWithError:(id *)arg1;
- (BOOL)startWithLaunchedTask:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)startAttachingToRunningTask:(unsigned int)arg1 recordedEventsMask:(unsigned int)arg2 error:(id *)arg3;
- (unsigned long long)_setupSharedMemoryInTask:(unsigned int)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end
