//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DYFunctionStream : NSObject
{
}

- (void)enumerateFunctionsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)readFunctions:(struct Function *)arg1 maxCount:(unsigned long long)arg2;
- (const struct Function *)readFunction;
- (const struct Function *)peekFunction;
- (void)resetToFunction:(const struct Function *)arg1;
- (void)clearResetMarker;
- (void)setResetMarker;
- (void)reset;

@end

