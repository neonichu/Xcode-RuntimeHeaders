//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/TestGlassOutlineNodeAdapter.h>

@class NSString;

@interface TestGlassProcessInfoList : TestGlassOutlineNodeAdapter
{
    NSString *_name;
}

+ (id)infoNodes;
+ (id)nodeFor:(id)arg1 title:(id)arg2;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (void)displayObjectInfoFor:(id)arg1 withinFace:(id)arg2;
- (void)displayTestInfoWithinFace:(id)arg1;
- (id)timerValue;
- (void)displayAnnouncementBoardInfoWithinFace:(id)arg1;
- (void)displayApplicationInfoWithinFace:(id)arg1;
- (void)displayUserDefaultsInfoWithinFace:(id)arg1;
- (void)displayPasteboardInfoWithinFace:(id)arg1;
- (void)displayHostInfoWithinFace:(id)arg1;
- (void)displayProcessInfoWithinFace:(id)arg1;
- (BOOL)isDataNodeExpandable:(id)arg1;
- (void)instantiateChildrenForDataNode:(id)arg1;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;

@end

