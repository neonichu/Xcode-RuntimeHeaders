//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSRegularExpression;

@interface XCBuildCommandOutputRegexParseRule : NSObject
{
    TSRegularExpression *_regex;
    int _actionCode;
}

+ (id)buildCommandOutputRegexParseRulesFromPListArrays:(id)arg1 outerKeyNameForExceptions:(id)arg2 innerKeyNameForExceptions:(id)arg3;
- (id)description;
- (BOOL)matchCommandOutputLineString:(id)arg1 logSectionRecorder:(id)arg2;
- (void)dealloc;
- (id)initWithRegularExpression:(id)arg1 actionCode:(int)arg2;

@end

