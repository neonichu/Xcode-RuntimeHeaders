//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDELocalizationStreamConsumer-Protocol.h>
#import <IDEFoundation/IDELocalizationStreamPublisher-Protocol.h>

@class NSString;
@protocol DVTCancellable, IDELocalizationStreamConsumer;

@interface IDELocalizationStream : NSObject <IDELocalizationStreamPublisher, IDELocalizationStreamConsumer>
{
    BOOL _wasStarted;
    id <IDELocalizationStreamConsumer> _consumer;
    id <DVTCancellable> _subscription;
}

+ (void)initialize;
+ (id)streamWithError:(id)arg1;
+ (id)streamWithObjects:(id)arg1;
+ (id)emptyStream;
+ (id)withOnNextBlock:(CDUnknownBlockType)arg1 onErrorBlock:(CDUnknownBlockType)arg2 onCompletedBlock:(CDUnknownBlockType)arg3;
@property BOOL wasStarted; // @synthesize wasStarted=_wasStarted;
@property(retain) id <DVTCancellable> subscription; // @synthesize subscription=_subscription;
@property(retain) id <IDELocalizationStreamConsumer> consumer; // @synthesize consumer=_consumer;
- (void).cxx_destruct;
- (id)subscribe:(id)arg1;
- (void)onCompleted;
- (void)onError:(id)arg1;
- (void)onNext:(id)arg1;
- (id)deleteItemsWorkForPathStrings;
- (id)createDirectoriesWorkForPathStrings;
- (id)systemTaskWorkForContexts;
- (id)writeDataWorkForContexts;
- (id)collectInWorkContext:(id)arg1;
- (id)join;
- (id)asyncMap:(CDUnknownBlockType)arg1;
- (id)map:(CDUnknownBlockType)arg1;
- (id)disperse;
- (id)collectInContext:(id)arg1 forArrayKey:(id)arg2;
- (id)collectInArray;
- (id)collectIn:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)filter:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

