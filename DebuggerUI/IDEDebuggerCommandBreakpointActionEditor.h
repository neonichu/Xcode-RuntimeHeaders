//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class IDEDebuggerCommandBreakpointAction, NSTextField;

@interface IDEDebuggerCommandBreakpointActionEditor : NSViewController
{
    IDEDebuggerCommandBreakpointAction *_action;
    NSTextField *_consoleCommandField;
}

- (void).cxx_destruct;
- (void)commandDidChange:(id)arg1;
- (void)awakeFromNib;
- (id)initWithAction:(id)arg1;

@end

