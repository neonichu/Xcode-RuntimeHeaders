//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBBuildSupport/IDEAssetTagScanner-Protocol.h>

@class IBAssetScannerNode, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface IBICPropagatingAssetCatalogTagScanner : NSObject <IDEAssetTagScanner>
{
    NSDictionary *_allTypeInfo;
    IBAssetScannerNode *_root;
    NSMutableDictionary *_itemsIndexedByTypeThenFullyQualifiedName;
    NSMutableArray *_allNodes;
    NSMutableDictionary *_definitAdornersByAndornees;
    NSMutableDictionary *_maybeAdornersByAndornees;
    NSSet *_allTagSets;
}

+ (id)scanForTagCombinationsInContentsOfPath:(id)arg1;
+ (BOOL)shouldOverrideScanningForCatalogAtPath:(id)arg1;
- (void).cxx_destruct;
- (BOOL)propagateAllTags;
- (BOOL)detectCyclesWhilePropagatingTagsToItem:(id)arg1;
- (void)enumeratePropagationSourcesOfNode:(id)arg1 enumerator:(CDUnknownBlockType)arg2;
- (void)indexAdornersByAdornees;
- (void)enumeratePropagationTargetsOfNode:(id)arg1 enumerator:(CDUnknownBlockType)arg2;
- (id)buildEntryForFilePath:(id)arg1 withLocalNamespace:(id)arg2 isIsolated:(BOOL)arg3;
- (id)initWithFilePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
