//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IBDeviceSubtypeManager : NSObject
{
    NSArray *_subtypes;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSArray *subtypes; // @synthesize subtypes=_subtypes;
- (void).cxx_destruct;
- (id)deviceSubtypeWithIdentifier:(id)arg1;
- (id)deviceConfigurationsMatchingMemberConfiguration:(id)arg1;
- (id)devicesMatchingIdiom:(id)arg1;
- (id)init;

@end
