//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSSearchField, NSSegmentedControl, NSString, NSTextField, WVPageFindBackgroundView, WVPageFindWebView;

@interface WVPageFindController : NSObject
{
    NSSegmentedControl *backForwardControl;
    NSSearchField *searchField;
    NSTextField *matchCountField;
    NSButton *doneButton;
    WVPageFindBackgroundView *_bannerView;
    WVPageFindWebView *_webView;
    BOOL isFindBannerVisible;
    unsigned long long _matchCount;
    unsigned long long _previousPasteboardChangeCount;
    NSString *_findString;
}

+ (id)pageFindControllerForWebView:(id)arg1;
@property(copy) NSString *findString; // @synthesize findString=_findString;
@property BOOL isFindBannerVisible; // @synthesize isFindBannerVisible;
@property unsigned long long matchCount; // @synthesize matchCount=_matchCount;
@property(retain) WVPageFindWebView *webView; // @synthesize webView=_webView;
@property(retain) WVPageFindBackgroundView *bannerView; // @synthesize bannerView=_bannerView;
- (void)dismissFindBanner:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)findFromSearchField:(id)arg1;
- (void)findFromNextPreviousControl:(id)arg1;
- (void)clearSearchField:(id)arg1;
- (void)_findPrevious;
- (void)_findNext;
- (void)_findFromSearchField:(id)arg1;
- (void)_findFromNextPreviousControl:(id)arg1;
- (BOOL)_findWithDirection:(BOOL)arg1 caseSensitive:(BOOL)arg2;
- (void)showFindBannerInContainer:(id)arg1;
- (void)_hideFindBanner;
- (void)_showFindBannerInContainer:(id)arg1;
- (struct CGRect)_findBannerWhenVisibleRect;
- (struct CGRect)_findBannerWhenHiddenRect;
- (void)_findPasteBoardChanged:(id)arg1;
- (id)_pasteboardFindString;
- (void)_windowDidBecomeKey:(id)arg1;
- (id)searchField;
- (id)doneButton;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)awakeFromNib;
- (id)_imageForBannerControlWithBaseName:(id)arg1;

@end

