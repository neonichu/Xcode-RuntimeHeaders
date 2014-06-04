/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "DVTReplacementViewDelegate-Protocol.h"
#import "DVTTabChooserViewDelegate-Protocol.h"
#import "IDESourceControlBranchTableDelegate-Protocol.h"
#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"

@class DVTBindingToken, DVTBorderedView, DVTChoice, DVTObservingToken, DVTReplacementView, DVTTabChooserView, IDESourceControlWorkingCopyConfiguration, IDESourceControlWorkingTree, IDEWorkspace, NSButton, NSDictionary, NSMutableArray, NSPopUpButton, NSString, NSTextField;

@interface IDESourceControlWorkingCopyEditWindowController : NSWindowController <NSOutlineViewDataSource, NSOutlineViewDelegate, DVTReplacementViewDelegate, IDESourceControlBranchTableDelegate, DVTTabChooserViewDelegate>
{
    DVTBorderedView *_borderedView;
    NSTextField *_windowTitle;
    DVTReplacementView *_detailView;
    DVTReplacementView *_branchesReplacementView;
    DVTBorderedView *_infoContainerView;
    NSTextField *_workingCopyURLField;
    NSTextField *_workingCopyLocalURLField;
    NSButton *_includedInCheckout;
    NSPopUpButton *_checkoutPopupButton;
    NSTextField *_checkoutDescriptionTextField;
    NSDictionary *_wccConfigurationDictionary;
    DVTChoice *_infoChoice;
    DVTChoice *_configChoice;
    DVTChoice *_remotesChoice;
    DVTChoice *_branchesChoice;
    NSButton *_okButton;
    IDESourceControlWorkingCopyEditWindowController *_wc;
    DVTBindingToken *_wcConfigToken;
    DVTBindingToken *_wccConfigToken;
    DVTObservingToken *_tabChooserSelectionObservingToken;
    NSMutableArray *_wcEditedObservers;
    BOOL _editedWorkingCopyConfiguration;
    id <DVTCancellable> _currentBranchToken;
    DVTTabChooserView *_tabChooser;
    IDEWorkspace *_workspace;
    IDESourceControlWorkingTree *_workingTree;
    IDESourceControlWorkingCopyConfiguration *_wcc;
    id _continuationBlock;
}

@property(copy) id continuationBlock; // @synthesize continuationBlock=_continuationBlock;
@property(retain) IDESourceControlWorkingCopyConfiguration *wcc; // @synthesize wcc=_wcc;
@property(retain) IDESourceControlWorkingTree *workingTree; // @synthesize workingTree=_workingTree;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property __weak DVTTabChooserView *tabChooser; // @synthesize tabChooser=_tabChooser;
- (void).cxx_destruct;
- (void)setRequired:(id)arg1;
- (void)setOptional:(id)arg1;
- (void)setIncludedInCheckout:(id)arg1;
- (void)tabChooserView:(id)arg1 userDidChooseChoice:(id)arg2;
- (void)_setupStatePopup;
- (id)currentWCC;
- (void)didRemoveBranch;
- (void)willRemoveBranch;
- (void)_fetchBranches;
- (void)reloadCurrentBranch;
- (void)_setupDetailViewWithSelectedChoiceIdentifier:(id)arg1;
- (id)branchTableViewController;
- (void)displayError:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)done:(id)arg1;
- (void)beginSheetWithSelectedTab:(id)arg1 forWindow:(id)arg2;
- (void)beginSheetForWindow:(id)arg1;
- (void)windowDidLoad;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
