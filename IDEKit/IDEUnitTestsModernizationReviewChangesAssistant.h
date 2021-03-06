//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

#import <IDEKit/IDEComparisonEditorDataSource-Protocol.h>
#import <IDEKit/IDEReviewFilesDataSource-Protocol.h>

@class DVTBorderedView, DVTObservingToken, IDENavigableItemAsyncFilteringCoordinator, IDENavigatorDataCell, IDEReviewFilesViewController, NSArray, NSMapTable, NSMutableSet, NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_semaphore;

@interface IDEUnitTestsModernizationReviewChangesAssistant : IDEAssistant <IDEReviewFilesDataSource, IDEComparisonEditorDataSource>
{
    NSMapTable *_editorDocumentByFilePath;
    NSArray *_flatNavigableItems;
    IDENavigableItemAsyncFilteringCoordinator *_flatFileNavItemCoordinator;
    IDENavigatorDataCell *_containerFileReferenceDataCell;
    IDENavigatorDataCell *_groupDataCell;
    IDENavigatorDataCell *_fileReferenceDataCell;
    IDEReviewFilesViewController *_reviewFilesViewController;
    DVTBorderedView *_borderedView;
    DVTObservingToken *_comparisonEditorObservingToken;
    CDUnknownBlockType _completionBlock;
    NSOperationQueue *_operationQueue;
    NSMutableSet *_readOnlyStatusObservationTokens;
    unsigned long long _numCheckedFilePaths;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NSMutableSet *_bindingTokens;
}

+ (id)keyPathsForValuesAffectingCanFinish;
@property(copy) NSArray *flatNavigableItems; // @synthesize flatNavigableItems=_flatNavigableItems;
- (void).cxx_destruct;
- (BOOL)shouldSelectFirstDiff;
- (id)navigableItemsForSecondaryDocumentLocation:(id)arg1 usingNavigableItemCoordinator:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)navigableItemsForPrimaryDocumentLocation:(id)arg1 usingNavigableItemCoordinator:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)documentForSecondaryDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)documentForPrimaryDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_documentForLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
- (id)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 dataCellForNavigableItem:(id)arg3;
- (id)_fileReferenceCell;
- (id)_groupCell;
- (id)_containerFileReferenceCell;
@property(readonly, copy) NSArray *issueNavigableItems;
- (id)fileSystemNavigableItems;
@property(readonly, copy) NSArray *workspaceNavigableItems;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)_snapshotContainerItem:(id)arg1 customizationBlock:(CDUnknownBlockType)arg2;
- (void)_setInitialSelectionForNavigatorOutlineView:(id)arg1;
- (BOOL)_selectedTargetsContainFilePath:(id)arg1;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_convertedEditorDocument:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)_applyChanges;
- (void)_updateBuildSettingsAndFinish;
- (void)_finishWithError:(id)arg1;
- (id)_checkedDocuments;
- (BOOL)canFinish;
- (BOOL)canGoBack;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

