/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSMutableArray.h"

#import "IBMutableOrderedCollection-Protocol.h"

@class NSString;

@interface NSMutableArray (IBMutableArrayAdditions) <IBMutableOrderedCollection>
- (void)ib_removeObjectsInCollection:(id)arg1;
- (void)ib_moveObjects:(id)arg1 toIndex:(long long)arg2;
- (void)ib_addObjectsFromCollection:(id)arg1;
- (void)ib_addObjectToSortedCollectionUsingBinarySearch:(id)arg1 comparisonSelector:(SEL)arg2;
- (void)ib_addObjectToSortedCollectionUsingBinarySearch:(id)arg1 comparator:(id)arg2;
- (void)ib_insertObjects:(id)arg1 atIndex:(long long)arg2;
- (void)ib_removeObjects:(id)arg1;
- (void)ib_filterUsingBlock:(id)arg1;
- (void)ib_removeObjectsPassingTest:(id)arg1;
- (void)ib_removeObjectsInSet:(id)arg1;
- (void)ib_push:(id)arg1;
- (id)ib_pop;
- (id)ib_dequeueObjectsWithMaxCount:(long long)arg1;
- (void)ib_insertObjectsAtFront:(id)arg1;
- (void)ib_appendObjects:(id)arg1;
- (void)ib_addObjectIfNonNil:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
