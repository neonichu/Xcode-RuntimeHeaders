//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, XCRefactoringFileChangeSetAsynchronousContext;

@interface XCRefactoringFileChangeSet : NSObject
{
    NSString *_filePath;
    NSMutableArray *_changes;
    id _delegate;
    long long _numberOfUserVisibleChanges;
    long long _numberOfUserAcceptedChanges;
    NSString *_newName;
    XCRefactoringFileChangeSetAsynchronousContext *_asynchronousContext;
    int _fileSystemStatus;
    BOOL _isFileSystemStatusCached;
}

+ (id)refactoringFileChangeSetForFileAtPath:(id)arg1 transformation:(id)arg2 error:(id *)arg3;
+ (id)supportedFileTypes;
+ (Class)refactoringFileChangeSetClassForPath:(id)arg1;
+ (BOOL)canSupportFileAtPath:(id)arg1;
- (id)description;
- (BOOL)postApply:(id *)arg1 context:(void *)arg2;
- (BOOL)preApply:(id *)arg1 context:(void **)arg2;
- (id)delegate;
- (BOOL)mayRequireFileCacheRegeneration;
- (int)fileSystemStatusFromProject:(id)arg1 useCached:(BOOL)arg2;
- (BOOL)willRenameFile;
- (id)newFilePath;
- (id)newName;
- (void)setNewName:(id)arg1;
- (void)setNumberOfUserAcceptedChanges:(long long)arg1;
- (long long)numberOfUserAcceptedChanges;
- (void)setNumberOfUserVisibleChanges:(long long)arg1;
- (long long)numberOfUserVisibleChanges;
- (BOOL)applyChangesWithDelegate:(id)arg1 project:(id)arg2 error:(id *)arg3;
- (void)applyChangesWithDelegate:(id)arg1 project:(id)arg2 callbackTarget:(id)arg3 selector:(SEL)arg4;
- (BOOL)canApplyChangesWithProject:(id)arg1 error:(id *)arg2;
- (BOOL)isEqualToFileChangeSet:(id)arg1;
- (void)addChange:(id)arg1;
- (id)filePathForWritableCheck;
- (id)filePath;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;
- (void)_setFileSystemStatus:(int)arg1;
- (void)_attemptToUnlockLockedFile:(id)arg1;
- (id)asynchronousContext;
- (void)eraseAsynchronousContext;
- (void)saveAsynchronousContextWithDelegate:(id)arg1 project:(id)arg2 callbackTarget:(id)arg3 selector:(SEL)arg4;
- (void)renamedFileAtPath:(id)arg1 to:(id)arg2 error:(id)arg3;
- (void)renameFileInProject:(id)arg1 callbackTarget:(id)arg2 selector:(SEL)arg3;
- (BOOL)canRenameFileInProject:(id)arg1 error:(id *)arg2;
- (void)postRenameApplyChangesWithDelegate:(id)arg1 project:(id)arg2 callbackTarget:(id)arg3 selector:(SEL)arg4;
- (long long)numberOfChanges;
- (id)changes;

@end

