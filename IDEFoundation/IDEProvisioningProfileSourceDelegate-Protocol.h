//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class NSSet;
@protocol IDEProvisioningProfileSource;

@protocol IDEProvisioningProfileSourceDelegate <NSObject>
- (void)provisioningProfileSource:(id <IDEProvisioningProfileSource>)arg1 didRemoveProfiles:(NSSet *)arg2;
- (void)provisioningProfileSource:(id <IDEProvisioningProfileSource>)arg1 didAddProfiles:(NSSet *)arg2;
@end

