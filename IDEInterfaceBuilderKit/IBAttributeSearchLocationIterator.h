//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBAttributeSearchLocation, IBMemberID, NSArray;
@protocol IBAttributeSearchLocationIteratorDelegate;

@interface IBAttributeSearchLocationIterator : NSObject
{
    NSArray *_attributeSearchLocations;
    NSArray *_attributeKeyPaths;
    long long _attributeKeyPathIndex;
    long long _attributeSearchLocationIndex;
    IBMemberID *_endDocumentMemberID;
    IBAttributeSearchLocation *_endAttributeSearchLocation;
    BOOL _backwards;
    id <IBAttributeSearchLocationIteratorDelegate> _delegate;
    IBMemberID *_currentDocumentMemberID;
}

@property(readonly, nonatomic, getter=isBackwards) BOOL backwards; // @synthesize backwards=_backwards;
@property(readonly, nonatomic) IBMemberID *currentDocumentMemberID; // @synthesize currentDocumentMemberID=_currentDocumentMemberID;
@property(readonly, nonatomic) __weak id <IBAttributeSearchLocationIteratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_continueToNextAttributeSearchLocation;
- (BOOL)hasReachedEnd;
@property(readonly, nonatomic) IBAttributeSearchLocation *currentAttributeSearchLocation;
- (void)next;
- (id)initWithDelegate:(id)arg1 startingDocumentLocation:(id)arg2 endingDocumentLocation:(id)arg3 backwards:(BOOL)arg4;

@end

