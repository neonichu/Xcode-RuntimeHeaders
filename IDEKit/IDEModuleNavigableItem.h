//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigableItem.h>

@class DVTObservingToken, DVTWeakInterposer;

@interface IDEModuleNavigableItem : IDENavigableItem
{
    DVTWeakInterposer *_document_dvtWeakInterposer;
    DVTObservingToken *_documentTopLevelStructObservation;
    BOOL _isInvalidatingTopLevelObjects;
    id _document;
}

+ (id)fileDataType;
@property(retain) DVTObservingToken *documentTopLevelStructObservation; // @synthesize documentTopLevelStructObservation=_documentTopLevelStructObservation;
@property __weak id document; // @synthesize document=_document;
- (void).cxx_destruct;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)identifierForChildItem:(id)arg1;
- (id)childRepresentedObjects;
- (BOOL)isLeaf;
- (BOOL)isDocumentNavigableItem;
- (id)structureProvidingEditorDocument;
- (id)_editorDocument;
- (void)_updateEditorDocument:(id)arg1;
- (void)_documentDidClose;
- (void)primitiveInvalidate;
- (void)invalidateChildItems;
- (id)contentDocumentLocation;
- (id)navigableItem_documentType;
- (id)documentType;
- (id)image;
- (id)name;
- (id)module;
- (id)initWithRepresentedObject:(id)arg1;

@end

