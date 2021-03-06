//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTAppIDFeatures, DVTDelayedInvocation, DVTObservingToken, DVTStackBacktrace, IDEProvisionableManager, IDEWorkspace, NSArray, NSString;
@protocol IDEProvisionable, IDEProvisioningBasicTeam, IDEProvisioningSigningSelectionDataSource;

@interface IDEAppIDFeatureCoordinator : NSObject <DVTInvalidation>
{
    DVTAppIDFeatures *_appIDFeatures;
    IDEWorkspace *_workspace;
    id <IDEProvisionable> _provisionable;
    IDEProvisionableManager *_provisionableManager;
    id <IDEProvisioningSigningSelectionDataSource> _dataSource;
    DVTDelayedInvocation *_delayedNotification;
    DVTObservingToken *_provisioningProfileObserver;
}

+ (id)keyPathsForValuesAffectingTeam;
+ (id)keyPathsForValuesAffectingProvisioningStyle;
+ (id)keyPathsForValuesAffectingErrors;
+ (id)keyPathsForValuesAffectingCommunicatingWithPortal;
+ (void)initialize;
@property(retain, nonatomic) DVTObservingToken *provisioningProfileObserver; // @synthesize provisioningProfileObserver=_provisioningProfileObserver;
@property(retain, nonatomic) DVTDelayedInvocation *delayedNotification; // @synthesize delayedNotification=_delayedNotification;
@property(retain, nonatomic) id <IDEProvisioningSigningSelectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) IDEProvisionableManager *provisionableManager; // @synthesize provisionableManager=_provisionableManager;
@property(retain, nonatomic) id <IDEProvisionable> provisionable; // @synthesize provisionable=_provisionable;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain, nonatomic) DVTAppIDFeatures *appIDFeatures; // @synthesize appIDFeatures=_appIDFeatures;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> team;
@property(readonly, nonatomic) long long provisioningStyle;
@property(readonly, nonatomic) NSArray *errors;
@property(readonly, nonatomic, getter=isCommunicatingWithPortal) BOOL communicatingWithPortal;
- (BOOL)allowsFeatures:(id)arg1 missingFeatures:(id *)arg2;
- (void)noteAppIDFeaturesChanged;
- (id)_provisioningProfileForBasicProfile:(id)arg1;
- (void)_profileChanged:(id)arg1;
- (void)_updateDataSource;
- (void)_setUpObservations;
- (id)initWithProvisionable:(id)arg1 workspace:(id)arg2;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

