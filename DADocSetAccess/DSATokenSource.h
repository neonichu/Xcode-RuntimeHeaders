/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DADocSetAccess/DSAResultSource.h>

@class DSADocSet, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSPredicate;

// Not exported
@interface DSATokenSource : DSAResultSource
{
    DSADocSet *_docSet;
    NSDictionary *_query;
    NSPredicate *_predicate;
    NSArray *_rationalizedSortDescriptors;
    int _batchType;
    BOOL _ascending;
    NSMutableDictionary *_batchInfo;
    unsigned long long _fetchLimit;
    NSMutableArray *_searchResultIDs;
    NSMutableArray *_cachedResults;
    BOOL _cancelSearch;
    BOOL _backgroundIsFinished;
    BOOL _sortOnMainThread;
    BOOL _hasReturnedResults;
}

- (void).cxx_destruct;
- (id)_performNextFetch;
- (void)_initBatchInfo;
- (void)_configureFetchesForQuery:(id)arg1 andSortDescriptor:(id)arg2;
- (void)performFetch;
- (id)nextResultsInTime:(double)arg1;
- (id)remainingResults;
- (BOOL)hasMoreResults;
- (id)_convertNextIDsToObjectsInTime:(double)arg1;
- (void)cancel;
- (id)initWithQuery:(id)arg1 forDocSet:(id)arg2 withSortDescriptor:(id)arg3;

@end
