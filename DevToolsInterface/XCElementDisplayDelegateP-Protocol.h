//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/NSObject-Protocol.h>

@class NSCursor, NSEvent, NSFont, NSObject, NSString, NSView, XCElementSpacings;

@protocol XCElementDisplayDelegateP <NSObject>
- (void)clearViewForDisplayer:(struct NSObject *)arg1;
- (NSString *)defaultDataBinding;
- (NSObject *)dataDelegateDataForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 setDataDelegateData:(NSObject *)arg2;
- (BOOL)storesDataForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 swapView:(NSView *)arg2;
- (NSView *)viewForDisplayer:(struct NSObject *)arg1;
- (void)removeFromViewForDisplayer:(struct NSObject *)arg1;
- (void)addToViewForDisplayer:(struct NSObject *)arg1;
- (NSObject *)configurationForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 setConfiguration:(NSObject *)arg2;
- (void)displayer:(struct NSObject *)arg1 performDelegateAction:(id)arg2;
- (void)installLocalDataDelegateForDisplayer:(struct NSObject *)arg1;
- (struct CGSize)sizeProposalForDisplayer:(struct NSObject *)arg1;
- (void)abortEditingForDisplayer:(struct NSObject *)arg1;
- (void)discardEditingForDisplayer:(struct NSObject *)arg1;
- (BOOL)commitEditingForDisplayer:(struct NSObject *)arg1;
- (BOOL)isEditingForDisplayer:(struct NSObject *)arg1;
- (BOOL)isInEditingStateForDisplayer:(struct NSObject *)arg1;
- (BOOL)displayer:(struct NSObject *)arg1 isTabCandidateWithExtendedTabbing:(BOOL)arg2;
- (void)displayer:(struct NSObject *)arg1 finishPositioningInContentFrame:(struct CGRect)arg2;
- (void)dataChangedForDisplayer:(struct NSObject *)arg1;
- (void)variableStateChangedForDisplayer:(struct NSObject *)arg1;
- (struct CGSize)sizeToFitForDisplayer:(struct NSObject *)arg1;
- (NSCursor *)displayer:(struct NSObject *)arg1 cursorAt:(struct CGPoint)arg2;
- (void)selectTabCandidateForDisplayer:(struct NSObject *)arg1;
- (BOOL)displayer:(struct NSObject *)arg1 validMouseDownLoc:(struct CGPoint)arg2 inFrame:(struct CGRect)arg3;
- (BOOL)displayer:(struct NSObject *)arg1 handleMouseDownOnElement:(struct NSObject *)arg2 event:(NSEvent *)arg3;
- (void)drawFocusRingForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 drawBackground:(struct CGRect)arg2 forFrame:(struct CGRect)arg3;
- (void)displayer:(struct NSObject *)arg1 drawForeground:(struct CGRect)arg2 forFrame:(struct CGRect)arg3;
- (void)displayer:(struct NSObject *)arg1 installWithConfiguration:(NSObject *)arg2 useLocalData:(BOOL)arg3 initialData:(NSObject *)arg4;
- (XCElementSpacings *)spacings;
- (void)setSpacings:(XCElementSpacings *)arg1;
- (void)configureForControlSize:(unsigned long long)arg1 font:(NSFont *)arg2;
@end

