//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@interface IDESourceControlRepositoryNavigableItem : IDEKeyDrivenNavigableItem
{
}

+ (id)keyPathsForValuesAffectingProgress;
+ (id)keyPathsForValuesAffectingURLString;
+ (id)keyPathsForValuesAffectingName;
- (void)invalidateChildItems;
- (id)progress;
- (id)URLString;
- (id)name;

@end

