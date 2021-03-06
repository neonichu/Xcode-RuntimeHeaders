//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTCrashLogRecord, DVTCrashPoint, DVTGradientImageButton, DVTUserDefaultsLeastRecentlyUsedCache, IDECrashPointLogViewController, IDECrashPointOverviewViewController, IDECrashPointsViewController, NSArrayController, NSButton, NSMenu, NSPopUpButton, NSString;

@interface IDECrashPointDetailViewController : IDEViewController
{
    BOOL _restoringSelectedCrashLog;
    DVTCrashPoint *_crashPoint;
    DVTCrashLogRecord *_selectedCrashLogRecord;
    IDECrashPointsViewController *_crashPointsViewController;
    IDECrashPointOverviewViewController *_overviewViewController;
    IDECrashPointLogViewController *_logViewController;
    NSString *_selectedCrashLogPageString;
    NSArrayController *_crashLogsController;
    DVTBorderedView *_overviewBorderedView;
    DVTBorderedView *_logBorderedView;
    DVTBorderedView *_controlBarBorderedView;
    DVTGradientImageButton *_compressButton;
    NSButton *_previousCrashPointButton;
    NSButton *_nextCrashPointButton;
    NSPopUpButton *_crashLogSelector;
    NSMenu *_crashLogMenu;
    DVTUserDefaultsLeastRecentlyUsedCache *_crashLogSelectedCache;
}

+ (id)keyPathsForValuesAffectingShouldShowCrashLogPagingButtons;
+ (id)keyPathsForValuesAffectingCanSelectNextCrashLog;
+ (id)keyPathsForValuesAffectingCanSelectPreviousCrashLog;
@property(nonatomic, getter=isRestoringSelectedCrashLog) BOOL restoringSelectedCrashLog; // @synthesize restoringSelectedCrashLog=_restoringSelectedCrashLog;
@property(retain) DVTUserDefaultsLeastRecentlyUsedCache *crashLogSelectedCache; // @synthesize crashLogSelectedCache=_crashLogSelectedCache;
@property __weak NSMenu *crashLogMenu; // @synthesize crashLogMenu=_crashLogMenu;
@property __weak NSPopUpButton *crashLogSelector; // @synthesize crashLogSelector=_crashLogSelector;
@property __weak NSButton *nextCrashPointButton; // @synthesize nextCrashPointButton=_nextCrashPointButton;
@property __weak NSButton *previousCrashPointButton; // @synthesize previousCrashPointButton=_previousCrashPointButton;
@property __weak DVTGradientImageButton *compressButton; // @synthesize compressButton=_compressButton;
@property __weak DVTBorderedView *controlBarBorderedView; // @synthesize controlBarBorderedView=_controlBarBorderedView;
@property __weak DVTBorderedView *logBorderedView; // @synthesize logBorderedView=_logBorderedView;
@property __weak DVTBorderedView *overviewBorderedView; // @synthesize overviewBorderedView=_overviewBorderedView;
@property __weak NSArrayController *crashLogsController; // @synthesize crashLogsController=_crashLogsController;
@property(readonly) NSString *selectedCrashLogPageString; // @synthesize selectedCrashLogPageString=_selectedCrashLogPageString;
@property(retain) IDECrashPointLogViewController *logViewController; // @synthesize logViewController=_logViewController;
@property(retain) IDECrashPointOverviewViewController *overviewViewController; // @synthesize overviewViewController=_overviewViewController;
@property(readonly) __weak IDECrashPointsViewController *crashPointsViewController; // @synthesize crashPointsViewController=_crashPointsViewController;
- (void).cxx_destruct;
- (void)_updateCompressButtonState;
- (void)compressThreadsAndFrames:(id)arg1;
- (void)selectNextCrashLog:(id)arg1;
- (BOOL)shouldShowCrashLogPagingButtons;
- (void)selectPreviousCrashLog:(id)arg1;
@property(readonly) BOOL canSelectNextCrashLog;
@property(readonly) BOOL canSelectPreviousCrashLog;
- (BOOL)_canSelectCrashLogAtLimitIndex:(unsigned long long)arg1;
- (id)_pageStringForCrashLogIndex:(unsigned long long)arg1 crashLogCount:(unsigned long long)arg2;
- (void)_restoreSelectedCrashLogFromCrashPoint:(id)arg1;
- (void)_saveSelectedCrashLog;
@property(readonly) DVTCrashLogRecord *selectedCrashLogRecord; // @synthesize selectedCrashLogRecord=_selectedCrashLogRecord;
- (void)setSelectedCrashLogRecord:(id)arg1;
- (void)crashLogSelectorSelectedMenuItem:(id)arg1;
@property(retain) DVTCrashPoint *crashPoint; // @synthesize crashPoint=_crashPoint;
- (void)setCrashLogSelectorToCrashLogWithIdentifier:(id)arg1;
- (void)loadView;
- (void)primitiveInvalidate;

@end

