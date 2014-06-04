/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IBInvalidation-Protocol.h"

@class NSString;

@interface IBInvalidationToken : NSObject <IBInvalidation>
{
    id _callback;
}

+ (id)tokenWithInvalidateTokens:(id)arg1;
+ (id)tokenWithCallback:(id)arg1;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithCallback:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
