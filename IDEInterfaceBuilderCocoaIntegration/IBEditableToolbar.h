//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSToolbar.h>

@interface IBEditableToolbar : NSToolbar
{
}

+ (BOOL)_shouldIgnoreItemIdentifier:(id)arg1;
+ (void)makeToolbarEditable:(id)arg1;
- (void)_userSetCurrentItemsToItemIdentifiers:(id)arg1;
- (void)_userResetToDefaultConfiguration;
- (void)_userRemoveItemAtIndex:(long long)arg1;
- (void)_userMoveItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)_userInsertItemWithItemIdentifier:(id)arg1 atIndex:(long long)arg2;
- (void)userDidReconfigure;
- (id)designableCounterpart;
- (void)setDesignableCounterpart:(id)arg1;

@end

