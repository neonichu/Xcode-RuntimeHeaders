//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPortalAppID, DVTPortalTeam, NSString;
@protocol DVTProvisioningProfile;

@interface DVTPortalProfile : NSObject
{
    BOOL _creationWaitingForApproval;
    id <DVTProvisioningProfile> _provisioningProfile;
    NSString *_name;
    DVTPortalAppID *_appID;
    DVTPortalTeam *_team;
    NSString *_portalID;
    NSString *_UUID;
}

+ (id)_errorForMemberLacksPermissionToModifyAppIDs:(id)arg1;
+ (id)_errorForMemberLacksPermissionToRemoveError:(id)arg1;
+ (id)_errorForMemberLacksPermissionToCreateError:(id)arg1;
+ (id)_deleteProfileServiceWithTeam:(id)arg1 platform:(id)arg2 profile:(id)arg3;
+ (id)_existingAppIDMatchingBundleID:(id)arg1 requiresExplicitAppID:(BOOL)arg2 candidateAppIDs:(id)arg3;
+ (BOOL)_existingAppIDMatchingBundleID:(id)arg1 requiresExplicitAppID:(BOOL)arg2 team:(id)arg3 platform:(id)arg4 session:(id)arg5 matchingAppID:(id *)arg6 error:(id *)arg7;
+ (BOOL)_requiresExplicitAppIDForFeatures:(id)arg1;
+ (id)_preparedAppIDWithCharacteristics:(id)arg1 session:(id)arg2 error:(id *)arg3;
+ (id)_downloadTeamProfileServiceWithTeam:(id)arg1 platform:(id)arg2 appID:(id)arg3;
+ (id)_requestProfileWithAppID:(id)arg1 type:(id)arg2 team:(id)arg3 platform:(id)arg4 session:(id)arg5 error:(id *)arg6;
+ (id)createProfileWithSession:(id)arg1 characteristics:(id)arg2 error:(id *)arg3;
+ (id)_listProfilesServiceWithTeam:(id)arg1 platform:(id)arg2;
+ (id)profilesWithSession:(id)arg1 team:(id)arg2 platform:(id)arg3 error:(id *)arg4;
@property(copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(copy, nonatomic) NSString *portalID; // @synthesize portalID=_portalID;
@property(retain, nonatomic) DVTPortalTeam *team; // @synthesize team=_team;
@property(retain, nonatomic) DVTPortalAppID *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL creationWaitingForApproval; // @synthesize creationWaitingForApproval=_creationWaitingForApproval;
@property(readonly, nonatomic) id <DVTProvisioningProfile> provisioningProfile; // @synthesize provisioningProfile=_provisioningProfile;
- (void).cxx_destruct;
- (BOOL)removeWithSession:(id)arg1 error:(id *)arg2;
- (id)_platform;
- (id)description;

@end
