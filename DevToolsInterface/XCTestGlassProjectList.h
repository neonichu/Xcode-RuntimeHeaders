//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/TestGlassOutlineNodeAdapter.h>

@class XCTestGlassFilesList, XCTestGlassTargetList;

@interface XCTestGlassProjectList : TestGlassOutlineNodeAdapter
{
    XCTestGlassTargetList *_targetAdapter;
    XCTestGlassFilesList *_filesAdapter;
}

+ (id)nodeForProjectList;
- (void)finalize;
- (void)displayObjectInfoFor:(id)arg1 withinFace:(id)arg2;
- (BOOL)isDataNodeExpandable:(id)arg1;
- (void)instantiateChildrenForDataNode:(id)arg1;
- (void)dataNodeConfigure:(id)arg1;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;
- (id)projects;

@end

