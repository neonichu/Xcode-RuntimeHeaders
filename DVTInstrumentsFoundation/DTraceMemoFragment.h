//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTraceMemoFragment : NSObject
{
    unsigned int _code;
    unsigned long long _timestamp;
    long long _filePositionEnd;
}

@property(readonly, nonatomic) unsigned int code; // @synthesize code=_code;
@property(readonly, nonatomic) long long filePositionEnd; // @synthesize filePositionEnd=_filePositionEnd;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithTimestamp:(unsigned long long)arg1 filePositionEnd:(long long)arg2 code:(unsigned int)arg3;

@end

