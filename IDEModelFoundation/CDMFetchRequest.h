//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelFoundation/CDMIdentification-Protocol.h>
#import <IDEModelFoundation/DVTInvalidation-Protocol.h>
#import <IDEModelFoundation/IDEInspectorAccessibilitySupport-Protocol.h>
#import <IDEModelFoundation/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class CDMEntity, CDMModel, DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, IDEFileReference, NSImage, NSNumber, NSString;

@interface CDMFetchRequest : NSObject <IDEInspectorAccessibilitySupport, CDMIdentification, DVTInvalidation, IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSString *_name;
    CDMEntity *_entity;
    NSString *_predicateString;
    unsigned long long _fetchLimit;
    unsigned long long _fetchOffset;
    unsigned long long _fetchBatchSize;
    BOOL _includeSubentities;
    BOOL _includePropertyValues;
    BOOL _includesPendingChanges;
    BOOL _returnObjectsAsFaults;
    BOOL _returnDistinctResults;
    CDMModel *_model;
    long long _resultType;
    NSNumber *_uniqueID;
}

+ (id)fetchRequestFromPasteboardPlist:(id)arg1 model:(id)arg2;
+ (void)initialize;
@property(copy) NSNumber *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(retain) CDMModel *model; // @synthesize model=_model;
@property(nonatomic) BOOL returnDistinctResults; // @synthesize returnDistinctResults=_returnDistinctResults;
@property(nonatomic) BOOL returnObjectsAsFaults; // @synthesize returnObjectsAsFaults=_returnObjectsAsFaults;
@property(nonatomic) BOOL includesPendingChanges; // @synthesize includesPendingChanges=_includesPendingChanges;
@property(nonatomic) BOOL includePropertyValues; // @synthesize includePropertyValues=_includePropertyValues;
@property(nonatomic) BOOL includeSubentities; // @synthesize includeSubentities=_includeSubentities;
@property(nonatomic) unsigned long long fetchBatchSize; // @synthesize fetchBatchSize=_fetchBatchSize;
@property(nonatomic) unsigned long long fetchOffset; // @synthesize fetchOffset=_fetchOffset;
@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(copy, nonatomic) NSString *predicateString; // @synthesize predicateString=_predicateString;
@property(retain, nonatomic) CDMEntity *entity; // @synthesize entity=_entity;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (id)stringRepresentationForTextIndex;
- (id)stringRepresentation;
- (id)xmlElementDescription;
- (id)xmlElementAttributes;
- (void)stitchToRelatedModelElements;
- (id)initWithXMLElementDescription:(id)arg1 belongingToModel:(id)arg2;
@property(readonly) NSString *navigableItem_name;
- (id)addKeysToDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 inModel:(id)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)undoManager;
- (void)cascadeChangesToLegacyFetchRequest:(id)arg1 givenModernToLegacyEntityMapping:(id)arg2;
- (id)initWithLegacyFetchRequest:(id)arg1 andEntityMapping:(id)arg2 belongingToModel:(id)arg3;
- (id)initWithName:(id)arg1 belongingToModel:(id)arg2 targettingEntity:(id)arg3;
- (id)init;
- (id)initInModel:(id)arg1;
- (void)primitiveInvalidate;
- (void)_registerUndoBlockForFetchRequest:(CDUnknownBlockType)arg1;
- (id)humanReadableNameForInspectorKeyPath:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

