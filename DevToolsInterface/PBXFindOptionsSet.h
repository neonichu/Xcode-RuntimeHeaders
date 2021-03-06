//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PBXFindOptionsSet : NSObject <NSCopying>
{
    NSString *_name;
    struct {
        unsigned int searchOpenFiles:1;
        unsigned int searchOpenProjects:1;
        unsigned int whichProjectFiles:2;
        unsigned int projectFilesOrFrameworks:2;
        unsigned int fileFilterType:2;
        unsigned int searchFilesAndFolders:1;
        unsigned int searchIncludedFiles:1;
        unsigned int _RESERVED:22;
    } _fosFlags;
    NSMutableArray *_positiveNamePatternsArray;
    NSMutableArray *_negativeNamePatternsArray;
    NSMutableArray *_searchFilesArray;
}

+ (id)regularExpressionForPattern:(id)arg1;
+ (void)removeNamePattern:(id)arg1;
+ (void)addNamePattern:(id)arg1;
+ (void)replaceNamePatternAtIndex:(unsigned long long)arg1 withNamePattern:(id)arg2;
+ (id)namePatterns;
+ (void)_readNamePatterns;
+ (void)_writeNamePatterns;
+ (long long)indexOfOptionsSet:(id)arg1;
+ (void)removeGlobalFindOptionsSet:(id)arg1;
+ (void)addGlobalFindOptionSet:(id)arg1;
+ (id)globalFindOptionsSetWithName:(id)arg1;
+ (id)globalFindOptionsSets;
+ (void)_readGlobalSets;
+ (void)_writeGlobalSets;
- (id)searchFiles;
- (void)replaceSearchFileAtIndex:(long long)arg1 WithSearchFile:(id)arg2;
- (void)removeSearchFiles:(id)arg1;
- (void)addSearchFiles:(id)arg1;
- (void)removeNegativeNamePattern:(id)arg1;
- (void)addNegativeNamePattern:(id)arg1;
- (id)negativeNamePatterns;
- (void)removePositiveNamePattern:(id)arg1;
- (void)addPositiveNamePattern:(id)arg1;
- (id)positiveNamePatterns;
- (void)setFileFilterType:(int)arg1;
- (int)fileFilterType;
- (void)setProjectFindCandidates:(int)arg1;
- (int)projectFindCandidates;
- (void)setProjectFindScope:(int)arg1;
- (int)projectFindScope;
- (void)setFindInOpenProjects:(BOOL)arg1;
- (BOOL)findInOpenProjects;
- (void)setFindInFilesAndFolders:(BOOL)arg1;
- (BOOL)findInFilesAndFolders;
- (void)setFindInOpenFiles:(BOOL)arg1;
- (BOOL)findInOpenFiles;
- (void)setFindInIncludedFiles:(BOOL)arg1;
- (BOOL)findInIncludedFiles;
- (void)setName:(id)arg1;
- (id)name;
- (void)didChange;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)readPropertyListRepresentation:(id)arg1;
- (id)propertyListRepresentation;

@end

