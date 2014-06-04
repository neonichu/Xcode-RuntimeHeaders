/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSDocument.h"

#import "DVTStateRepositoryDelegate-Protocol.h"
#import "DVTStatefulObject-Protocol.h"
#import "DVTTabbedWindowCreation-Protocol.h"
#import "IDEMustCloseOnQuitDocument-Protocol.h"
#import "IDEPreBuildSavingDelegate-Protocol.h"
#import "IDEWorkspaceDelegate-Protocol.h"

@class DVTDelayedInvocation, DVTMapTable, DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, DVTStateRepository, DVTStateToken, DVTSystemActivityToken, IDEActivityReportManager, IDESourceControlWorkspaceUIHandler, IDEWorkspace, IDEWorkspaceWindowController, NSArray, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface IDEWorkspaceDocument : NSDocument <IDEWorkspaceDelegate, DVTTabbedWindowCreation, DVTStatefulObject, DVTStateRepositoryDelegate, IDEMustCloseOnQuitDocument, IDEPreBuildSavingDelegate>
{
    DVTStackBacktrace *_invalidationBacktrace;
    DVTStateRepository *_stateRepository;
    DVTStateToken *_stateToken;
    IDEWorkspace *_workspace;
    IDEWorkspaceWindowController *_lastActiveWorkspaceWindowController;
    NSMutableArray *_recentEditorDocumentURLs;
    NSHashTable *_allRecentEditorDocumentURLs;
    NSMutableDictionary *_defaultEditorStateTree;
    NSMutableDictionary *_defaultPrimaryEditorFrameSizes;
    NSMutableSet *_editedDocuments;
    DVTMapTable *_controllerForDebugSessionTable;
    DVTDelayedInvocation *_stateSavingDelayedInvocation;
    IDEActivityReportManager *_activityReportManager;
    IDESourceControlWorkspaceUIHandler *_sourceControlWorkspaceUIHandler;
    DVTObservingToken *_runContextsObservingToken;
    DVTObservingToken *_isWorkspaceIdleToken;
    DVTObservingToken *_launchSessionsObservingToken;
    DVTObservingToken *_launchSessionsRunnablePIDObservingToken;
    DVTObservingToken *_currentDebugSessionObserverToken;
    DVTNotificationToken *_applicationIsQuittingNotificationToken;
    DVTObservingToken *_currentExecutionTrackerObservingToken;
    DVTMapTable *_hasGUIValueForLaunchSessionMap;
    NSDictionary *_previousSessionActiveRunContextInfo;
    NSDictionary *_previousSessionActiveRunDestinationInfo;
    id _upgradeCompletionBlock;
    NSMutableArray *_stateChangeObservingTokens;
    NSMutableDictionary *_tabStateContextForTabNameMap;
    int _debuggingWindowBehavior;
    BOOL _lastWorkspaceWindowHasStartedClosing;
    BOOL _applicationIsTerminating;
    BOOL _isClosing;
    BOOL _isInvalidated;
    BOOL _userWantsAppFocusInMiniDebugging;
    BOOL _userWantsMiniDebuggingConsole;
    BOOL _didSetupUISubsystems;
    BOOL _isCheckingCanClose;
    id _openingPerformanceMetricIdentifier;
    DVTSystemActivityToken *_systemActivityToken;
    DVTObservingToken *_executionTrackerIsFinishedObservingToken;
    DVTObservingToken *_executionEnvironmentCurrentBuildOperationObservingToken;
}

+ (id)keyPathsForValuesAffectingUserWantsBreakpointsActivated;
+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)_setMaximumRecentEditorDocumentCount:(long long)arg1;
+ (long long)_maximumRecentEditorDocumentCount;
+ (long long)_unlimitedMaximumRecentEditorDocumentCountMarker;
+ (id)documentForWorkspace:(id)arg1;
+ (id)debuggerUIExtensionForLaunchSession:(id)arg1;
+ (id)documentTypeName;
+ (BOOL)autosavesDrafts;
+ (BOOL)autosavesInPlace;
+ (BOOL)preservesVersions;
+ (void)initialize;
@property(retain) IDESourceControlWorkspaceUIHandler *sourceControlWorkspaceUIHandler; // @synthesize sourceControlWorkspaceUIHandler=_sourceControlWorkspaceUIHandler;
@property BOOL applicationIsTerminating; // @synthesize applicationIsTerminating=_applicationIsTerminating;
@property(retain) NSMutableDictionary *tabStateContextForTabNameMap; // @synthesize tabStateContextForTabNameMap=_tabStateContextForTabNameMap;
@property BOOL userWantsMiniDebuggingConsole; // @synthesize userWantsMiniDebuggingConsole=_userWantsMiniDebuggingConsole;
@property BOOL userWantsAppFocusInMiniDebugging; // @synthesize userWantsAppFocusInMiniDebugging=_userWantsAppFocusInMiniDebugging;
@property(nonatomic) int debuggingWindowBehavior; // @synthesize debuggingWindowBehavior=_debuggingWindowBehavior;
@property(retain) DVTStateToken *stateToken; // @synthesize stateToken=_stateToken;
@property(readonly) DVTStackBacktrace *invalidationBacktrace; // @synthesize invalidationBacktrace=_invalidationBacktrace;
- (void).cxx_destruct;
- (void)_restoreActiveRunContextIfPossible;
- (id)dvtExtraBindings;
@property(readonly, copy) NSDictionary *activeRunDestinationInfo;
@property(readonly, copy) NSDictionary *activeRunContextInfo;
@property(copy) NSArray *orderedWindowControllerNames;
@property BOOL userWantsBreakpointsActivated;
@property(copy) NSDictionary *stateSavingDefaultEditorStatesForURLs;
@property(copy) NSArray *stateSavingRecentEditorDocumentURLs;
- (void)commitStateToDictionary:(id)arg1;
- (id)_tabStateContextForTabController:(id)arg1 owningWindowController:(id)arg2;
- (void)revertStateWithDictionary:(id)arg1;
@property(readonly) DVTStateRepository *stateRepository; // @synthesize stateRepository=_stateRepository;
- (void)configureStateSavingObservers;
- (void)stateRepositoryDidChange:(id)arg1;
- (BOOL)readStateData;
- (void)writeStateData;
- (id)_stateSavingCustomDataSpecifier;
- (void)removeWindowController:(id)arg1;
- (void)addWindowController:(id)arg1;
- (void)makeWindowControllers;
- (id)showOrCreateTabNamed:(id)arg1 inNewWindow:(BOOL)arg2 restoringAfter:(double)arg3;
- (id)_recreateTabNamed:(id)arg1 withTabStateContext:(id)arg2 shouldCreateWindow:(BOOL)arg3 restoringAfter:(double)arg4;
- (id)_bestWindowControllerForTabNamed:(id)arg1 withTabStateContext:(id)arg2 shouldCreateWindow:(BOOL)arg3 restoringAfter:(double)arg4;
- (id)_makeTabbedWindowControllerWithStateFromTabController:(id)arg1 documentURL:(id)arg2 simpleEditorWindowLayout:(BOOL)arg3 frontmost:(BOOL)arg4;
- (id)windowControllerWithUniqueIdentifier:(id)arg1;
- (id)makeTabbedWindowControllerShowingWindow:(BOOL)arg1;
- (id)_makeTabbedWindowControllerShowingWindow:(BOOL)arg1 withIdentifier:(id)arg2 createNewTabUponLoadIfNoTabsExist:(BOOL)arg3;
- (void)_addRecentEditorDocumentURL:(id)arg1;
@property(readonly) NSArray *recentEditorDocumentURLs;
- (id)_allRecentEditorDocumentURLs;
- (void)_clearRecentEditorDocumentURLs;
@property(readonly) IDEActivityReportManager *activityReportManager;
- (void)windowControllerWindowWillClose:(id)arg1;
- (void)_editorDocumentWillClose:(id)arg1;
- (void)_willEditDocument:(id)arg1;
- (void)_didOpenDocument:(id)arg1;
- (id)_editedDocuments;
- (void)_setDefaultPrimaryEditorFrameSize:(struct CGSize)arg1 forDocumentURL:(id)arg2;
- (struct CGSize)_defaultPrimaryEditorFrameSizeForDocumentURL:(id)arg1;
- (void)_cacheDefaultEditorStateDictionary:(id)arg1 forDocumentExtensionIdentifier:(id)arg2 forDocumentURL:(id)arg3;
- (id)_defaultEditorStateDictionaryForDocumentExtensionIdentifier:(id)arg1 forDocumentURL:(id)arg2;
- (id)_debuggingWindowBehaviorAsStringForMessageTracerReport;
- (id)debugSessionControllerForLaunchSession:(id)arg1;
- (void)activateTargetProcess;
- (void)_delayedActivateTargetProcess:(id)arg1;
- (BOOL)_isXcodeActiveAndTargetInActivatableState:(id)arg1;
- (void)_setAppIcon:(id)arg1 forLaunchSession:(id)arg2;
- (id)_appIconForRunnableLocation:(id)arg1 pid:(int)arg2;
- (void)_updateIconForLaunchSessionForMacIfNecessary:(id)arg1 pid:(int)arg2;
- (void)_activateTargetProcess:(id)arg1 tryCounter:(long long)arg2;
- (void)_setLaunchSessionToIntensiveFileIODoneStateIfNecessary:(id)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)_handleDocumentFileChanges:(id)arg1;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)_readFromURL:(id)arg1 ofType:(id)arg2 simpleFilesFocused:(BOOL)arg3 error:(id *)arg4;
- (void)setLastActiveWorkspaceWindowController:(id)arg1;
- (id)activeWorkspaceWindowController;
@property(readonly) IDEWorkspace *workspace;
- (void)_setWorkspace:(id)arg1;
- (void)_workspace:(id)arg1 didChangeSimpleFilesFocusedTo:(BOOL)arg2;
- (void)_workspace:(id)arg1 didChangeFinishedLoadingTo:(BOOL)arg2;
- (void)_container:(id)arg1 didChangeFromFilePath:(id)arg2 toFilePath:(id)arg3;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (void)performBlockAfterPreBuildSave:(id)arg1;
- (BOOL)_shouldShowAutosaveButtonForWindow:(id)arg1;
- (BOOL)_checkAutosavingPossibilityAndReturnError:(id *)arg1;
- (BOOL)checkAutosavingSafetyAndReturnError:(id *)arg1;
- (void)setupUISubsystems;
- (void)_workspace:(id)arg1 failedToResolveContainerForProjectFile:(id)arg2;
- (void)_setupLaunchSessionsObservation;
- (id)_firstErrorForExecutionTracker:(id)arg1;
- (void)_recordWorkspaceStatisticsLater;
- (void)_recordWorkspaceStatistics;
- (BOOL)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (void)saveAsWorkspace:(id)arg1 showAlert:(BOOL)arg2 completionBlock:(id)arg3;
- (void)_upgradeAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_workspaceDocument:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)saveAsWorkspace:(id)arg1;
- (BOOL)prepareSavePanel:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)runPageLayout:(id)arg1;
- (void)printDocument:(id)arg1;
- (void)saveDocumentTo:(id)arg1;
- (void)duplicateDocument:(id)arg1;
- (void)saveDocumentAs:(id)arg1;
- (void)saveDocument:(id)arg1;
- (void)revertDocumentToSaved:(id)arg1;
- (void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)shouldCloseWindowController:(id)arg1 delegate:(id)arg2 shouldCloseSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (BOOL)canCloseDocumentAtQuit;
- (BOOL)_canCloseWorkspaceDocument;
- (id)_dirtyDocuments;
- (BOOL)_closeAfterSavingDirtyEditorDocumentsWithCancelButton:(BOOL)arg1;
- (void)close;
- (void)writeStateIfNeeded;
- (BOOL)dvt_hasBeenEditedSinceLastUserInitiatedSave;
@property(readonly, getter=isClosed) BOOL closed;
- (id)_openingPerformanceMetricIdentifier;
- (void)dvt_shouldDeallocate;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (id)initWithType:(id)arg1 error:(id *)arg2;
- (id)initWithWorkspace:(id)arg1;
- (id)init;
- (id)_openWindowTerminationDisablingReason;
- (id)sdefSupport_clean:(id)arg1;
- (id)sdefSupport_build:(id)arg1;
- (void)_resumeCommandAfterBuildCompleted:(id)arg1;
- (id)sdefSupport_fileReferenceForPath:(id)arg1;
- (id)objectSpecifier;
- (id)displayName;
- (void)insertInSdefSupport_Xcode3Groups:(id)arg1 atIndex:(long long)arg2;
- (void)insertInSdefSupport_Xcode3FileReferences:(id)arg1 atIndex:(long long)arg2;
- (void)insertInSdefSupport_runContexts:(id)arg1 atIndex:(long long)arg2;
- (void)insertInSdefSupport_projects:(id)arg1 atIndex:(long long)arg2;
- (void)insertInSdefSupport_itemReferences:(id)arg1 atIndex:(long long)arg2;
- (void)insertInSdefSupport_groups:(id)arg1 atIndex:(long long)arg2;
- (void)insertInSdefSupport_fileReferences:(id)arg1 atIndex:(long long)arg2;
- (void)insertInSdefSupport_buildMessages:(id)arg1 atIndex:(long long)arg2;
- (void)insertInSdefSupport_breakpoints:(id)arg1 atIndex:(long long)arg2;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (id)sdefSupport_Xcode3Groups;
- (id)sdefSupport_Xcode3FileReferences;
- (id)sdefSupport_symbolicBreakpoints;
- (id)sdefSupport_projects;
- (id)sdefSupport_groups;
- (id)sdefSupport_fileReferences;
- (id)sdefSupport_fileBreakpoints;
- (id)sdefSupport_breakpoints;
- (void)setSdefSupport_productDirectory:(id)arg1;
- (id)sdefSupport_productDirectory;
- (void)setSdefSupport_intermediatesDirectory:(id)arg1;
- (id)sdefSupport_intermediatesDirectory;
- (void)setSdefSupport_breakpointsEnabled:(BOOL)arg1;
- (BOOL)sdefSupport_breakpointsEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
