//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXTargetInspectorPaneModule.h>

@class NSTextField;

@interface PBXTargetInspectorPane : PBXTargetInspectorPaneModule
{
    NSTextField *_productTypeTextField;
}

+ (id)alternateLabel;
- (void)_projectItemDidChange:(id)arg1;
- (void)_buildSettingsDictionaryDidChange:(id)arg1;
- (void)currentInspectedItemsChanged:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

