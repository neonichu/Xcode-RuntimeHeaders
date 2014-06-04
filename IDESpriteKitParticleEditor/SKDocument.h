/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEEditorDocument.h"

#import "IDEDocumentStructureProviding-Protocol.h"
#import "NSKeyedUnarchiverDelegate-Protocol.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString, SKDocumentViewController, SKEditorRoot, SKEditorScene;

@interface SKDocument : IDEEditorDocument <IDEDocumentStructureProviding, NSKeyedUnarchiverDelegate>
{
    SKEditorRoot *_pseudoRoot;
    BOOL _pauseAttrObserver;
    NSObject<OS_dispatch_queue> *_syncQueue;
    SKEditorScene *_scene;
    id _editingTarget;
    SKDocumentViewController *_inspectionDocumentController;
}

+ (id)documentForNode:(id)arg1;
+ (void)removeDocumentInstance:(id)arg1;
+ (void)addDocumentInstance:(id)arg1;
+ (id)documents;
@property(nonatomic) __weak SKDocumentViewController *inspectionDocumentController; // @synthesize inspectionDocumentController=_inspectionDocumentController;
@property(readonly) id editingTarget; // @synthesize editingTarget=_editingTarget;
@property(readonly) SKEditorScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)setNewScene:(id)arg1;
- (void)setSceneSize:(struct CGSize)arg1;
- (BOOL)canSave;
@property(readonly) NSArray *ideTopLevelStructureObjects;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (void)stopUndoObservationsOf:(id)arg1;
- (void)startUndoObservationsOf:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)shouldPauseAttributeObserver;
- (void)toggleAttributeObserverPause:(BOOL)arg1;
- (void)undoWithKVCUndoRecord:(id)arg1;
- (void)setupUndoManager:(id)arg1;
- (void)teardownUndoManager:(id)arg1;
- (void)editorDocumentWillClose;
- (void)prepareForDocumentClose;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
