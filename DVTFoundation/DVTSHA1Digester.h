//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDataDigester.h>

@interface DVTSHA1Digester : DVTDataDigester
{
    struct CC_SHA1state_st _ctxt;
}

- (id)digest;
- (void)updateWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;

@end

