//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>
#import <IDEInterfaceBuilderKit/IBImageButtonDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/NSMenuDelegate-Protocol.h>

@class DVTStackBacktrace, IBIdiom, IBInspectorViewController, NSArray, NSSet, NSString, NSXMLElement;

@interface IBPerConfigurationInspectorPropertyTemplate : NSObject <NSMenuDelegate, DVTInvalidation, IBImageButtonDelegate>
{
    IBInspectorViewController *_inspector;
    NSSet *_currentConfigurations;
    NSString *_inspectedProperty;
    NSString *_accessibilityTitle;
    BOOL _showConfigurationOptions;
    NSArray *_currentSlivers;
    NSXMLElement *_originalProperty;
    NSXMLElement *_originalSliver;
    NSString *_identifier;
    IBIdiom *_idiom;
}

+ (id)templateWithElement:(id)arg1 inspector:(id)arg2;
+ (void)initialize;
@property(retain) IBIdiom *idiom; // @synthesize idiom=_idiom;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)turnOnValueForConfiguration:(id)arg1;
- (BOOL)doesObjectHaveInspectedValue:(id)arg1 inConfiguration:(id)arg2;
- (void)removeValueForConfiguration:(id)arg1;
- (id)attributedSliverTitleForConfiguration:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)accessoryViewForConfiguration:(id)arg1;
- (id)accessibilityTitleForConfiguration:(id)arg1;
- (void)imageButton:(id)arg1 willShowMenu:(id)arg2;
- (id)headerMenuItemForConfigurationMenu;
- (BOOL)replaceCurrentElementsIfNeededForObjects:(id)arg1;
- (id)configurationsCoveredByObjects:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithElement:(id)arg1 inspector:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

