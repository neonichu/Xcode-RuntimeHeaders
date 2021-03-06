//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/SCMActivity.h>

@class NSCalendarDate, NSString, SCMRevision;

@interface SCMTreeUpdate : SCMActivity
{
    NSString *_path;
    NSString *_author;
    NSCalendarDate *_date;
    int _status;
    int _repositoryStatus;
    SCMRevision *_revision;
    SCMRevision *_repositoryRevision;
    int _action;
    BOOL _isLeaf;
}

@property BOOL isLeaf; // @synthesize isLeaf=_isLeaf;
@property int action; // @synthesize action=_action;
@property(retain) SCMRevision *repositoryRevision; // @synthesize repositoryRevision=_repositoryRevision;
@property(retain) SCMRevision *revision; // @synthesize revision=_revision;
@property int repositoryStatus; // @synthesize repositoryStatus=_repositoryStatus;
@property int status; // @synthesize status=_status;
@property(retain) NSCalendarDate *date; // @synthesize date=_date;
@property(copy) NSString *author; // @synthesize author=_author;
@property(copy) NSString *path; // @synthesize path=_path;
- (void)applyToSandboxTree:(id)arg1;
- (id)sandboxEntryForRoot:(id)arg1;
- (id)childPathForRoot:(id)arg1;
- (id)description;
- (id)createXMLElement;
- (void)addXMLAttributes:(id)arg1;
- (id)activityMessage;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

