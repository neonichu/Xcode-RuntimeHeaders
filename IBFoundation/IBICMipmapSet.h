//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAsset.h>

@class IBICAbstractTextureSet;

@interface IBICMipmapSet : IBICSlottedAsset
{
    long long _levelMode;
    IBICAbstractTextureSet *_enclosingTextureSet;
}

+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)catalogItemFileExtension;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)defaultName;
+ (Class)assetRepClass;
+ (Class)requiredParentClass;
@property(retain, nonatomic) IBICAbstractTextureSet *enclosingTextureSet; // @synthesize enclosingTextureSet=_enclosingTextureSet;
@property(nonatomic) long long levelMode; // @synthesize levelMode=_levelMode;
- (void).cxx_destruct;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (id)fullyQualifiedRuntimeNameProvidingItemForCARCompiler;
- (id)effectiveModificationDateForCARCompiler;
- (CDStruct_550fdc95)taggingSupport;
- (id)intrinsicallyOrderedChildren;
- (id)children;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)assetRepForSlot:(id)arg1;
- (id)initializeManifestArchivist;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2;
- (BOOL)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (id)parent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)mipLevelImportInfosForCubeFace:(unsigned long long)arg1 flipped:(BOOL)arg2;
- (void)setFileURL:(id)arg1 forTextureAssetInfo:(id)arg2;
- (id)makeTextureAssetInfoWithMipLevel:(unsigned long long)arg1 cubeFace:(long long)arg2 flipped:(BOOL)arg3;
- (BOOL)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;

@end

