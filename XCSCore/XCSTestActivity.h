//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSDate, NSString, XCSIntegrationAsset;

@interface XCSTestActivity : XCSObject
{
    NSString *_title;
    NSString *_UUID;
    NSDate *_start;
    NSDate *_finish;
    XCSIntegrationAsset *_screenshot;
    XCSIntegrationAsset *_snapshot;
    XCSIntegrationAsset *_diagnosticReport;
    NSArray *_subactivities;
}

@property(retain, nonatomic) NSArray *subactivities; // @synthesize subactivities=_subactivities;
@property(retain, nonatomic) XCSIntegrationAsset *diagnosticReport; // @synthesize diagnosticReport=_diagnosticReport;
@property(retain, nonatomic) XCSIntegrationAsset *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) XCSIntegrationAsset *screenshot; // @synthesize screenshot=_screenshot;
@property(retain, nonatomic) NSDate *finish; // @synthesize finish=_finish;
@property(retain, nonatomic) NSDate *start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (BOOL)_validateTitle:(id)arg1 UUID:(id)arg2 start:(id)arg3 finish:(id)arg4 screenshot:(id)arg5 snapshot:(id)arg6 diagnosticReport:(id)arg7 subactivities:(id)arg8 validationErrors:(id *)arg9;
- (id)_initWithTitle:(id)arg1 UUID:(id)arg2 start:(id)arg3 finish:(id)arg4 screenshot:(id)arg5 snapshot:(id)arg6 diagnosticReport:(id)arg7 subactivities:(id)arg8 validationErrors:(id *)arg9;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

@end

