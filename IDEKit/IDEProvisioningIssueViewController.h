//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDEProvisioningIssueSliceViewDelegate-Protocol.h>

@class DVTStackView_ML, IDEProvisioningIssue, IDEVerticalResizeToContentLayoutView, NSImageView;

@interface IDEProvisioningIssueViewController : IDEViewController <IDEProvisioningIssueSliceViewDelegate>
{
    IDEProvisioningIssue *_issue;
    NSImageView *_statusImageView;
    DVTStackView_ML *_issuesStackView;
    IDEVerticalResizeToContentLayoutView *_verticalResizingView;
}

@property(retain) IDEVerticalResizeToContentLayoutView *verticalResizingView; // @synthesize verticalResizingView=_verticalResizingView;
@property __weak DVTStackView_ML *issuesStackView; // @synthesize issuesStackView=_issuesStackView;
@property __weak NSImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) IDEProvisioningIssue *issue; // @synthesize issue=_issue;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)didSelectIssueActionFromProvisioningIssuesSliceView:(id)arg1;
- (void)didSelectSubtitleActionFromProvisioningIssueSliceView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithIssue:(id)arg1;

@end

