//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTCrashLogParsedBinaryImage : NSObject
{
    NSString *_name;
    NSString *_startAddress;
    NSString *_endAddress;
    NSString *_uuid;
    NSString *_path;
    NSString *_parserIdentifier;
}

@property(readonly) NSString *parserIdentifier; // @synthesize parserIdentifier=_parserIdentifier;
@property(retain) NSString *path; // @synthesize path=_path;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain) NSString *endAddress; // @synthesize endAddress=_endAddress;
@property(retain) NSString *startAddress; // @synthesize startAddress=_startAddress;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithParserIdentifier:(id)arg1;

@end

