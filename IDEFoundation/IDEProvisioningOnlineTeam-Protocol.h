//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningTeam-Protocol.h>

@class NSSet, NSString;

@protocol IDEProvisioningOnlineTeam <IDEProvisioningTeam>
@property(readonly) NSSet *passTypeIdentifiers;
@property(readonly) NSSet *merchantIdentifiers;
@property(readonly) NSSet *applicationGroups;
@property(readonly) NSSet *cloudContainers;
@property(readonly) NSSet *developers;
@property(readonly) NSString *type;
@end

