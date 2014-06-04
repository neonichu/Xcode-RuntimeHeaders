/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h"

@class DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, IDEFileReference, IDERunSheetController, IDESchemeAction, NSArray, NSImage, NSString;

@interface IDERunSheetPhaseModel : NSObject <DVTInvalidation, IDEKeyDrivenNavigableItemRepresentedObject>
{
    IDERunSheetController *_controller;
    NSArray *_subphases;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingNavigableItem_subtitle;
+ (id)keyPathsForValuesAffectingRunPhase;
@property(readonly) NSArray *subphases; // @synthesize subphases=_subphases;
@property(retain) IDERunSheetController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) NSString *schemeCommandTitle;
@property(readonly) int schemePhaseModelCommand;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_name;
@property(readonly) Class postActionsSubphaseModelClass;
@property(readonly) Class preActionsSubphaseModelClass;
@property(readonly) Class detailViewControllerClass;
@property(readonly) IDESchemeAction *runPhase;
- (id)initWithRunSheetController:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
