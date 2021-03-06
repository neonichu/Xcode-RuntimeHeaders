//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogSection.h>

@class NSFileHandle, NSMutableArray;

@interface IDECommandLineBuildLog : IDEActivityLogSection
{
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    NSMutableArray *_failedSections;
    long long _verbosity;
    NSMutableArray *_sectionsWithAnalyzerIssues;
}

+ (Class)logRecorderClass;
@property(retain) NSMutableArray *sectionsWithAnalyzerIssues; // @synthesize sectionsWithAnalyzerIssues=_sectionsWithAnalyzerIssues;
@property(retain) NSMutableArray *failedSections; // @synthesize failedSections=_failedSections;
@property long long verbosity; // @synthesize verbosity=_verbosity;
@property(retain) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(retain) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initLogWithTitle:(id)arg1 standardOutput:(id)arg2 standardError:(id)arg3;
- (id)initLogWithTitle:(id)arg1 standardOutput:(id)arg2 standardError:(id)arg3 verbosity:(long long)arg4;
- (id)initLogWithTitle:(id)arg1;

@end

