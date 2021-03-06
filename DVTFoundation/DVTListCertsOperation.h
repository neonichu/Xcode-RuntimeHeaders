//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTTeamOperationBase.h>

#import <DVTFoundation/DVTCertificateRecordVendor-Protocol.h>

@class DVTDispatchLock, NSSet;

@interface DVTListCertsOperation : DVTTeamOperationBase <DVTCertificateRecordVendor>
{
    DVTDispatchLock *_certificateSerialNumbersLock;
    NSSet *_certificateSerialNumbers;
}

+ (id)_operationWithSingleTeamToken:(id)arg1 andPlatform:(id)arg2;
- (void).cxx_destruct;
- (id)certificateRecordsWithContext:(id)arg1;
- (void)_extractSerialNumbersFromResponseDictionaries;
- (id)init;

@end

