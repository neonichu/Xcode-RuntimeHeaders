//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKSceneNavigableBase.h>

@class NSArray, NSImage, NSString;

@interface SKSceneNavigableCategory : SKSceneNavigableBase
{
    NSString *_title;
    NSImage *_icon;
    NSArray *_validChildClasses;
}

@property(copy, nonatomic) NSArray *validChildClasses; // @synthesize validChildClasses=_validChildClasses;
- (id)icon;
- (id)title;
- (void).cxx_destruct;
- (BOOL)isValidChildClass:(Class)arg1;
- (BOOL)isCategory;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 document:(id)arg3;

@end

