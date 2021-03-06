//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSString;

@interface XCSPortalTeam : XCSObject
{
}

+ (id)portalTeamWithTeamID:(id)arg1 teamName:(id)arg2 identityCertificateID:(id)arg3 enabledDeviceIDs:(id)arg4 validationErrors:(id *)arg5;
- (BOOL)_validateTeamID:(id)arg1 teamName:(id)arg2 identityCertificateID:(id)arg3 enabledDeviceIDs:(id)arg4 validationErrors:(id *)arg5;
- (id)_initWithTeamID:(id)arg1 teamName:(id)arg2 identityCertificateID:(id)arg3 enabledDeviceIDs:(id)arg4 validationErrors:(id *)arg5;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 validationErrors:(id *)arg2;

// Remaining properties
@property(copy, nonatomic) NSArray *enabledDeviceIDs; // @dynamic enabledDeviceIDs;
@property(copy, nonatomic) NSString *identityCertificateID; // @dynamic identityCertificateID;
@property(copy, nonatomic) NSString *teamID; // @dynamic teamID;
@property(copy, nonatomic) NSString *teamName; // @dynamic teamName;

@end

