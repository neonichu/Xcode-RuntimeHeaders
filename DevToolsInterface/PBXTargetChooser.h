//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

@class NSButton, NSMutableDictionary, PBXExtendedOutlineView, PBXTargetInspectorPaneModule;

@interface PBXTargetChooser : PBXModule
{
    PBXExtendedOutlineView *_targetsOutlineView;
    NSButton *_cancelButton;
    NSButton *_addButton;
    PBXTargetInspectorPaneModule *_targetPaneModule;
    NSMutableDictionary *_availableTargetsPerProject;
    NSMutableDictionary *_allTargetsPerProject;
}

- (void)clearSelectionInOutlineView:(id)arg1;
- (void)cancelChooser:(id)arg1;
- (void)addTargets:(id)arg1;
- (id)availableTargetsForProject:(id)arg1;
- (id)allTargetsForProject:(id)arg1;
- (id)selectedTargetsToAdd;
- (void)update;
- (void)clearTargetCaches;
- (void)awakeFromNib;
- (void)dealloc;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)_targetShouldBeEnabledForItem:(id)arg1 fromOutlineView:(id)arg2;
- (void)_enableCell:(id)arg1;
- (void)_disableCell:(id)arg1;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)outlineViewDoubleClick:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;

@end

