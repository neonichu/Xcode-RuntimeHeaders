/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXBuildStyle.h>

#import "XCCompatibilityChecking-Protocol.h"
#import "XCFileSystemWatcherRegisteredObject-Protocol.h"

@class NSDate, NSMutableArray, NSSet, NSString, PBXBuildSettingsDictionary, PBXFileReference, XCFileSystemNode;

@interface XCBuildConfiguration : PBXBuildStyle <XCCompatibilityChecking, XCFileSystemWatcherRegisteredObject>
{
    id _owner;
    BOOL _isHidden;
    PBXFileReference *_baseConfigurationReference;
    XCBuildConfiguration *_cachedBaseConfiguration;
    XCFileSystemNode *_cachedBaseConfigurationFileNode;
    PBXBuildSettingsDictionary *_cachedBaseConfigurationProperties;
    NSMutableArray *_cachedBaseConfigurationLoadErrors;
    NSDate *_baseConfigurationLastParsedTime;
    NSSet *_watchedBaseConfigurationFiles;
}

+ (id)archivableWeakRelationshipsForPListArchiver:(id)arg1;
+ (id)archivableRelationships;
+ (BOOL)fileReference:(id)arg1 isValidBaseConfigurationFile:(id *)arg2;
+ (id)buildConfigurationWithName:(id)arg1 settings:(id)arg2;
- (void)findFeaturesInUseAndAddToSet:(id)arg1 usingPathPrefix:(id)arg2;
- (void)_findBuildSettingNamed:(id)arg1 inSettingsDict:(id)arg2 andAddToSet:(id)arg3 forFeature:(id)arg4 usingPathPrefix:(id)arg5;
- (void)_findSettingsForConditionFlavor:(id)arg1 inSettingsDict:(id)arg2 andAddToSet:(id)arg3 forFeature:(id)arg4 usingPathPrefix:(id)arg5;
- (void)convertGccVersionToBuildRuleForSetting:(id)arg1;
- (void)removePrefixAndSuffixFromSetting:(id)arg1;
- (void)_unarchiverDidFinishUnarchiving:(id)arg1;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (void)fileSystemWatcher:(id)arg1 notedChangeAtPath:(id)arg2 scanRecursively:(BOOL)arg3;
- (void)fileSystemWatcherWillClose:(id)arg1;
- (void)referenceWillBeRemoved:(id)arg1;
- (void)invalidateCaches;
- (void)baseConfigurationReferenceChangedForConfigurationNamed:(id)arg1;
- (id)baseBuildConfigurationReferenceLoadErrors;
- (id)parseBaseBuildConfigurationReferenceReturningErrors:(id *)arg1;
- (void)_addToCachedBaseConfigurationLoadErrors:(id)arg1;
- (void)setBaseConfigurationReference:(id)arg1;
- (id)baseConfigurationReference;
- (void)_baseConfigurationFilesChanged;
- (void)_stopWatchingBaseConfigurationFiles;
- (void)_startWatchingBaseConfigurationFiles;
- (BOOL)buildSettingsDictionaryShouldExtractQuotedBuildSettingsWhenSplitting:(id)arg1;
- (void)buildSettingsDictionary:(id)arg1 didSetValue:(id)arg2 withOperation:(int)arg3 forKeyPath:(id)arg4;
- (id)buildSettingsDictionary:(id)arg1 willSetValue:(id)arg2 withOperation:(int)arg3 forKeyPath:(id)arg4;
- (id)flattenedBuildSettings;
- (id)buildSettingDictionariesAndGetErrors:(id *)arg1;
- (id)baseBuildConfiguration;
- (BOOL)couldBeActive;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (id)inspectorDisplayName;
- (id)project;
- (id)container;
- (void)_setOwner:(id)arg1;
- (id)owner;
- (void)appendSpotlightDescriptionToString:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)setAppleScriptConfigurationSettingsFile:(id)arg1;
- (id)appleScriptConfigurationSettingsFile;
- (id)buildConfigurationType;
- (id)appleScriptFlattenedBuildSettings;
- (id)appleScriptBaseBuildSettings;
- (id)appleScriptBuildSettings;
- (id)objectSpecifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
