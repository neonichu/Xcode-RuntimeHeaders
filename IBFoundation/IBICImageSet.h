//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAsset.h>

@interface IBICImageSet : IBICSlottedAsset
{
    long long _templateRenderingIntent;
}

+ (BOOL)ecnodesCompressionForChildren;
+ (BOOL)supportsCompression;
+ (id)importPriority;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)catalogItemFileExtension;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)defaultName;
+ (Class)assetRepClass;
+ (id)createInstanceNamed:(id)arg1 populatedWithChildrenUsingSlots:(id)arg2 baseSize:(struct CGSize)arg3 usingRenderer:(CDUnknownBlockType)arg4;
+ (id)createInstanceNamed:(id)arg1 baseSize:(struct CGSize)arg2 forIdioms:(id)arg3 usingRenderer:(CDUnknownBlockType)arg4;
+ (id)createDefaultInstancesForUnitTesting;
@property(nonatomic) long long templateRenderingIntent; // @synthesize templateRenderingIntent=_templateRenderingIntent;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)enumerateSizeProvidingItemsForValidatingBrandAssetCollection:(CDUnknownBlockType)arg1;
- (id)enclosingSpriteAtlas;
- (id)suggestionSetMaskForSuggestionSet:(id)arg1 usingValueModifierBlock:(CDUnknownBlockType)arg2;
- (id)requiredCounterpartsMask;
- (CDStruct_550fdc95)taggingSupport;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2;
- (BOOL)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (BOOL)manifestArchivist:(id)arg1 validateManifestChildEntry:(id)arg2 results:(id)arg3;
- (void)manifestArchivist:(id)arg1 populateManifestEntry:(id)arg2 forChild:(id)arg3;
- (BOOL)manifestArchivist:(id)arg1 childHasDataToRecordInManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromChildEntry:(id)arg2 toChild:(id)arg3 results:(id)arg4;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (id)intrinsicallyOrderedChildren;
- (id)children;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)assetRepForSlot:(id)arg1;
- (id)initializeManifestArchivist;
- (void)createChildrenForSlots:(id)arg1 baseSize:(struct CGSize)arg2 usingRenderer:(CDUnknownBlockType)arg3;

@end

