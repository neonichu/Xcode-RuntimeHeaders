//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTProvisioningProfileManager, DVTSigningCertificateManager;

@interface IDEProvisioningPortal : NSObject
{
    DVTSigningCertificateManager *_signingCertificateManager;
    DVTProvisioningProfileManager *_provisioningProfileManager;
}

+ (id)_errorForNoContainerTypeWithPortalKey:(id)arg1;
+ (id)_errorForUnknownFeatureWithPortalKey:(id)arg1;
+ (id)_errorForMissingProfileData;
+ (id)_errorForLackOfMatchingCertificateWithSerialNumber:(id)arg1;
+ (id)_errorForNoCertificateTypeWithOID:(id)arg1;
+ (id)_errorForNoMatchingTeam:(id)arg1;
+ (id)concurrentQueue;
+ (id)portalWithSigningCertificateManager:(id)arg1 provisioningProfileManager:(id)arg2;
+ (id)defaultPortal;
@property(retain) DVTProvisioningProfileManager *provisioningProfileManager; // @synthesize provisioningProfileManager=_provisioningProfileManager;
@property(retain) DVTSigningCertificateManager *signingCertificateManager; // @synthesize signingCertificateManager=_signingCertificateManager;
- (void).cxx_destruct;
- (id)_portalSubPlatformForDVTPlatformIdentifier:(id)arg1;
- (id)_portalPlatformForDVTPlatformIdentifier:(id)arg1;
- (id)listTeamsAndRolesWithSession:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (id)nameOfTeamWithTeamID:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (id)provisioningDevicesForTeamWithID:(id)arg1 program:(id)arg2 session:(id)arg3 error:(id *)arg4;
- (id)portalTeamForTeam:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (id)devicesForPrograms:(id)arg1 session:(id)arg2 team:(id)arg3 error:(id *)arg4;
- (BOOL)_installProfile:(id)arg1 error:(id *)arg2;
- (id)_profileTypeFromRequirements:(id)arg1 platform:(id)arg2 error:(id *)arg3;
- (id)_containerTypeFromPortalKey:(id)arg1 error:(id *)arg2;
- (id)_featureTypeFromPortalKey:(id)arg1 error:(id *)arg2;
- (id)containerTypesToValuesFromLegacyRequiredFeatures:(id)arg1 error:(id *)arg2;
- (id)featuresToValuesFromLegacyRequiredFeatures:(id)arg1 error:(id *)arg2;
- (id)_characteristicsWithSession:(id)arg1 platform:(id)arg2 team:(id)arg3 requirements:(id)arg4 error:(id *)arg5;
- (BOOL)_createProfileWithSession:(id)arg1 platform:(id)arg2 team:(id)arg3 requirements:(id)arg4 error:(id *)arg5;
- (BOOL)_createProfilesWithRequirements:(id)arg1 session:(id)arg2 platform:(id)arg3 team:(id)arg4 error:(id *)arg5;
- (BOOL)_addDevices:(id)arg1 session:(id)arg2 team:(id)arg3 error:(id *)arg4;
- (id)futureForCreatingProfilesWithRequirements:(id)arg1 platform:(id)arg2 devices:(id)arg3 account:(id)arg4 teamID:(id)arg5 logAspect:(id)arg6;
- (id)portalCertificatesWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 error:(id *)arg4;
- (id)portalCertificateWithMachineID:(id)arg1 session:(id)arg2 team:(id)arg3 type:(id)arg4 error:(id *)arg5;
- (id)_newestCertificateMatchingMemberID:(id)arg1 certificates:(id)arg2;
- (BOOL)_serialNumberOfNewestSigningCertificateWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 serialNumber:(id *)arg4 error:(id *)arg5;
- (BOOL)serialNumberOfNewestSigningCertificateForAccount:(id)arg1 teamID:(id)arg2 certificateOID:(id)arg3 logAspect:(id)arg4 serialNumber:(id *)arg5 error:(id *)arg6;
- (BOOL)_certificateMatchingSerialNumber:(id)arg1 session:(id)arg2 team:(id)arg3 type:(id)arg4 certificate:(id *)arg5 error:(id *)arg6;
- (BOOL)_resetCertificateWithSerialNumber:(id)arg1 session:(id)arg2 team:(id)arg3 type:(id)arg4 error:(id *)arg5;
- (id)resetCertificateWithSerialNumber:(id)arg1 account:(id)arg2 teamID:(id)arg3 certificateOID:(id)arg4 platformIdentifier:(id)arg5 logAspect:(id)arg6;
- (BOOL)_installIdentity:(id)arg1 error:(id *)arg2;
- (id)_createAndInstallCertificateWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 error:(id *)arg4;
- (BOOL)_performSessionWithAccount:(id)arg1 teamID:(id)arg2 certificateOID:(id)arg3 logAspect:(id)arg4 error:(id *)arg5 block:(CDUnknownBlockType)arg6;
- (id)createCertificateForAccount:(id)arg1 teamID:(id)arg2 certificateOID:(id)arg3 platformIdentifier:(id)arg4 logAspect:(id)arg5;
- (id)initWithSigningCertificateManager:(id)arg1 provisioningProfileManager:(id)arg2;
- (id)init;

@end
