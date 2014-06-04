/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, DVTStateToken, IDEDMEditorController, NSMutableArray, NSString;

@interface IDEDMSubViewControllerStateManager : NSObject <DVTInvalidation>
{
    DVTStateToken *_token;
    NSMutableArray *_stateIdentifiers;
    IDEDMEditorController *_parent;
}

+ (void)initialize;
@property(retain) DVTStateToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithToken:(id)arg1 parent:(id)arg2;
- (void)_setupStateToken;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
