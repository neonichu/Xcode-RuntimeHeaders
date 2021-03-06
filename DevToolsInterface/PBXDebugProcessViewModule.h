//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXDebugDSModelViewModule.h>

@class NSArray, NSPopUpButtonCell, PBXDebugStackTableHeaderCell, PBXLSThread;

@interface PBXDebugProcessViewModule : PBXDebugDSModelViewModule
{
    NSPopUpButtonCell *_threadsPopUp;
    PBXLSThread *_selectedThread;
    PBXDebugStackTableHeaderCell *_stackHeaderCell;
    NSArray *_sortedThreads;
}

+ (id)keyPathsForValuesAffectingSelectedThread;
+ (id)keyPathsForValuesAffectingStackFrames;
@property(readonly) NSArray *sortedThreads; // @synthesize sortedThreads=_sortedThreads;
- (void)setThreadsPopUp:(id)arg1;
- (void)setStackHeaderCellOutlet:(id)arg1;
- (void)setSelectedThread:(id)arg1;
- (id)stackFrames;
- (void)stackDidChange;
- (void)stackWillChange;
- (void)previousThread;
- (void)nextThread;
- (id)popUpSelectionChanged:(id)arg1;
- (void)updateUI;
- (void)_emptyThreadsPopUp;
- (void)_setSelectedThread:(id)arg1;
- (id)selectedThread;
- (void)selectThread:(id)arg1;
- (BOOL)processIsRunning;
- (BOOL)allThreadsStopped;
- (id)process;
- (id)selectedThreadViewModule;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithModuleNibName:(id)arg1;

@end

