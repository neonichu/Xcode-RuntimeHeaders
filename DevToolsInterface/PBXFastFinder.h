//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCReferenceBasedFindable.h>

@class NSData, NSMutableArray, NSString;

@interface PBXFastFinder : XCReferenceBasedFindable
{
    NSData *_fileData;
    NSString *_fileName;
    NSMutableArray *_backgroundResults;
    unsigned long long _encoding;
    const char *_fileBytes;
    unsigned long long _fileLength;
    const char *_toUpperTable;
    BOOL _foundHighBitChar;
}

+ (void)releaseToUpperTable;
+ (const char *)toUpperTable;
- (void)performBackgroundSearch;
- (void)recordFoundRange:(struct _NSRange)arg1;
- (id)results;
- (void)_addFoundRange:(struct _NSRange)arg1 inLine:(id)arg2 lineRange:(struct _NSRange)arg3;
- (id)_retainedStringForRange:(struct _NSRange)arg1;
- (struct _NSRange)lineRangeForRange:(struct _NSRange)arg1;
- (BOOL)isWordBoundaryAtIndex:(long long)arg1;
- (void)prepareToSearch;
- (BOOL)fastFindResultsValid;
- (BOOL)canSearchInBackground;
- (void)freeData;
- (void)dealloc;
- (id)initWithFileReference:(id)arg1 batchFinder:(id)arg2;

@end

