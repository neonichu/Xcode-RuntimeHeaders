//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDInterface/_NSPredicate_RootTypeController.h>

@class NSDatePicker;

@interface _NSPredicate_DateKeyTypeController : _NSPredicate_RootTypeController
{
    NSDatePicker *_datePicker;
}

- (void)dealloc;
- (void)remove;
- (id)lastKeyView;
- (id)firstKeyView;
- (BOOL)passInString:(id)arg1;
- (id)leafPredicate;
- (id)stringToPassOn;
- (id)setLeafPredicate:(id)arg1;
- (struct CGSize)setPosition:(struct CGPoint)arg1 secondRow:(struct CGPoint)arg2;
- (void)_createDatePicker;
- (id)possibleOperators;

@end

