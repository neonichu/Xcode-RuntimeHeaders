//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSegmentedCell.h>

@class NSImage, NSNumber, NSString;

@interface NSSegmentedCell (IBNSSegmentedControlInspectorIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedWidthForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedIsSelectedForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedCanSelectSegment;
+ (id)keyPathsForValuesAffectingIbInspectedIsEnabledForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedTagForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedImageScalingForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedImageForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedLabelForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedToolTipForInspectedSegment;
- (void)setIbInspectedSpringLoaded:(BOOL)arg1;
- (BOOL)ibInspectedSpringLoaded;
- (BOOL)ibShowSpringLoaded;
- (void)setIbInspectedWidthForInspectedSegment:(id)arg1;
- (id)ibInspectedWidthForInspectedSegment;
- (BOOL)ibInspectedAutosizeValueForInspectedSegment;
- (double)ibAutosizedSegmentWidth;
- (void)setIbInspectedSegmentStyle:(long long)arg1;
- (long long)ibInspectedSegmentStyle;
- (void)setIbInspectedTrackingMode:(unsigned long long)arg1;
- (unsigned long long)ibInspectedTrackingMode;
@property(nonatomic) BOOL ibInspectedIsSelectedForInspectedSegment;
- (BOOL)ibInspectedCanSelectSegment;
@property(nonatomic) BOOL ibInspectedIsEnabledForInspectedSegment;
@property(nonatomic) long long ibInspectedTagForInspectedSegment;
@property(nonatomic) unsigned long long ibInspectedImageScalingForInspectedSegment;
@property(retain, nonatomic) NSImage *ibInspectedImageForInspectedSegment;
@property(retain, nonatomic) NSString *ibInspectedLabelForInspectedSegment;
@property(retain, nonatomic) NSString *ibInspectedToolTipForInspectedSegment;
- (long long)ibInspectedSegmentValue;
@property(retain, nonatomic) NSNumber *ibExternalInspectedSegment;
@end

