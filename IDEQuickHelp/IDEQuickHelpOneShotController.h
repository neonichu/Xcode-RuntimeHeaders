//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEQuickHelp/IDEQuickHelpController.h>

#import <IDEQuickHelp/NSPopoverDelegate-Protocol.h>

@class DVTObservingToken, IDEQuickHelpOneShotWindowContentViewController, NSPopover, NSString;

@interface IDEQuickHelpOneShotController : IDEQuickHelpController <NSPopoverDelegate>
{
    DVTObservingToken *_renderedContentSizeObservingToken;
    NSPopover *_popover;
    IDEQuickHelpOneShotWindowContentViewController *_contentViewController;
}

@property(retain) IDEQuickHelpOneShotWindowContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)popoverDidClose:(id)arg1;
- (void)closeQuickHelp;
- (void)showQuickHelp;
- (void)_contentDidChange:(id)arg1;
- (void)_configurePlaceholderView;
- (void)showPanelAtPoint:(struct CGPoint)arg1 withContentSize:(struct CGSize)arg2;
- (void)_adjustPlaceholderHeight;
- (id)mode;
- (id)contentCreator;
- (id)sourceExpressionWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

