//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerLLDB/DBGLLDBDataValue.h>

__attribute__((visibility("hidden")))
@interface DBGLLDBChildPlaceholderDataValue : DBGLLDBDataValue
{
    DBGLLDBDataValue *_parentDataValue;
    unsigned long long _childIndex;
    BOOL _hasFaulted;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)value;
- (id)_initWithParentDataValue:(id)arg1 childIndex:(unsigned long long)arg2;

@end

