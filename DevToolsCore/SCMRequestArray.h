//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/SCMRequest.h>

@class NSMutableArray;

@interface SCMRequestArray : SCMRequest
{
    NSMutableArray *_requestArray;
}

@property(retain) NSMutableArray *requestArray; // @synthesize requestArray=_requestArray;
- (void)addRequest:(id)arg1;
- (void)subrequestFinished:(id)arg1;

@end

