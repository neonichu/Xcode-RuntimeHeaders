//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBAbstractDocumentEditor, NSArray, NSSet, NSString;
@protocol IBCollection;

@protocol IBSelectionProvider <NSObject>
@property(readonly) NSString *stateSavingIdentifier;
@property(readonly, nonatomic) NSString *selectionProviderSwitcherTitle;
@property(readonly, nonatomic) BOOL onlySupportsDocumentObjectMembers;
@property(nonatomic) __weak IBAbstractDocumentEditor *documentEditor;
- (void)willResignAsSelectionProviderForDocumentEditor:(IBAbstractDocumentEditor *)arg1;
- (void)didBecomeSelectionProviderForDocumentEditor:(IBAbstractDocumentEditor *)arg1;
- (BOOL)documentEditor:(IBAbstractDocumentEditor *)arg1 canSelectMembers:(id <IBCollection>)arg2;
- (void)documentEditor:(IBAbstractDocumentEditor *)arg1 deselectMembers:(NSSet *)arg2;
- (void)documentEditor:(IBAbstractDocumentEditor *)arg1 pullSelection:(NSArray *)arg2;
- (void)documentEditor:(IBAbstractDocumentEditor *)arg1 selectMembers:(NSArray *)arg2 takeFocus:(BOOL)arg3 zoomIfNeeded:(BOOL)arg4;
- (void)registerWithDocumentEditor;
@end

