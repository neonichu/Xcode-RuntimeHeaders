//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTPortalPassType : NSObject
{
    NSString *_portalID;
    NSString *_name;
    NSString *_identifier;
}

+ (id)_listServiceForTeam:(id)arg1 platform:(id)arg2;
+ (id)passTypesForSession:(id)arg1 team:(id)arg2 membership:(id)arg3 error:(id *)arg4;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *portalID; // @synthesize portalID=_portalID;
- (void).cxx_destruct;
- (id)description;

@end

