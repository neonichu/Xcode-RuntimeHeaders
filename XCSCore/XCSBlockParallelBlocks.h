//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface XCSBlockParallelBlocks : NSObject
{
    NSMutableDictionary *_tasks;
}

@property(retain, nonatomic) NSMutableDictionary *tasks; // @synthesize tasks=_tasks;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)identifiers;
- (BOOL)stopOnFailureForIdentifier:(id)arg1;
- (CDUnknownBlockType)blockForIdentifier:(id)arg1;
- (void)addBlock:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2 stopOnFailure:(BOOL)arg3;
- (void)addBlock:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;
- (id)init;

@end

