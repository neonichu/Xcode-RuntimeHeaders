//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBDesignTimeValueMarshaller : NSObject
{
}

+ (id)marshallerWithLocalContext:(id)arg1 globalContext:(id)arg2;
+ (id)marshallerReferencingGlobalContext:(id)arg1;
+ (BOOL)isContextFree;
- (id)invertingMarshallerInitializationState;
- (id)invertingMarshallerClassName;
- (id)marshallIntermediateValue:(id)arg1 globalContext:(id)arg2;
- (id)marshallDesignTimeValue:(id)arg1 globalContext:(id)arg2;
- (id)designTimeRepresentationOfIntermediateValue:(id)arg1 globalContext:(id)arg2;
- (id)intermediateRepresentationOfDesignTimeValue:(id)arg1 globalContext:(id)arg2;
- (BOOL)marshallsNilValues;
- (id)initWithLocalContext:(id)arg1 globalContext:(id)arg2;

@end

