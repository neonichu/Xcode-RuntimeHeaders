//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDERefactoringFileChange.h>

@class NSString;

@interface DevkitTextFileChange : IDERefactoringFileChange
{
    NSString *_replacementString;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToFileChange:(id)arg1;
- (BOOL)applyChange;
- (id)replacementString;
- (struct _DevkitLineInfo)lineInfo;
- (id)initWithTextFileChangeSet:(id)arg1 textFileLocation:(id)arg2 replacementString:(id)arg3;

@end

