//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCRefactoringTextFileChangeSet.h>

@class NSData, XCDiffContext;

@interface XCRefactoringExistingTextFileChangeSet : XCRefactoringTextFileChangeSet
{
    NSData *_textData;
    BOOL _userVisibleChangesCalculated;
    XCDiffContext *_diffContext;
}

+ (id)supportedFileTypes;
- (long long)numberOfUserAcceptedChanges;
- (long long)numberOfUserVisibleChanges;
- (void)postRenameApplyChangesWithDelegate:(id)arg1 project:(id)arg2 callbackTarget:(id)arg3 selector:(SEL)arg4;
- (void)addChange:(id)arg1;
- (void)dealloc;
- (id)stringWithChangesUsingEncoding:(unsigned long long)arg1;
- (id)stringUsingEncoding:(unsigned long long)arg1;
- (void)setTextData:(id)arg1;
- (id)_diffContext;
- (void)_calculateUserVisibleChangesIfNecessary;
- (void)_calculateUserVisibleChanges;
- (id)_stringMacOSRomanWithChanges;

@end

