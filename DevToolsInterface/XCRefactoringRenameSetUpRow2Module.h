//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCRefactoringTransformationSetUpRow2Module.h>

@class NSButton;

@interface XCRefactoringRenameSetUpRow2Module : XCRefactoringTransformationSetUpRow2Module
{
    NSButton *renameKVCCoreDataMembersCheckbox;
    BOOL _renameKVCCoreDataMembers;
    NSButton *renameFilesCheckbox;
    BOOL _renameFiles;
}

- (void)addToUserInput:(id)arg1;
- (void)setRenameFiles:(id)arg1;
- (void)setRenameKVCCoreDataMembers:(id)arg1;
- (void)setMayRenameFiles:(id)arg1;
- (void)setMayRenameKVCCoreDataMembers:(id)arg1;
- (void)toggleRenameFiles:(id)arg1;
- (void)toggleRenameKVCCoreDataMembers:(id)arg1;

@end

