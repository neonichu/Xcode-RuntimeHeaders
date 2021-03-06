//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@class NSArray, NSDictionary, NSMutableDictionary;
@protocol IDEFlightChecking;

@interface Xcode3PassbookItemModel : IDEProjectItemModel
{
    NSMutableDictionary *_knownPassTypes;
    id <IDEFlightChecking> _entitlementsFlightCheck;
    NSArray *_customPassTypes;
}

@property(retain, nonatomic) NSArray *customPassTypes; // @synthesize customPassTypes=_customPassTypes;
- (void).cxx_destruct;
- (void)_generateKnownPassTypesWithProvisioningPassTypes:(id)arg1;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (id)entitlementsFlightCheck;
- (id)_passTypesForEntitlementsFile;
- (id)_wildcardEntitlement;
@property(readonly, nonatomic) NSDictionary *knownPassTypes;
- (void)refreshKnownPassTypesWithPortalInfoDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setCustomPassTypes:(id)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
- (void)targetCoordinatorsChanged:(id)arg1;
- (void)readCurrentState;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

