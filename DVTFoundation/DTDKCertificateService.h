//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DTDKTeamBasedService.h>

@interface DTDKCertificateService : DTDKTeamBasedService
{
}

+ (id)_createRequestDictionaryForCertificateType:(unsigned long long)arg1 team:(id)arg2 andPlatform:(id)arg3;
+ (id)_createRequestDictionaryForTeam:(id)arg1 andPlatform:(id)arg2;
- (void)_success;
- (void)_failure:(id)arg1;
@property(readonly) unsigned long long certificateType;

@end

