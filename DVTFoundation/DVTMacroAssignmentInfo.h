//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTMacroDefinitionConditionSet, NSString;
@protocol DVTMacroExpansion;

@interface DVTMacroAssignmentInfo : NSObject
{
    NSString *_macroName;
    id <DVTMacroExpansion> _value;
    DVTMacroDefinitionConditionSet *_conditionSet;
}

+ (id)newWithMacroName:(id)arg1 value:(id)arg2 conditionSet:(id)arg3;
@property(readonly) DVTMacroDefinitionConditionSet *conditionSet; // @synthesize conditionSet=_conditionSet;
@property(readonly) id <DVTMacroExpansion> value; // @synthesize value=_value;
@property(readonly) NSString *macroName; // @synthesize macroName=_macroName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMacroName:(id)arg1 value:(id)arg2 conditionSet:(id)arg3;

@end

