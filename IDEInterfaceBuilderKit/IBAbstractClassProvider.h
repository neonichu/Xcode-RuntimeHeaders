/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSSet, NSString;

@interface IBAbstractClassProvider : NSObject
{
    NSMutableSet *_observers;
    BOOL _isUpdating;
}

@property BOOL isUpdating; // @synthesize isUpdating=_isUpdating;
- (void).cxx_destruct;
- (void)notifyObserversOfModifiedPartialClassDescriptions:(id)arg1 removedPartialDescriptionsWithSourceIdentifiers:(id)arg2;
- (id)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
@property(readonly) NSSet *partialClassDescriptions;
- (void)integrateDocumentDecodedPartialClassDescriptions:(id)arg1;
@property(readonly) NSString *abbreviationForPrintingClassDescriberDescription;
- (id)partialClassDescriptionsExcludedForEncoding;
- (BOOL)shouldPreserveClassDescriptionSourceForEncodedClassDescriptions:(id)arg1;
- (id)additionalNonDocumentReferencedPartialClassDescriptionsForEncoding;
- (id)partialClassDescriptionsForEncodingClassNamed:(id)arg1;
- (id)init;

@end
