//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerMTLSupport/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol DYPGeniusResultsFinderDelegate <NSObject>
- (NSString *)categoryKeyForCategory:(int)arg1;
- (id)resultWithSourceURL:(NSURL *)arg1 label:(NSString *)arg2 lineNumber:(unsigned long long)arg3 representsLibrary:(BOOL)arg4;
@end

