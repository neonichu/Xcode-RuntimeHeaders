//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, XCSChangedNumber, XCSChangedObject, XCSChangedString;

@interface XCSConfigurationChanges : XCSObject
{
}

@property(readonly) NSArray *descriptions;
- (id)textForCleanType:(unsigned long long)arg1;
- (id)textForScheduleType:(unsigned long long)arg1 interval:(unsigned long long)arg2;
- (id)textForBuildConfiguration:(id)arg1;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithBuildConfiguration:(id)arg1 buildEnvironmentVariables:(id)arg2 builtFromClean:(id)arg3 codeCoveragePreference:(id)arg4 deviceSpecification:(id)arg5 exportsProductFromArchive:(id)arg6 overrideToolchain:(id)arg7 performsAnalyzeAction:(id)arg8 performsArchiveAction:(id)arg9 performsTestAction:(id)arg10 periodicScheduleInterval:(id)arg11 scheduleType:(id)arg12 schemeName:(id)arg13 sourceControlBlueprint:(id)arg14 triggers:(id)arg15 validationErrors:(id *)arg16;

// Remaining properties
@property(retain, nonatomic) XCSChangedString *buildConfiguration; // @dynamic buildConfiguration;
@property(retain, nonatomic) XCSChangedObject *buildEnvironmentVariables; // @dynamic buildEnvironmentVariables;
@property(retain, nonatomic) XCSChangedNumber *builtFromClean; // @dynamic builtFromClean;
@property(retain, nonatomic) XCSChangedNumber *codeCoveragePreference; // @dynamic codeCoveragePreference;
@property(retain, nonatomic) XCSChangedObject *deviceSpecification; // @dynamic deviceSpecification;
@property(retain, nonatomic) XCSChangedNumber *exportsProductFromArchive; // @dynamic exportsProductFromArchive;
@property(retain, nonatomic) XCSChangedObject *overrideToolchain; // @dynamic overrideToolchain;
@property(retain, nonatomic) XCSChangedNumber *performsAnalyzeAction; // @dynamic performsAnalyzeAction;
@property(retain, nonatomic) XCSChangedNumber *performsArchiveAction; // @dynamic performsArchiveAction;
@property(retain, nonatomic) XCSChangedNumber *performsTestAction; // @dynamic performsTestAction;
@property(retain, nonatomic) XCSChangedNumber *periodicScheduleInterval; // @dynamic periodicScheduleInterval;
@property(retain, nonatomic) XCSChangedNumber *scheduleType; // @dynamic scheduleType;
@property(retain, nonatomic) XCSChangedString *schemeName; // @dynamic schemeName;
@property(retain, nonatomic) XCSChangedObject *sourceControlBlueprint; // @dynamic sourceControlBlueprint;
@property(retain, nonatomic) XCSChangedObject *triggers; // @dynamic triggers;

@end

