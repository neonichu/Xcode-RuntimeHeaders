//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalyticsClient/DVTServicesJSONSerialization-Protocol.h>

@class NSArray, NSString;

@interface DVTAnalyticsCrashPointTimeDistribution : NSObject <DVTServicesJSONSerialization>
{
    NSArray *_timeSeriesData;
}

@property(readonly) NSArray *timeSeriesData; // @synthesize timeSeriesData=_timeSeriesData;
- (void).cxx_destruct;
- (id)JSONRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

