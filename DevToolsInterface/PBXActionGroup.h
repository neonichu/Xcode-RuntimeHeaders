//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface PBXActionGroup : NSObject <NSCopying>
{
    NSString *_name;
    NSArray *_actions;
}

- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)actions;
- (id)name;
- (void)dealloc;
- (id)initName:(id)arg1 actions:(id)arg2;

@end

