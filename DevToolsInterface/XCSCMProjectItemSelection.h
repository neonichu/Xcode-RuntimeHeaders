//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCProjectBasedSelection.h>

@interface XCSCMProjectItemSelection : XCProjectBasedSelection
{
    struct {
        unsigned int containsUpToDateFile:1;
        unsigned int containsRemotelyUpdatedFile:1;
        unsigned int containsLocallyModifiedFile:1;
        unsigned int containsLocallyAddedFile:1;
        unsigned int containsLocallyRemovedFile:1;
        unsigned int containsPossiblyConflictingFile:1;
        unsigned int containsUnknownFile:1;
        unsigned int containsRemovedFile:1;
        unsigned int containsStatelessFile:1;
        unsigned int containsLockedFile:1;
        unsigned int containsGroup:1;
        unsigned int oneLeafItemSelected:1;
        unsigned int hostIsReachable:1;
        unsigned int canPerformOffline:1;
        unsigned int canGetStatus:1;
        unsigned int canUpdate:1;
        unsigned int canRevert:1;
        unsigned int canUpdateBack:1;
        unsigned int canCompareCurrent:1;
        unsigned int canCompareBack:1;
        unsigned int canAddForSCM:1;
        unsigned int canMakeEditable:1;
        unsigned int canRemove:1;
        unsigned int canCommit:1;
        unsigned int unassigned:8;
    } _cmFlags;
}

+ (BOOL)allItems:(id)arg1 underSourceControlManager:(id)arg2;
- (int)validateMenuItem_scmCommitAll:(id)arg1;
- (void)scmCommitAll:(id)arg1;
- (void)_scmRunCommitSheetForCommitAllWithTitle:(id)arg1;
- (void)_scmCommitAllSheetDidEndWithReturnCode:(long long)arg1 items:(id)arg2 contextInfo:(void *)arg3;
- (int)validateMenuItem_scmRefreshAll:(id)arg1;
- (void)scmRefreshAll:(id)arg1;
- (int)validateMenuItem_scmUpdateToLatest:(id)arg1;
- (void)scmUpdateToLatest:(id)arg1;
- (int)validateMenuItem_scmUpdateAll:(id)arg1;
- (void)scmUpdateAll:(id)arg1;
- (void)scmAnnotateWithTopOfBranch:(id)arg1;
- (void)scmAnnotateWithTopOfTrunk:(id)arg1;
- (void)_scmAnnotateSpecificRevisionSheetDidEndWithReturnCode:(long long)arg1 string:(id)arg2 contextInfo:(void *)arg3;
- (int)validateMenuItem_scmAnnotateWithSpecificRevision:(id)arg1;
- (void)scmAnnotateWithSpecificRevision:(id)arg1;
- (void)_scmAnnotateRevisionsSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (int)validateMenuItem_scmAnnotateWithRevision:(id)arg1;
- (void)scmAnnotateWithRevision:(id)arg1;
- (int)validateMenuItem_scmAnnotateWithBase:(id)arg1;
- (void)scmAnnotateWithBase:(id)arg1;
- (void)_scmAnnotateWithTOTorTOBVerificationSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (int)validateMenuItem_scmAnnotateWithLatest:(id)arg1;
- (void)scmAnnotateWithLatest:(id)arg1;
- (int)validateMenuItem_scmDiffWithBase:(id)arg1;
- (void)scmDiffWithBase:(id)arg1;
- (int)validateMenuItem_scmDiffWithLatest:(id)arg1;
- (void)scmDiffWithTopOfBranch:(id)arg1;
- (void)scmDiffWithTopOfTrunk:(id)arg1;
- (void)_scmDiffWithTOTorTOBVerificationSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)scmDiffWithLatest:(id)arg1;
- (int)validateMenuItem_scmDiffWithRevision:(id)arg1;
- (void)_scmDiffRevisionsSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)scmDiffWithRevision:(id)arg1;
- (int)validateMenuItem_scmDiffWithSpecificRevision:(id)arg1;
- (void)_scmDiffSpecificRevisionSheetDidEndWithReturnCode:(long long)arg1 string:(id)arg2 contextInfo:(void *)arg3;
- (void)scmDiffWithSpecificRevision:(id)arg1;
- (int)validateMenuItem_scmCompareWithBase:(id)arg1;
- (void)scmCompareWithBase:(id)arg1;
- (int)validateMenuItem_scmCompareWithLatest:(id)arg1;
- (void)scmCompareWithTopOfBranch:(id)arg1;
- (void)scmCompareWithTopOfTrunk:(id)arg1;
- (void)_scmCompareWithTOTorTOBVerificationSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)scmCompareWithLatest:(id)arg1;
- (int)validateMenuItem_scmCompareWithRevision:(id)arg1;
- (void)_scmCompareRevisionsSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)scmCompareWithRevision:(id)arg1;
- (int)validateMenuItem_scmCompareWithSpecificRevision:(id)arg1;
- (void)_scmCompareSpecificRevisionSheetDidEndWithReturnCode:(long long)arg1 string:(id)arg2 contextInfo:(void *)arg3;
- (void)scmCompareWithSpecificRevision:(id)arg1;
- (int)validateMenuItem_scmCompareWithFile:(id)arg1;
- (void)_scmCompareFileOpenSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)scmCompareWithFile:(id)arg1;
- (int)validateMenuItem_scmUpdateToRevision:(id)arg1;
- (void)_scmUpdateRevisionsSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)scmUpdateToRevision:(id)arg1;
- (int)validateMenuItem_scmUpdateToSpecificRevision:(id)arg1;
- (void)_scmUpdateSpecificRevisionSheetDidEndWithReturnCode:(long long)arg1 string:(id)arg2 contextInfo:(void *)arg3;
- (void)scmUpdateToSpecificRevision:(id)arg1;
- (int)validateMenuItem_scmEdit:(id)arg1;
- (void)scmEdit:(id)arg1;
- (void)_discardLocalChangesSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_doConfirmAbandonChangesAlertWithDidEndSelector:(SEL)arg1;
- (int)validateMenuItem_scmDiscard:(id)arg1;
- (void)scmDiscard:(id)arg1;
- (void)_scmRunCommitSheetForItems:(id)arg1 withTitle:(id)arg2;
- (void)_scmCommitSheetDidEndWithReturnCode:(long long)arg1 items:(id)arg2 contextInfo:(void *)arg3;
- (void)scmCommitItems:(id)arg1 args:(id)arg2;
- (int)validateMenuItem_scmCommit:(id)arg1;
- (void)scmCommit:(id)arg1;
- (int)validateMenuItem_scmAdd:(id)arg1;
- (void)scmAdd:(id)arg1;
- (void)scmAddItems:(id)arg1;
- (int)validateMenuItem_getSCMInfo:(id)arg1;
- (void)getSCMInfo:(id)arg1;
- (BOOL)scmAuthenticateIfUIRequiredReturnToSelector:(SEL)arg1;
- (void)saveEditedDocumentsIfNeeded;
- (id)windowForSelectionContext;
- (void)_updatePossibleSCMActions;
- (id)sourceControlManager;
- (BOOL)containsProjectRoot:(id)arg1;
- (void)revalidate;
- (id)initWithSource:(id)arg1 projectDocument:(id)arg2 items:(id)arg3 paths:(id)arg4;

@end

