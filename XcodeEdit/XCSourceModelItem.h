//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface XCSourceModelItem : NSObject
{
    struct _NSRange _relativeLocation;
    unsigned int _colorId:15;
    unsigned int _isOpaque:1;
    unsigned int _dirty:1;
    unsigned int _isBlock:1;
    unsigned int _ignoreToken:1;
    unsigned int _inheritsColor:1;
    unsigned int _isIdentifier:1;
    unsigned int _isSimpleToken:1;
    unsigned int _isVolatile:1;
    unsigned int _needToDirtyRightEdges:1;
    long long _langId;
    long long _token;
    XCSourceModelItem *_parent;
    NSMutableArray *_children;
}

+ (id)sourceModelItemWithRange:(struct _NSRange)arg1 language:(long long)arg2 token:(long long)arg3 color:(short)arg4;
- (void)clearIndexedColors;
- (long long)compare:(id)arg1;
- (id)followingItem;
- (id)precedingItem;
- (id)_lastLeafItem;
- (id)_firstLeafItem;
- (id)nextItem;
- (id)previousItem;
- (BOOL)isAncestorOf:(id)arg1;
- (id)childAdjoiningLocation:(unsigned long long)arg1;
- (id)childEnclosingLocation:(unsigned long long)arg1;
- (id)_childEnclosingLocation:(unsigned long long)arg1;
- (unsigned long long)indexOfChildAtLocation:(unsigned long long)arg1;
- (unsigned long long)indexOfChildAfterLocation:(unsigned long long)arg1;
- (unsigned long long)indexOfChildBeforeLocation:(unsigned long long)arg1;
- (id)children;
- (unsigned long long)numberOfChildren;
- (void)addChildren:(id)arg1;
- (void)addChild:(id)arg1;
- (void)assignParents:(id)arg1;
- (void)setParent:(id)arg1;
- (id)parent;
- (BOOL)isVolatile;
- (void)setVolatile:(BOOL)arg1;
- (BOOL)needToDirtyRightEdges;
- (void)setNeedToDirtyRightEdges:(BOOL)arg1;
- (BOOL)isSimpleToken;
- (void)setIsSimpleToken:(BOOL)arg1;
- (BOOL)inheritsColor;
- (void)setInheritsColor:(BOOL)arg1;
- (BOOL)ignoreToken;
- (void)setIgnoreToken:(BOOL)arg1;
- (BOOL)dirty;
- (void)setDirty:(BOOL)arg1;
- (long long)token;
- (void)setToken:(long long)arg1;
- (long long)langId;
- (BOOL)isIdentifier;
- (short)rawColorId;
- (BOOL)isOpaque;
- (void)setIsOpaque:(BOOL)arg1;
- (short)colorId;
- (void)setColorId:(short)arg1;
- (struct _NSRange)innerRange;
- (void)offsetBy:(long long)arg1;
- (void)setRange:(struct _NSRange)arg1;
- (struct _NSRange)range;
- (id)enclosingBlock;
- (long long)blockDepth;
- (void)setIsBlock:(BOOL)arg1;
- (BOOL)isBlock;
- (void)dirtyRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (void)dirtyRelativeRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (void)validate;
- (id)dumpContext;
- (id)contextArray;
- (id)simpleDescription;
- (id)diffableDescription;
- (id)description;
- (id)innerDescription:(id)arg1 showSelf:(BOOL)arg2;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange)arg1 language:(long long)arg2 token:(long long)arg3 color:(short)arg4;

@end

