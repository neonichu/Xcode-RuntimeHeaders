//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTAssetDetailImageView, NSMutableArray, NSMutableSet;

@interface DTAssetiLifeDelegate : NSObject
{
    DTAssetDetailImageView *_detailImageView;
    NSMutableSet *_photoLoadingImagesSet;
    NSMutableArray *_photoLoadingImagesQueue;
    id _photoAssets;
    unsigned long long _photoLoadIndex;
    BOOL _photoHasWorkerLoadingImageThread;
}

+ (id)draggedImageForPhotoImage:(id)arg1;
+ (id)sharedInstance;
- (void)assetCategoryController:(id)arg1 sizeAssetDetailView:(id)arg2 toFitSuggestedSize:(struct CGSize)arg3 forAsset:(id)arg4;
- (void)assetCategoryController:(id)arg1 willDisplayAsset:(id)arg2 inAssetDetailView:(id)arg3;
- (void)assetCategoryController:(id)arg1 willDisplayAsset:(id)arg2;
- (id)assetCategoryController:(id)arg1 assetDetailViewForAsset:(id)arg2;
- (id)assetCategoryControllerSmartGroupRuleDefinitionsPropertyList:(id)arg1;
- (id)assetCategoryController:(id)arg1 createViewForSmartRuleViewID:(id)arg2;
- (BOOL)assetCategoryController:(id)arg1 createAsset:(id *)arg2 andImage:(id *)arg3 forAssetSourceWithIdentifier:(id *)arg4 fromPasteboard:(id)arg5;
- (BOOL)assetCategoryController:(id)arg1 canCreateAssetsFromPasteboard:(id)arg2 targettingAssetSourceIdentifier:(id *)arg3;
- (void)assetCategoryController:(id)arg1 populatePasteboard:(id)arg2 withAssets:(id)arg3 defaultDraggedImageState:(id *)arg4 identifierMapTable:(id *)arg5;
- (void)assetCategoryController:(id)arg1 didFinishDraggingAssets:(id)arg2 info:(id)arg3 shouldSlideBack:(char *)arg4;
- (void)assetCategoryController:(id)arg1 willBeginDraggingAssets:(id)arg2;
- (void)assetCategoryController:(id)arg1 userDidEditAsset:(id)arg2;
- (BOOL)assetCategoryController:(id)arg1 isAssetUserEditable:(id)arg2;
- (BOOL)assetCategoryController:(id)arg1 canRemoveAsset:(id)arg2;
- (id)assetCategoryController:(id)arg1 searchTermsForAsset:(id)arg2;
- (id)assetCategoryControllerContentPasteboardTypes:(id)arg1;
- (void)startLoadingImagesForPhotoAssets:(id)arg1;
- (void)_threadedPhotoLoadImages;
- (void)dealloc;
- (id)init;
- (void)_thumbnailForPhotoAsset:(id)arg1;

@end

