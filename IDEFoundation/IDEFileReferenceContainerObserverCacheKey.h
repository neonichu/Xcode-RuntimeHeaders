//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEContainer, NSSet, NSString;

@interface IDEFileReferenceContainerObserverCacheKey : NSObject
{
    IDEContainer *_container;
    NSString *_identifier;
    NSSet *_types;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithContainerObserver:(id)arg1;
- (id)initWithContainer:(id)arg1 types:(id)arg2 identifier:(id)arg3;

@end

