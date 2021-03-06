//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DSMBookmarkManager : NSObject
{
    NSArray *m_bookmarksAsObjects;
}

+ (id)sharedBookmarkManager;
+ (void)initialize;
@property(copy, nonatomic) NSArray *bookmarksAsObjects; // @synthesize bookmarksAsObjects=m_bookmarksAsObjects;
- (void).cxx_destruct;
- (id)bookmarkForURLString:(id)arg1;
- (id)bookmarkForNode:(id)arg1;
- (void)persistBookmarkDictionaries:(id)arg1;
- (void)persistBookmarks:(id)arg1;
- (id)allBookmarksAsDictionaries;
- (id)allBookmarksAsObjects;
- (void)setAllBookmarksAsObjectsArray:(id)arg1;
- (void)replaceObjectInAllBookmarksAsObjectsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromAllBookmarksAsObjectsAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inAllBookmarksAsObjectsAtIndex:(unsigned int)arg2;
- (id)objectInAllBookmarksAsObjectsAtIndex:(unsigned int)arg1;
- (unsigned int)countOfAllBookmarksAsObjectsArray;
- (void)deleteAllBookmarks;
- (void)deleteBookmark:(id)arg1;
- (void)addBookmark:(id)arg1;

@end

