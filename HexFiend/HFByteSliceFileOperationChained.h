//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HexFiend/HFByteSliceFileOperation.h>

@class NSArray;

@interface HFByteSliceFileOperationChained : HFByteSliceFileOperation
{
    NSArray *internalOperations;
    unsigned long long totalAllocatedMemory;
    unsigned long long maximumAllocatedMemory;
}

- (void)dealloc;
- (int)writeToFile:(id)arg1 trackingProgress:(id)arg2 error:(id *)arg3;
- (void)queueUpEntriesOverlappedByEntry:(id)arg1 withIncompleteOperations:(id)arg2 context:(id)arg3;
- (int)applyQueueEntry:(id)arg1 toFile:(id)arg2 trackingProgress:(id)arg3;
- (unsigned long long)costToWrite;
- (id)initWithInternalOperations:(id)arg1;

@end

