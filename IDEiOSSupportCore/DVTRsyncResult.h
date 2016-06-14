//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DVTRsyncResult : NSObject
{
    long long _returnCode;
    NSString *_stdoutText;
    NSString *_stderrText;
    NSArray *_changedFiles;
}

@property(readonly, nonatomic) NSArray *changedFiles; // @synthesize changedFiles=_changedFiles;
@property(readonly, nonatomic) NSString *stderrText; // @synthesize stderrText=_stderrText;
@property(readonly, nonatomic) NSString *stdoutText; // @synthesize stdoutText=_stdoutText;
@property(readonly, nonatomic) long long returnCode; // @synthesize returnCode=_returnCode;
- (void).cxx_destruct;
- (id)initWithReturnCode:(long long)arg1 stdoutText:(id)arg2 stderrText:(id)arg3 changedFiles:(id)arg4;

@end
