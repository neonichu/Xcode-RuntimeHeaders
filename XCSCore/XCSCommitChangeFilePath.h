//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSString;

@interface XCSCommitChangeFilePath : XCSObject
{
    NSString *_filePath;
    unsigned long long _status;
}

+ (id)commitChangeWithFilePath:(id)arg1 status:(unsigned long long)arg2 validationErrors:(id *)arg3;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithFilePath:(id)arg1 status:(unsigned long long)arg2 validationErrors:(id *)arg3;

@end

