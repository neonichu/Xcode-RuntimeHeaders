/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTPopoverContentViewController.h"

@class DVTBorderedView, NSArray, NSArrayController, NSURL;

@interface IDESharedLibrariesPopUp : DVTPopoverContentViewController
{
    id _modulesObservingToken;
    NSArrayController *_arrayController;
    DVTBorderedView *_glassBar;
    NSArray *_sharedLibraryEntries;
    id <IDEDebugSession> _debugSession;
    NSURL *_URL;
}

+ (void)showPopUpAtPoint:(struct CGPoint)arg1 relativeToView:(id)arg2 debugSession:(id)arg3 executableURL:(id)arg4;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
@property(retain) id <IDEDebugSession> debugSession; // @synthesize debugSession=_debugSession;
@property(retain) NSArray *sharedLibraryEntries; // @synthesize sharedLibraryEntries=_sharedLibraryEntries;
- (void).cxx_destruct;
- (void)copy:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)_handleCodeModulesChanged:(id)arg1;
- (void)_handleDebugSessionStateChanged:(id)arg1;
- (void)_cleanUpAfterClosingPopUpWindow;
- (void)done:(id)arg1;
- (void)_showPopUpAtPoint:(struct CGPoint)arg1 relativeToView:(id)arg2;
- (void)_setupGlassBar;
- (void)loadView;
- (id)_initWithDebugSession:(id)arg1 executableURL:(id)arg2;

@end
