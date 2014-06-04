/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEBotExecution.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSString;

@interface IDEBotExecution (IDEKitAdditions) <IDEKeyDrivenNavigableItemRepresentedObject>
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingEndedTimeDisplayString;
+ (id)keyPathsForValuesAffectingStartedTimeDisplayString;
+ (id)keyPathsForValuesAffectingNavigableItem_progressValue;
+ (id)keyPathsForValuesAffectingShortTitle;
+ (id)keyPathsForValuesAffectingTitle;
- (id)buildFileWithStatusCollectionWithPaths:(id)arg1 withRelativeBase:(id)arg2;
- (void)buildSourceControlDatasourceFromCommitInfo:(id)arg1 workspace:(id)arg2 completionBlock:(id)arg3;
- (void)sourceControlInformationForWorkspace:(id)arg1 completionBlock:(id)arg2;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *endedTimeDisplayString;
@property(readonly, nonatomic) NSString *startedTimeDisplayString;
@property(readonly, nonatomic) long long navigableItem_progressValue;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
@property(readonly, nonatomic) NSString *shortTitle;
@property(readonly, nonatomic) NSString *title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end
