//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

#import <IDEInterfaceBuilderCocoaIntegration/NSTableViewDataSource-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/NSTableViewDelegate-Protocol.h>

@class NSArray, NSCharacterSet, NSScrollView, NSString, NSTableView, NSTextField, NSView, NSWindow;

@interface IBCocoaBindingsAutocompletingTextFieldEditor : NSTextView <NSTableViewDelegate, NSTableViewDataSource>
{
    NSWindow *completionWindow;
    NSArray *filteredKeys;
    BOOL completionsListVisible;
    NSTableView *completionsTableView;
    NSView *view;
    NSScrollView *scrollView;
    NSTextField *completionsUnavailableField;
    NSCharacterSet *separatorChars;
    struct CGPoint windowPositionReferencePoint;
}

@property(retain) NSCharacterSet *separatorChars; // @synthesize separatorChars;
- (void).cxx_destruct;
- (void)doubleClick:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)handleKeyDown:(id)arg1;
- (void)didChangeText;
- (void)dismissCompletions;
- (void)acceptCompletionBy:(unsigned long long)arg1;
- (void)displayCompletions;
- (struct _NSRange)rangeForUserCompletion;
- (void)repositionCompletionsWindowIfNeeded;
- (void)positionWindow;
- (struct CGRect)positionedWindowFrameForFrameSize:(struct CGSize)arg1;
- (double)columnWidthForColumnWithIdentifier:(id)arg1;
- (double)widthOfString:(id)arg1 withFont:(id)arg2;
- (id)delegate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

