//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCPropertiesInspectorPaneModule.h>

@class NSButton, NSImageView, NSTextField, PBXControlScrollView, PBXExtendedTableView, XCExtendedArrayController;

@interface XCApplicationPropertiesInspectorPane : XCPropertiesInspectorPaneModule
{
    NSTextField *_typeTextField;
    NSTextField *_creatorTextField;
    NSTextField *_versionTextField;
    NSTextField *_iconFileTextField;
    NSImageView *_iconFileImageView;
    NSTextField *_principalClassTextField;
    NSTextField *_mainNibFileTextField;
    PBXExtendedTableView *_documentTypesTableView;
    PBXControlScrollView *_documentTypesScrollView;
    NSButton *_addDocumentTypeButton;
    NSButton *_removeDocumentTypeButton;
    XCExtendedArrayController *_selectedItemsController;
    XCExtendedArrayController *_documentTypesController;
}

+ (BOOL)canInspectItems:(id)arg1;
+ (void)initialize;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)changeIconFile:(id)arg1;
- (BOOL)multipleItemsSelected;
- (void)structureDidChangeForArrayController:(id)arg1;
- (void)contentDidChangeForArrayController:(id)arg1;
- (void)currentInspectedItemsChanged:(id)arg1;
- (id)newObjectBasedOnObject:(id)arg1 fromController:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;

@end

