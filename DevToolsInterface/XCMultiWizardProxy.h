//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/PBXWizardProxies-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface XCMultiWizardProxy : NSObject <PBXWizardProxies>
{
    NSString *_categorizedWizardName;
    NSMutableDictionary *_proxies;
    NSDictionary *_templateMap;
    NSArray *_checkBoxes;
    NSArray *_popupMenu;
    NSString *_optionsLabelString;
    NSString *_selectedProxy;
}

+ (id)proxyWithPath:(id)arg1 categorizedWizardName:(id)arg2;
- (id)icon;
- (id)instantiateWizardWithParent:(id)arg1;
- (id)wizardDescription;
- (id)selectedProxy;
- (void)selectProxy:(id)arg1;
- (id)optionsLabelString;
- (id)titleOfPopupMenuItem:(long long)arg1;
- (id)keyOfPopupMenuItem:(long long)arg1;
- (id)_popupMenuItem:(long long)arg1 valueForKey:(id)arg2;
- (id)enableRuleOfCheckbox:(long long)arg1;
- (id)titleOfCheckbox:(long long)arg1;
- (id)keyOfCheckbox:(long long)arg1;
- (id)_checkbox:(long long)arg1 valueForKey:(id)arg2;
- (id)categorizedWizardNames;
- (void)addChildProxy:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 categorizedWizardName:(id)arg2;

@end

