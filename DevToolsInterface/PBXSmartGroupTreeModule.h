//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXGroupTreeModule.h>

#import <DevToolsInterface/NSOutlineViewDataSource-Protocol.h>
#import <DevToolsInterface/NSOutlineViewDelegate-Protocol.h>
#import <DevToolsInterface/PBXTableColumnProvider-Protocol.h>
#import <DevToolsInterface/XCFosterParentHostProtocol-Protocol.h>
#import <DevToolsInterface/XCSelectionSource-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, PBXFosterParent, PBXGroup, PBXTableColumnManager;

@interface PBXSmartGroupTreeModule : PBXGroupTreeModule <NSOutlineViewDataSource, NSOutlineViewDelegate, PBXTableColumnProvider, XCSelectionSource, XCFosterParentHostProtocol>
{
    PBXGroup *_groupContext;
    PBXFosterParent *_projectFosterParent;
    NSMutableArray *_topTransients;
    NSMutableArray *_bottomTransients;
    PBXTableColumnManager *_columnManager;
    NSDictionary *_menuDictionary;
    BOOL _refreshOnItemsChangedNotification;
    BOOL _isTakingContentConfigurationFromDictionary;
    NSMutableArray *_dockMenuItems;
    BOOL _showPerspectiveControl;
    BOOL _haveBroadcastConfiguration;
}

- (void)_openGeneralPreferences:(id)arg1;
- (void)_validateDockMenu;
- (void)_chooseSmartGroups:(id)arg1;
- (id)dockMenuItems;
- (BOOL)canRename;
- (BOOL)canCloneInDock;
- (id)keyTabView;
- (void)_scmStateDidChange:(id)arg1;
- (void)takeContentConfigurationFromDictionary:(id)arg1;
- (id)contentConfigurationDictionary;
- (id)_addNewBuildPhaseUsingClass:(Class)arg1;
- (void)newJavaArchiveBuildPhase:(id)arg1;
- (void)newRezBuildPhase:(id)arg1;
- (void)newFrameworksBuildPhase:(id)arg1;
- (void)newAppleScriptBuildPhase:(id)arg1;
- (void)newSourcesBuildPhase:(id)arg1;
- (void)newResourcesBuildPhase:(id)arg1;
- (void)newHeadersBuildPhase:(id)arg1;
- (void)newCopyFilesBuildPhase:(id)arg1;
- (void)newShellScriptBuildPhase:(id)arg1;
- (void)newSmartGroup:(id)arg1;
- (void)disassembleSelectedReferences:(id)arg1;
- (void)preprocessSelectedReferences:(id)arg1;
- (void)fixAndContinueSelectedReferences:(id)arg1;
- (void)compileSelectedReferences:(id)arg1;
- (void)startFileRefBuildOperationForSelectedFileRefsUsingAction:(id)arg1;
- (void)newNativeTarget:(id)arg1;
- (void)updateMenuBarMenus;
- (void)_windowDidResignKey:(id)arg1;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)_submenuGroupSelection:(id)arg1;
- (void)_newGroupBindingSelection:(id)arg1;
- (id)submenuItem;
- (void)removeColumnForIdentifier:(id)arg1 fromTable:(id)arg2;
- (id)addColumnForIdentifier:(id)arg1 toTable:(id)arg2;
- (id)menuTitleForIdentifier:(id)arg1;
- (id)requiredColumnIdentifiers:(id)arg1;
- (id)optionalColumnIdentifiers:(id)arg1;
- (id)outlineView;
- (void)orderSmartGroupsAtLocation:(int)arg1 order:(id)arg2;
- (void)addSmartGroups:(id)arg1 inArray:(id)arg2 to:(int)arg3;
- (void)addSmartGroups:(id)arg1;
- (void)addSmartGroup:(id)arg1;
- (id)loadSmartGroupBindings:(id)arg1;
- (void)removeAllSmartGroups;
- (Class)_findDataSourceForRow:(long long)arg1 inOutlineView:(id)arg2;
- (long long)_parentRowForRow:(long long)arg1 fromOutlineView:(id)arg2;
- (Class)_refactorSelection;
- (void)refreshDataSourceView;
- (void)forceRefreshDataSourceViewIfFirstResponder;
- (void)transientDidChange:(id)arg1;
- (void)groupTreeOutlineViewSelectionDidChange:(id)arg1;
- (void)expandPathToReference:(id)arg1;
- (void)selectReference:(id)arg1 byExtendingSelection:(BOOL)arg2 expandReference:(BOOL)arg3;
- (BOOL)outlineView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 willReturnMenu:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)outlineView:(id)arg1 menuForTableColumn:(id)arg2 row:(long long)arg3;
- (id)globalIDsForExpandedItems;
- (void)setSelectedProjectItems:(id)arg1 scrollRowToVisible:(BOOL)arg2;
- (void)setSelectedItems:(id)arg1;
- (void)expandItemsWithGlobalIDs:(id)arg1;
- (void)hideSmartGroupWithID:(id)arg1;
- (void)showSmartGroupWithID:(id)arg1 bringWindowForward:(BOOL)arg2;
- (void)showSmartGroupWithID:(id)arg1;
- (void)doubleClickAction:(id)arg1;
- (void)singleClickAction:(id)arg1;
- (void)_singleClickAction:(id)arg1;
- (void)setupDefaultColumns;
- (id)windowOfSelection;
- (BOOL)wantsToRetainFocusDuringSelection;
- (void)revealItems:(id)arg1 select:(BOOL)arg2;
- (id)xcSelection;
- (void)noteNeedsUpdateForItem:(id)arg1;
- (id)project;
- (void)reloadDataForProxies;
- (void)_reconfigureSplitControls:(id)arg1;
- (void)moduleWasDisplayed;
- (void)_willLocalize:(id)arg1;
- (void)_willUnlocalize:(id)arg1;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)selectGroup:(id)arg1 byExtendingSelection:(BOOL)arg2 expandAncestorsIfNeeded:(BOOL)arg3;
- (BOOL)validateLocalMenuItem:(id)arg1;
- (void)_deleteItemsAfterAskingAboutSpecialItems:(id)arg1;
- (BOOL)moduleEnforcesViewMinSize;
- (struct CGSize)viewMinSize;
- (void)outlineView:(id)arg1 deleteItems:(id)arg2;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (BOOL)rowWithinProject:(long long)arg1;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)outlineView:(id)arg1 handleReturnKey:(id)arg2 changeFocus:(BOOL)arg3;
- (void)viewDidLoad;
- (void)becomeActive;
- (void)_firstResponderDidChange:(id)arg1;
- (void)reloadItem:(id)arg1;
- (void)_itemsChangedInProject:(id)arg1;
- (void)_buildContextFileInfoChangedNotification:(id)arg1;
- (void)_reloadOutlineView:(id)arg1;
- (id)selectedProjectItemPaths;
- (void)_markForRefresh;
- (void)update;
- (id)rootGroupOfContext;
- (void)setRootGroupOfContext:(id)arg1;
- (void)_stopObservingUIGroup:(id)arg1;
- (void)_observeUIGroup:(id)arg1;
- (id)_uiGroupFromGroup:(id)arg1;
- (id)findProxyForItem:(id)arg1;
- (id)findTransientWithGID:(id)arg1 within:(int)arg2;
- (long long)transientCountForLocation:(int)arg1;
- (id)removeTransient:(id)arg1 from:(int)arg2;
- (void)addTransient:(id)arg1 to:(int)arg2;
- (void)addTransients:(id)arg1 toLocation:(int)arg2;
- (id)transientsForLocation:(int)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

