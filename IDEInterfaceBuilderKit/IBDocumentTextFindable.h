//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTTextReplacable-Protocol.h>
#import <IDEInterfaceBuilderKit/IBAttributeSearchLocationIteratorDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IDETextIndexFindable-Protocol.h>

@class IBDocumentSearchDescription, NSString;

@interface IBDocumentTextFindable : NSObject <DVTTextReplacable, IBAttributeSearchLocationIteratorDelegate, IDETextIndexFindable>
{
    IBDocumentSearchDescription *_documentSearchDescription;
}

@property(readonly, nonatomic) IBDocumentSearchDescription *documentSearchDescription; // @synthesize documentSearchDescription=_documentSearchDescription;
- (void).cxx_destruct;
- (id)searchLocationIterator:(id)arg1 stringValueForAttributeSearchLocation:(id)arg2 memberID:(id)arg3;
- (long long)searchLocationIterator:(id)arg1 compareAttributeSearchLocation:(id)arg2 forMemberID:(id)arg3 toLocation:(id)arg4 forMemberID:(id)arg5;
- (id)searchLocationIterator:(id)arg1 attributeSearchLocationsForMemberID:(id)arg2 andKeyPath:(id)arg3;
- (id)searchLocationIterator:(id)arg1 attributeKeyPathsForMemberID:(id)arg2;
- (id)nextMemberIDForSearchLocationIterator:(id)arg1 afterMemberID:(id)arg2;
- (id)lastMemberIDForSearchLocationIterator:(id)arg1;
- (id)firstMemberIDForSearchLocationIterator:(id)arg1;
- (BOOL)replaceFindResults:(id)arg1 withString:(id)arg2 withError:(id *)arg3;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (id)textRepresentation;
- (void)awakeWithPropertyList:(id)arg1;
- (void)encodeIntoPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithDocumentSearchDescription:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;

@end

