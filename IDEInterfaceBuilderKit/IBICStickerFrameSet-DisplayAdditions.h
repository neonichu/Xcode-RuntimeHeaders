//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICStickerFrameSet.h>

#import <IDEInterfaceBuilderKit/IBICStickerPackChild-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICStickerPackParent-Protocol.h>

@class NSString;

@interface IBICStickerFrameSet (DisplayAdditions) <IBICStickerPackChild, IBICStickerPackParent>
- (id)createChildContentFromDropIndicator:(id)arg1;
- (BOOL)applyContentFromDropIndicator:(id)arg1;
- (id)defaultFileTypes;
- (void)setIbInspectedAccessibilityLabel:(id)arg1;
- (id)ibInspectedAccessibilityLabel;
- (id)quickLookPreviewItem;
- (long long)ibInspectedNumberOfFrames;
- (void)setIbInspectedNumberOfFrames:(long long)arg1;
- (double)ibInspectedDuration;
- (void)setIbInspectedDuration:(double)arg1;
- (long long)ibInspectedDurationType;
- (void)setIbInspectedDurationType:(long long)arg1;
- (long long)ibInspectedRepetitions;
- (void)setIbInspectedRepetitions:(long long)arg1;
- (long long)ibInspectedRepetitionType;
- (void)setIbInspectedRepetitionType:(long long)arg1;
- (id)includedAttributeUtilitySlicesForChild:(id)arg1;
- (BOOL)displaysChildrenInOutlineView;
- (id)typeIcon;
- (id)icon;
- (id)dragImage;
- (BOOL)isPredominantlyWhite;
- (id)bitmap;
- (id)image;
- (id)imageRep;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
