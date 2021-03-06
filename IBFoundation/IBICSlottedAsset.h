//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICAbstractCatalogItem.h>

#import <IBFoundation/IBICAssetWithSlottedChildren-Protocol.h>

@class IBICManifestArchivist, NSString;

@interface IBICSlottedAsset : IBICAbstractCatalogItem <IBICAssetWithSlottedChildren>
{
    IBICManifestArchivist *_manifestArchivist;
}

+ (id)fileUTIsToAllowInUnstructuredImport;
+ (id)fileExtensionsToAllowInUnstructuredImport;
+ (id)syntehsizeItemsFromLoosePaths:(id)arg1 claimingPaths:(id *)arg2;
+ (Class)repIdentifierClass;
+ (Class)slotClass;
+ (BOOL)fileNameIsIdentifier;
+ (Class)requiredChildrenClass;
+ (Class)assetRepClass;
+ (id)catalogItemFileExtension;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)defaultName;
+ (BOOL)isAbstractCatalogItemClass;
- (void).cxx_destruct;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (void)setConflictState:(unsigned long long)arg1 forChild:(id)arg2;
- (BOOL)isChildMinimallyFitForCompiling:(id)arg1;
- (Class)expectedChildClassForSlot:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)slotForChild:(id)arg1;
- (unsigned long long)conflictStateForChild:(id)arg1;
- (id)suggestionSetMaskForSuggestionSet:(id)arg1 usingValueModifierBlock:(CDUnknownBlockType)arg2;
- (id)requiredCounterpartsMask;
- (id)existingSlotComponentMask;
- (long long)manifestArchivist:(id)arg1 orderChildrenForSlotConflictResolutionByComparing:(id)arg2 to:(id)arg3;
- (void)manifestArchivist:(id)arg1 setConflictState:(unsigned long long)arg2 forChild:(id)arg3;
- (void)manifestArchivist:(id)arg1 setSlot:(id)arg2 forChild:(id)arg3;
- (unsigned long long)manifestArchivist:(id)arg1 conflictStateForChild:(id)arg2;
- (id)manifestArchivist:(id)arg1 slotForChild:(id)arg2;
- (Class)manifestArchivistSlotClassForChildren:(id)arg1;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (void)populateMutatorsToAddRequiredChildCounterparts:(id)arg1;
- (id)missingRequiredCounterpartSlots;
- (void)populateIssues:(id)arg1 context:(id)arg2;
- (id)assetRepForSlot:(id)arg1;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)children;
- (id)defaultUnqualifiedRuntimeName;
- (id)orderedSlotComponentClasses;
- (BOOL)fileStructureSnapshotChildWouldMapToModelChild:(id)arg1;
- (id)manifestContent;
- (id)manifestFileName;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initializeManifestArchivist;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

