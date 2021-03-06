//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEPathComponentCell, NSString;

@interface IDEPathComponentCellAccessibilityObject : NSObject
{
    NSString *_role;
    id _pathCell;
    NSString *_description;
    IDEPathComponentCell *_componentCell;
}

@property(readonly) IDEPathComponentCell *componentCell; // @synthesize componentCell=_componentCell;
- (void).cxx_destruct;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPathComponentCell:(id)arg1 pathCell:(id)arg2 description:(id)arg3;

@end

