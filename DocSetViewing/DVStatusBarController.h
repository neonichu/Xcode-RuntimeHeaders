//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVMainController, DVPathControl, NSProgressIndicator, NSTabView, NSTextField;

@interface DVStatusBarController : NSObject
{
    NSTabView *_tabView;
    DVPathControl *_pathControl;
    NSTextField *_urlTextField;
    NSProgressIndicator *_progressBar;
    DVMainController *m_mainController;
}

@property(nonatomic) DVMainController *mainController; // @synthesize mainController=m_mainController;
@property(retain, nonatomic) DVPathControl *pathControl; // @synthesize pathControl=_pathControl;
@property(retain, nonatomic) NSTabView *tabView; // @synthesize tabView=_tabView;
- (id)_pathControlNodesForURL:(id)arg1 inWebView:(id)arg2 appendDocumentTitleNode:(BOOL)arg3;
- (id)_pathComponentCellWithString:(id)arg1 url:(id)arg2 representedObject:(id)arg3;
- (id)_remoteOrLocalImage:(BOOL)arg1;
- (void)updateForURL:(id)arg1 inWebView:(id)arg2 appendDocumentTitleNode:(BOOL)arg3;
- (void)_webViewMouseDidMoveOverElement:(id)arg1;
- (void)webViewDidFinishLoading:(id)arg1;
- (void)webViewDidBeginLoading:(id)arg1;
- (void)_selectURLAndProgressIndicatorTabViewItem;
- (void)_selectPathControlTabViewItem;
- (id)cachedProgressBar;
- (void)setDocumentNodePathStatus:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (id)init;

@end

