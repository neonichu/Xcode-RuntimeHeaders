//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICAbstractTextureSetRepSlot.h>

@class IBICCubeFace;

@interface IBICCubeTextureSetRepSlot : IBICAbstractTextureSetRepSlot
{
    IBICCubeFace *_cubeFace;
}

+ (id)variantSlotComponentClassesExcludingCoreVariants;
+ (id)variantSlotComponentClassesExcludingIdiom;
+ (id)orderedComponentClasses;
@property(readonly) IBICCubeFace *cubeFace; // @synthesize cubeFace=_cubeFace;
- (void).cxx_destruct;
- (void)captureComponents;
- (id)detailAreaPath;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;

@end

