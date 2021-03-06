//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICAbstractCatalogItem.h>

#import <IBFoundation/IBICAssetWithSlottedChildren-Protocol.h>

@class IBICManifestArchivist, NSDictionary, NSString;

@interface IBICSlottedAssetCollection : IBICAbstractCatalogItem <IBICAssetWithSlottedChildren>
{
    IBICManifestArchivist *_manifestArchivist;
    NSDictionary *_childrenIdentifiersToSlots;
    NSDictionary *_childrenIdentifiersToConflictStates;
}

+ (BOOL)fileNameIsIdentifier;
+ (Class)requiredChildrenClass;
+ (Class)slotClass;
@property(copy, nonatomic) NSDictionary *childrenIdentifiersToConflictStates; // @synthesize childrenIdentifiersToConflictStates=_childrenIdentifiersToConflictStates;
@property(copy, nonatomic) NSDictionary *childrenIdentifiersToSlots; // @synthesize childrenIdentifiersToSlots=_childrenIdentifiersToSlots;
- (void).cxx_destruct;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (void)populateMutatorsToAddRequiredChildCounterparts:(id)arg1;
- (id)missingRequiredCounterpartSlots;
- (id)requiredCounterpartsMask;
- (BOOL)isChildMinimallyFitForCompiling:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)suggestionSetMaskForSuggestionSet:(id)arg1 usingValueModifierBlock:(CDUnknownBlockType)arg2;
- (void)populateIssues:(id)arg1 context:(id)arg2;
- (Class)expectedChildClassForSlot:(id)arg1;
- (void)populateIssues:(id)arg1 forUnconflictedChild:(id)arg2 inSlot:(id)arg3 context:(id)arg4;
- (Class)manifestArchivist:(id)arg1 childClassForChildEntry:(id)arg2 results:(id)arg3;
- (long long)manifestArchivist:(id)arg1 orderChildrenForSlotConflictResolutionByComparing:(id)arg2 to:(id)arg3;
- (void)manifestArchivist:(id)arg1 setConflictState:(unsigned long long)arg2 forChild:(id)arg3;
- (void)manifestArchivist:(id)arg1 setSlot:(id)arg2 forChild:(id)arg3;
- (unsigned long long)manifestArchivist:(id)arg1 conflictStateForChild:(id)arg2;
- (id)manifestArchivist:(id)arg1 slotForChild:(id)arg2;
- (Class)manifestArchivistSlotClassForChildren:(id)arg1;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (id)manifestContent;
- (id)manifestFileName;
- (void)setConflictState:(unsigned long long)arg1 forChild:(id)arg2;
- (unsigned long long)conflictStateForChild:(id)arg1;
- (void)setConflictState:(unsigned long long)arg1 forChildWithIdentifier:(id)arg2;
- (unsigned long long)conflictStateForChildWithIdentifier:(id)arg1;
- (id)childrenForSlot:(id)arg1;
- (id)childIdentfiersForSlot:(id)arg1;
- (id)slotForChild:(id)arg1;
- (void)setSlot:(id)arg1 forChild:(id)arg2;
- (id)slotForChildIdentifier:(id)arg1;
- (void)setSlot:(id)arg1 forChildIdentifier:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initializeManifestArchivist;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

