//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

#import <IDEModelEditor/IDEDocumentStructureProviding-Protocol.h>

@class NSArray, NSString, NSURL, XDDevMappingModel, XDMappingModelManager;

@interface IDEMappingModelDocument : IDEEditorDocument <IDEDocumentStructureProviding>
{
    XDMappingModelManager *_modelManager;
    NSString *_mappingModelPath;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)wrapperByCopyingContentsAtPath:(id)arg1 error:(id *)arg2;
@property(retain) XDMappingModelManager *modelManager; // @synthesize modelManager=_modelManager;
- (void).cxx_destruct;
@property(readonly) NSURL *mappingModelURL;
- (void)reloadDestinationModel;
@property(retain) NSURL *destinationModelURL;
- (void)reloadSourceModel;
@property(retain) NSURL *sourceModelURL;
- (id)_projectPath;
@property(readonly) NSArray *ideTopLevelStructureObjects;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (void)setFileURL:(id)arg1;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
@property(readonly) XDDevMappingModel *mappingModel;
- (BOOL)loadMappingModelFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)canSave;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

