/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderCocoaIntegration/IBNSStoryboardAbstractTriggeredSegue.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface IBNSStoryboardCustomSegue : IBNSStoryboardAbstractTriggeredSegue <NSCoding>
{
    NSString *_customSegueClassName;
    NSString *_customSegueClassModuleProvider;
}

+ (id)classIdentifier;
+ (id)ibKeyPathsAcceptingModuleNameBackfill;
@property(copy) NSString *customSegueClassModuleProvider; // @synthesize customSegueClassModuleProvider=_customSegueClassModuleProvider;
@property(copy) NSString *customSegueClassName; // @synthesize customSegueClassName=_customSegueClassName;
- (void).cxx_destruct;
- (void)copyInstanceStateToClone:(id)arg1 withContext:(id)arg2;
- (id)instantiateSegueTemplate;
- (id)badgeImage;
- (void)setCustomSegueFormattedClassSymbol:(id)arg1;
- (id)customSegueFormattedClassSymbol;
- (BOOL)isPrototypeFor:(id)arg1;
- (BOOL)isEqualToPrototype:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
