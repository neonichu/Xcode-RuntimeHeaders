//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRIndexSet.h>

@interface XRMutableIndexSet : XRIndexSet
{
}

- (void)addIndexesInRange:(struct _XRIndexRange)arg1;
- (void)addIndex:(unsigned long long)arg1;
- (void)_addRange:(struct _XRIndexRange)arg1;
- (void)_mergeRangesFromIndex:(unsigned long long)arg1;
- (void)_insertRange:(struct _XRIndexRange)arg1 atIndex:(unsigned long long)arg2;
- (void)growArray;

@end
