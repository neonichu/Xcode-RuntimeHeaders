//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBOutlineViewController, IBOutlineViewControllerItem;
@protocol IBHybridStructureSelectionProvider;

@protocol IBOutlineViewControllerDelegate <NSObject>
- (id <IBHybridStructureSelectionProvider>)selectionProviderForOutlineViewController:(IBOutlineViewController *)arg1;
- (void)outlineViewController:(IBOutlineViewController *)arg1 didSelectAutolayoutIssuesItemForObject:(id)arg2;

@optional
- (void)outlineViewController:(IBOutlineViewController *)arg1 didSelectVirtualSelectableItem:(IBOutlineViewControllerItem *)arg2;
@end

