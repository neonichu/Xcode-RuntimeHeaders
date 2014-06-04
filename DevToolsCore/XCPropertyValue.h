/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XCPropertyValues-Protocol.h"

@class NSString;

@interface XCPropertyValue : NSObject <XCPropertyValues>
{
}

+ (id)propertyValueWithLookupOfProperty:(id)arg1;
+ (id)propertyValueFromStringRepresentation:(id)arg1;
+ (void)initialize;
- (id)propertyValueDebugDescription;
@property(readonly, copy) NSString *description;
- (id)arrayOfStringRepresentations;
- (void)assertInternalConsistency;
- (id)evaluateAsStringInContext:(id)arg1;
- (id)evaluateAsStringInContext:(id)arg1 withNestingState:(const void *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
