//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameToolsFoundation/NSObject-Protocol.h>

@class GTFActionOverviewViewController, NSString;

@protocol GTFActionOverviewViewControllerDelegate <NSObject>

@optional
- (void)overviewController:(GTFActionOverviewViewController *)arg1 didSelectFilterCategoryName:(NSString *)arg2;
- (void)overviewController:(GTFActionOverviewViewController *)arg1 didUpdateFilterString:(NSString *)arg2;
@end

