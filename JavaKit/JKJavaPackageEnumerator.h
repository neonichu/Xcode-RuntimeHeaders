/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSEnumerator.h"

@class JKClassLibrary, NSArray, NSString;

@interface JKJavaPackageEnumerator : NSEnumerator
{
    NSString *_name;
    JKClassLibrary *_library;
    NSArray *_packages;
    NSArray *_classNames;
    unsigned long long _index;
    NSEnumerator *_next;
    BOOL _enumerateClassNames;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithPackage:(id)arg1 enumerateClassNames:(BOOL)arg2;
- (void)_nextEnumerator;

@end
