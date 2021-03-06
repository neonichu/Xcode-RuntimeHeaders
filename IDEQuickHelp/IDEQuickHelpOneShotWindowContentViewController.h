//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEQuickHelp/IDEQuickHelpPlaceholderViewDelegate-Protocol.h>

@class IDEQuickHelpController, IDEQuickHelpPlaceholderView, NSString, WebView;

@interface IDEQuickHelpOneShotWindowContentViewController : DVTViewController <IDEQuickHelpPlaceholderViewDelegate>
{
    IDEQuickHelpController *_quickHelpController;
    IDEQuickHelpPlaceholderView *_placeholderView;
    WebView *_webView;
}

+ (id)defaultViewNibName;
@property WebView *webView; // @synthesize webView=_webView;
@property(retain) IDEQuickHelpController *quickHelpController; // @synthesize quickHelpController=_quickHelpController;
@property(retain) IDEQuickHelpPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void).cxx_destruct;
- (void)placeholderView:(id)arg1 clickSearchButton:(id)arg2;
- (void)primitiveInvalidate;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (void)handleLinkClickWithActionInformation:(id)arg1;
- (void)loadWebViewWithHTML:(id)arg1;
- (CDStruct_d2b197d1)contentInset;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)_configureWebView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

