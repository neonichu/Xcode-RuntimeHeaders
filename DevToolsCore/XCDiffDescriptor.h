//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/NSCoding-Protocol.h>
#import <DevToolsCore/NSCopying-Protocol.h>
#import <DevToolsCore/XCDiffHashing-Protocol.h>

@class NSMutableArray, XCDiffContext;

@interface XCDiffDescriptor : NSObject <NSCopying, NSCoding, XCDiffHashing>
{
    XCDiffContext *_diffContext;
    struct _NSRange _originalTokenRange;
    struct _NSRange _modifiedTokenRange;
    struct _NSRange _mergeTokenRange;
    unsigned long long _originalTokenHash;
    unsigned long long _modifiedTokenHash;
    XCDiffDescriptor *_parentDescriptor;
    NSMutableArray *_childDescriptors;
    struct _XCDiffDescriptorFlags _ddFlags;
}

+ (void)initialize;
@property unsigned long long modifiedTokenHash; // @synthesize modifiedTokenHash=_modifiedTokenHash;
@property unsigned long long originalTokenHash; // @synthesize originalTokenHash=_originalTokenHash;
- (void)diffDescriptor:(id)arg1 willRemoveChildDiffDescriptor:(id)arg2;
- (void)diffDescriptor:(id)arg1 didAddChildDiffDescriptor:(id)arg2;
- (void)removeAllChildDiffDescriptors;
- (void)removeChildDiffDescriptorAtIndex:(long long)arg1;
- (void)removeChildDiffDescriptor:(id)arg1;
- (void)insertChildDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (void)addChildDiffDescriptor:(id)arg1;
- (void)removeObjectFromChildDiffDescriptorsAtIndex:(long long)arg1;
- (void)insertObject:(id)arg1 inChildDiffDescriptorsAtIndex:(long long)arg2;
- (void)_diffDescriptor:(id)arg1 willRemoveChildDiffDescriptor:(id)arg2;
- (void)_diffDescriptor:(id)arg1 didAddChildDiffDescriptor:(id)arg2;
- (id)childDiffDescriptors;
- (id)parentDiffDescriptor;
- (void)setParentDiffDescriptor:(id)arg1;
- (unsigned long long)diffHashForDataSource:(id)arg1;
- (struct _NSRange)mergeTokenRange;
- (void)setMergeTokenRange:(struct _NSRange)arg1;
- (int)diffMergeDirection;
- (void)setDiffMergeDirection:(int)arg1;
- (int)diffDescriptorType;
- (void)setDiffDescriptorType:(int)arg1;
- (struct _NSRange)modifiedTokenRange;
- (void)setModifiedTokenRange:(struct _NSRange)arg1;
- (struct _NSRange)originalTokenRange;
- (void)setOriginalTokenRange:(struct _NSRange)arg1;
- (id)diffContext;
- (void)setDiffContext:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDiffContext:(id)arg1;

@end

