//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerFoundation/DVTInvalidation-Protocol.h>
#import <GPUDebuggerFoundation/DYPOutlineItem-Protocol.h>
#import <GPUDebuggerFoundation/IDEDebugNavigableModel-Protocol.h>
#import <GPUDebuggerFoundation/NSCopying-Protocol.h>

@class DVTStackBacktrace, GPUDebuggerController, GPUGlobalStateManager, GPUTraceModelFactory, IDELaunchSession, NSMutableArray, NSMutableSet, NSSet, NSString, NSURL;

@interface GPUTraceOutlineItem : NSObject <IDEDebugNavigableModel, DVTInvalidation, NSCopying, DYPOutlineItem>
{
    NSString *_label;
    NSMutableArray *_children;
    shared_ptr_2d3f6817 _decodedFunction;
    GPUTraceOutlineItem *_parent;
    GPUDebuggerController *_controller;
    NSMutableSet *_filterStrings;
    NSString *_UUID;
    NSString *_identifier;
}

+ (void)initialize;
+ (id)sharedUUIDString;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak GPUTraceOutlineItem *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak GPUDebuggerController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)releaseRealizedResources;
- (id)childAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfChildren;
@property(readonly, nonatomic) struct Function *decodedFunction;
- (void)setDecodedFunctionPointer:(shared_ptr_2d3f6817)arg1;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)_createUUID;
- (id)UUIDSection;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSSet *filterStrings; // @synthesize filterStrings=_filterStrings;
- (void)generateFilterStrings;
@property(readonly, nonatomic) GPUTraceModelFactory *modelFactory;
@property(readonly, nonatomic) NSURL *captureArchiveURL;
@property(readonly, nonatomic) GPUGlobalStateManager *globalStateManager;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)primitiveInvalidate;
- (void)sortChildren;
- (void)invalidateChildren;
- (id)initWithController:(id)arg1 parent:(id)arg2 identifier:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

