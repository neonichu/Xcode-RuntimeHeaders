//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBDeviceAdaptation, IBDeviceOrientation, IBDeviceSubtype, IBMemberConfiguration, NSArray, NSString;

@interface IBDeviceConfiguration : NSObject
{
    IBMemberConfiguration *_cachedMemberConfiguration;
    IBDeviceSubtype *_subtype;
    IBDeviceOrientation *_orientation;
    IBDeviceAdaptation *_adaptation;
}

+ (id)deviceConfigurationFromStateSavingTuple:(id)arg1 idiom:(id)arg2;
+ (id)fullyQualifiedConfigurationWithIdiom:(id)arg1 subtype:(id)arg2 orientation:(id)arg3 adaptation:(id)arg4;
@property(retain, nonatomic) IBDeviceAdaptation *adaptation; // @synthesize adaptation=_adaptation;
@property(retain, nonatomic) IBDeviceOrientation *orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) IBDeviceSubtype *subtype; // @synthesize subtype=_subtype;
- (void).cxx_destruct;
- (id)configurationByRotatingToOrientation:(id)arg1;
- (long long)compareAdaptationSizesByReverseHeightReverseWidth:(id)arg1;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *fullyQualifiedDisplayName;
- (id)description;
@property(readonly, nonatomic) IBMemberConfiguration *memberConfiguration;
- (id)copy;
@property(readonly, nonatomic) NSArray *stateSavingTuple;
- (id)initWithDeviceSubtype:(id)arg1 adaptation:(id)arg2;

@end

