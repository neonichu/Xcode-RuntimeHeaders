//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEProjectItemModel.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface Xcode3PassbookItemModel : IDEProjectItemModel
{
    NSMutableDictionary *_knownPassTypes;
    NSArray *_customPassTypes;
}

@property(retain, nonatomic) NSArray *customPassTypes; // @synthesize customPassTypes=_customPassTypes;
- (void).cxx_destruct;
- (void)_generateKnownPassTypes;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
@property(readonly, nonatomic) NSDictionary *knownPassTypes;
- (void)refreshKnownPassTypesWithWindow:(id)arg1 portalInfoDelegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setCustomPassTypes:(id)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
- (void)targetCoordinatorChanged:(id)arg1;
- (void)readCurrentState;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

