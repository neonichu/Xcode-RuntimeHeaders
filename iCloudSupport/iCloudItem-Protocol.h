/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSImage, NSNumber, NSString, NSURL;

@protocol iCloudItem <NSObject>
@property(readonly, nonatomic) double uploadProgress;
@property(readonly, nonatomic) double downloadProgress;
@property(readonly, nonatomic, getter=isUploading) BOOL uploading;
@property(readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property(nonatomic) BOOL wasUploading;
@property(nonatomic) BOOL wasDownloading;
@property(nonatomic) unsigned long long lastSizeDuringUploading;
@property(nonatomic) unsigned long long lastSizeDuringDownloading;
@property(readonly, nonatomic) NSString *localType;
@property(readonly, nonatomic) NSImage *icon;
@property(readonly, nonatomic) unsigned long long status;
@property(readonly, nonatomic) NSDate *modified;
@property(readonly, nonatomic) NSArray *losers;
@property(readonly, nonatomic) NSNumber *conflictToken;
@property(readonly, nonatomic) BOOL conflicted;
@property(readonly, nonatomic) NSString *peerName;
@property(readonly, nonatomic) NSNumber *peerID;
@property(readonly, nonatomic) NSString *signature;
@property(readonly, nonatomic) NSNumber *size;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL onlyEmbedded;
@property(readonly, nonatomic) BOOL pending;
@property(readonly, nonatomic) BOOL deleted;
@property(readonly, nonatomic) BOOL inCloud;
@property(readonly, nonatomic) NSNumber *changeID;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSNumber *parentItemID;
@property(readonly, nonatomic) NSNumber *itemID;
@property(readonly, nonatomic) NSURL *iCloudURL;
@property(readonly, nonatomic) NSURL *localURL;
@property(readonly, nonatomic) __weak id <iCloudItemProvider> itemProvider;
- (id)ubiquityRootPath;
- (id)ubiquityRoot;
- (id)ubiquityRelativePath;
- (id)ubiquityContainer;
- (id)parentItem;
- (BOOL)isRootItem;
- (BOOL)isContainer;
- (BOOL)isPackage;
- (BOOL)isFile;
- (BOOL)isFolder;
- (id)children;
- (void)childrenWithCompletionBlock:(id)arg1;
- (void)faultWithCompletionBlock:(id)arg1;
@end
