//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractDocumentUnarchiverGroupMember.h>

@class IBDocumentUnarchiver, NSXMLElement;

@interface IBDocumentUnarchiverGroupMember : IBAbstractDocumentUnarchiverGroupMember
{
    NSXMLElement *element;
    IBDocumentUnarchiver *unarchiver;
}

@property(copy) NSXMLElement *element; // @synthesize element;
- (void).cxx_destruct;
- (id)key;
- (id)elementName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUnarchiver:(id)arg1 element:(id)arg2;
- (id)unarchiveAsObjectReferenceWithReferenceType:(id)arg1;
- (id)unarchiveAsObject;
- (void)unarchiveContentWithBlock:(CDUnknownBlockType)arg1;

@end

