/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "NSTextFieldDelegate-Protocol.h"

@class IDELogBreakpointAction, NSString;

@interface IDELogBreakpointActionEditor : NSViewController <NSTextFieldDelegate>
{
    IDELogBreakpointAction *_action;
}

- (void).cxx_destruct;
- (id)initWithAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
