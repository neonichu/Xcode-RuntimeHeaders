/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTServiceKit/DVTRequestHandler.h>

@interface _DVTBlockBasedRequestHandler : DVTRequestHandler
{
    id _requestHandlerBlock;
}

@property(readonly, copy) id requestHandlerBlock; // @synthesize requestHandlerBlock=_requestHandlerBlock;
- (void).cxx_destruct;
- (id)handleRequest:(id)arg1;
- (id)initWithBlock:(id)arg1;

@end
