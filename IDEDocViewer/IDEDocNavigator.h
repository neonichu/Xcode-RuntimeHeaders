//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDENavigator.h>

@interface IDEDocNavigator : IDENavigator
{
    id _selectedItem;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(retain) id selectedItem; // @synthesize selectedItem=_selectedItem;
- (void).cxx_destruct;
- (void)focusSearchField;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)updateWithURL:(id)arg1 node:(id)arg2 webView:(id)arg3;
- (id)idedocnavigator_identifier;
- (id)contextMenuSelectedNavItems;
- (id)domainIdentifier;

@end

