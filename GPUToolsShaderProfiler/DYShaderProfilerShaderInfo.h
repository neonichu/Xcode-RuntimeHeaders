//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsShaderProfiler/NSCoding-Protocol.h>
#import <GPUToolsShaderProfiler/NSCopying-Protocol.h>

@class NSString;

@interface DYShaderProfilerShaderInfo : NSObject <NSCoding, NSCopying>
{
    struct DYShaderProfilerTiming _timing;
    NSString *_source;
}

@property(readonly, nonatomic) struct DYShaderProfilerTiming timing; // @synthesize timing=_timing;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

