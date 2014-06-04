/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEDebugBarContentProvider.h"

@class DBGAppKitDebuggingAddition, DVTGradientImagePopUpButton, DVTObservingToken, NSMenuItem;

@interface DBGAppKitDebugBarContentProvider : IDEDebugBarContentProvider
{
    DVTObservingToken *_debuggingAdditionsObservation;
    DVTGradientImagePopUpButton *_viewDebuggingOptionsPopUpButton;
    NSMenuItem *_showFramesOfAllViewsItem;
    NSMenuItem *_showAlignmentRectsOfAllViewsItem;
    NSMenuItem *_flashDrawingOfAllViewsItem;
    NSMenuItem *_showResponsiveScrollingStatusOfAllViewsItem;
    DBGAppKitDebuggingAddition *_currentAppKitDebuggingAddition;
}

@property(retain) DBGAppKitDebuggingAddition *currentAppKitDebuggingAddition; // @synthesize currentAppKitDebuggingAddition=_currentAppKitDebuggingAddition;
- (void).cxx_destruct;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)_useDebuggingAddition:(id)arg1;
- (void)wasAttachedToDebugBar:(id)arg1;
- (void)currentDebugSessionStateDidChange;
- (id)init;

@end
