//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString;

@interface IDEBatchFindFileLocator : NSObject
{
    NSString *_path;
    NSPredicate *_predicate;
}

@property(readonly) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)locationOperationForWorkspace:(id)arg1 withResultsBlock:(CDUnknownBlockType)arg2;
@property(readonly) BOOL requiresMainThread;
- (id)initWithPath:(id)arg1 andPredicate:(id)arg2;

@end

