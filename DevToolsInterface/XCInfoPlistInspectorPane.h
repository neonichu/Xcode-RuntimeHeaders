//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCPropertiesInspectorPaneModule.h>

@class NSTextView;

@interface XCInfoPlistInspectorPane : XCPropertiesInspectorPaneModule
{
    NSTextView *_infoTextView;
}

+ (BOOL)canInspectItems:(id)arg1;
- (BOOL)multipleItemsSelected;
- (void)currentInspectedItemsChanged:(id)arg1;
- (void)viewDidLoad;

@end

