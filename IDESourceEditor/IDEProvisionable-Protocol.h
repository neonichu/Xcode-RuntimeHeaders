//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTAppIDFeatures, DVTFilePath, DVTPlatform, IDEProvisioningEntitlementsExpansion, NSDictionary, NSOrderedSet, NSString;
@protocol IDEProvisioningBasicProfile, IDEProvisioningBasicTeam;

@protocol IDEProvisionable <NSObject>
@property(readonly, nonatomic) NSOrderedSet *configurations;
@property(readonly, nonatomic) DVTAppIDFeatures *appIDFeatures;
@property(nonatomic) long long provisioningStyle;
@property(readonly, nonatomic) NSString *name;
- (BOOL)allowSigningWithoutTeamSelectionForConfigurationNamed:(NSString *)arg1;
- (void)noteProvisioningInputsChanged;
- (IDEProvisioningEntitlementsExpansion *)entitlementsExpansionForConfigurationNamed:(NSString *)arg1;
- (NSDictionary *)baseEntitlementsForConfigurationNamed:(NSString *)arg1;
- (DVTFilePath *)entitlementsFilePathForConfigurationNamed:(NSString *)arg1;
- (void)setSigningCertificateIdentifier:(NSString *)arg1 forConfigurationNamed:(NSString *)arg2;
- (NSString *)signingCertificateIdentifierForConfigurationNamed:(NSString *)arg1;
- (void)setProvisioningProfile:(id <IDEProvisioningBasicProfile>)arg1 forConfigurationNamed:(NSString *)arg2;
- (NSString *)provisioningProfileSpecifierForConfigurationNamed:(NSString *)arg1;
- (NSString *)bundleIdentifierForConfigurationNamed:(NSString *)arg1;
- (long long)profileSupportForConfigurationNamed:(NSString *)arg1;
- (DVTPlatform *)platformForConfigurationNamed:(NSString *)arg1;
- (void)setTeam:(id <IDEProvisioningBasicTeam>)arg1 forConfigurationNamed:(NSString *)arg2;
- (id <IDEProvisioningBasicTeam>)teamForConfigurationNamed:(NSString *)arg1;
@end

