//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsFoundation/DTModelObjectDescription.h>

@interface DTPlugInDescription : DTModelObjectDescription
{
}

- (void)finishConfigurationWithElement:(id)arg1;
- (void)configureWithElement:(id)arg1;
- (BOOL)load:(id *)arg1;
- (BOOL)isLoaded;
- (id)principalInstance;
- (int)scanOrder;
- (id)path;
- (id)bundle;
- (id)requiredPlugInDescriptions;
- (id)extensionPointDescriptions;
- (id)extensionDescriptions;
- (BOOL)preload;
- (void)configureWithXMLDocument:(id)arg1 name:(id)arg2 identifier:(id)arg3 version:(id)arg4 bundle:(id)arg5 path:(id)arg6;
- (void)configureWithBundle:(id)arg1;
- (void)_connectRequiredPlugInsRelationship;
- (id)_requiredPlugInIdentifiers;
- (void)_finishConfigurationWithSelfElement;
- (void)_instantiatePrincipalClassWithName:(id)arg1;
- (id)_plugInXMLFromBundle:(id)arg1;
- (void)willSave;
- (void)awakeFromFetch;
- (BOOL)isLoadable;
- (void)setBundlePath:(id)arg1;
- (id)bundlePath;
- (void)setScanOrder:(int)arg1;
- (void)setPath:(id)arg1;
- (void)setBundle:(id)arg1;

@end

