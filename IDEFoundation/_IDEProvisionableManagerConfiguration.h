//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProvisioningSigningSelectionDataSource-Protocol.h>

@class IDEProfileQualification, IDEProvisionableManager, IDEProvisionableStatusEvaluation, IDEProvisioningBasicProfile, IDEProvisioningBasicSigningIdentity, IDEProvisioningUserAction, NSArray, NSError, NSOrderedSet, NSString;
@protocol IDEProvisioningBasicTeam;

@interface _IDEProvisionableManagerConfiguration : NSObject <IDEProvisioningSigningSelectionDataSource>
{
    BOOL _repairBusy;
    BOOL _finishedLoading;
    IDEProvisionableManager *_provisionableManager;
    NSString *_configurationName;
    NSOrderedSet *_provisioningProfiles;
    NSOrderedSet *_ineligibleProvisioningProfiles;
    NSString *_repairBusyReason;
    IDEProvisionableStatusEvaluation *_evaluation;
    IDEProvisioningUserAction *_repairUserAction;
    NSError *_repairError;
}

+ (id)keyPathsForValuesAffectingSupportsRepair;
+ (id)keyPathsForValuesAffectingNeedsRepair;
+ (id)keyPathsForValuesAffectingErrors;
+ (id)configurationWithManager:(id)arg1 configurationName:(id)arg2 evaluation:(id)arg3;
@property(retain, nonatomic) NSError *repairError; // @synthesize repairError=_repairError;
@property(retain, nonatomic) IDEProvisioningUserAction *repairUserAction; // @synthesize repairUserAction=_repairUserAction;
@property(nonatomic) BOOL finishedLoading; // @synthesize finishedLoading=_finishedLoading;
@property(readonly, nonatomic) IDEProvisionableStatusEvaluation *evaluation; // @synthesize evaluation=_evaluation;
@property(retain, nonatomic) NSString *repairBusyReason; // @synthesize repairBusyReason=_repairBusyReason;
@property(nonatomic, getter=isRepairBusy) BOOL repairBusy; // @synthesize repairBusy=_repairBusy;
@property(readonly, nonatomic) NSOrderedSet *ineligibleProvisioningProfiles; // @synthesize ineligibleProvisioningProfiles=_ineligibleProvisioningProfiles;
@property(readonly, nonatomic) NSOrderedSet *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
@property(readonly, nonatomic) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(readonly, nonatomic) IDEProvisionableManager *provisionableManager; // @synthesize provisionableManager=_provisionableManager;
- (void).cxx_destruct;
- (void)_repairCompletedWithError:(id)arg1;
- (void)_repairRequiresUserAction:(id)arg1;
- (void)_waitForRepair:(id)arg1;
- (BOOL)_matchesRepairable:(id)arg1;
- (BOOL)supportsRepair;
@property(readonly, nonatomic) BOOL needsRepair;
@property(readonly, nonatomic) IDEProfileQualification *profileQualification;
- (void)locateEligibleProfiles:(id *)arg1 ineligibleProfiles:(id *)arg2;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> team;
@property(retain, nonatomic) IDEProvisioningBasicProfile *provisioningProfile;
- (id)provisioningProfileIdentifier;
@property(retain, nonatomic) IDEProvisioningBasicSigningIdentity *signingIdentity;
- (id)_userDescriptionForSigningIdentityIdentifier:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *signingIdentities;
@property(readonly) BOOL isSigningIdentityChangeable;
@property(readonly) long long signingStyle;
@property(readonly, getter=isProfileChangeable) BOOL profileChangeable;
@property(readonly) long long profileSupport;
@property(readonly, nonatomic) NSArray *errors;
@property(readonly, nonatomic) BOOL isTeamSelectionRequired;

@end

