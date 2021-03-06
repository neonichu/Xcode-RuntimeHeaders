//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIEditorDecoratableView-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class IBUITextAttributes, NSArray, NSColor, NSDictionary, NSImage, NSMutableArray, NSString, NSValue;

@interface IBUINavigationBar : IBUIView <IBDocumentArchiving, NSCoding, IBUIEditorDecoratableView>
{
    int barStyle;
    NSMutableArray *items;
    NSArray *observedSubviews;
    NSValue *cachedTitleViewFrame;
    NSDictionary *cachedLeftItemFrames;
    NSDictionary *cachedRightItemFrames;
    NSDictionary *cachedBarButtonItemImages;
    NSDictionary *cachedLeftItemsTitleRects;
    NSDictionary *cachedRightItemsTitleRects;
    BOOL forcesPrompt;
    NSImage *shadowImage;
    NSImage *backIndicatorImage;
    NSImage *backIndicatorTransitionMaskImage;
    IBUITextAttributes *titleTextAttributes;
    BOOL translucent;
    NSColor *barTintColor;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIbPrompted;
+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextShadowVerticalOffset;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextShadowHorizontalOffset;
+ (id)keyPathsForValuesAffectingIbInspectedHasTitleTextShadowOffset;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextShadowColor;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextColor;
+ (id)keyPathsForValuesAffectingIbInspectedTitleFontDescription;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextAttributes;
+ (id)ibObservedPropertiesForInheritableMetricsInvalidation;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(retain, nonatomic) NSImage *backIndicatorTransitionMaskImage; // @synthesize backIndicatorTransitionMaskImage;
@property(retain, nonatomic) NSImage *backIndicatorImage; // @synthesize backIndicatorImage;
@property(copy, nonatomic) NSColor *barTintColor; // @synthesize barTintColor;
@property(nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent;
@property(copy, nonatomic) IBUITextAttributes *titleTextAttributes; // @synthesize titleTextAttributes;
@property(retain, nonatomic) NSImage *shadowImage; // @synthesize shadowImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)imageOfBarButtonItem:(id)arg1;
- (id)barButtonItemImages;
- (void)_setCachedItemImagesFromBarItemImagesArray:(id)arg1;
- (struct CGRect)titleViewFrame;
- (struct CGRect)titleRectForButtonBarItem:(id)arg1;
- (id)allBarButtonItems;
- (struct CGRect)frameForButtonBarItem:(id)arg1;
- (void)setObservedSubviews:(id)arg1;
- (void)subviewFrameChanged:(id)arg1;
- (id)titleFont;
- (id)promptFont;
- (struct CGRect)promptRect;
- (struct CGRect)titleRect;
- (id)currentNavigationItem;
- (void)setItems:(id)arg1;
- (id)items;
- (void)addNavigationBarItem:(id)arg1;
- (void)removeNavigationBarItem:(id)arg1;
- (id)title;
- (id)prompt;
- (BOOL)isPrompted;
- (BOOL)forcesPrompt;
- (void)setForcesPrompt:(BOOL)arg1;
@property(nonatomic) int barStyle;
- (void)populateCachedGeometryInfos:(id)arg1;
- (void)configureFullSceneUpdateRequest:(id)arg1;
- (void)enumerateCachedImageKeyPaths:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ibWantsPlaceholderContainingViewController;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)setIbInspectedTitleTextShadowVerticalOffset:(double)arg1;
- (double)ibInspectedTitleTextShadowVerticalOffset;
- (void)setIbInspectedTitleTextShadowHorizontalOffset:(double)arg1;
- (double)ibInspectedTitleTextShadowHorizontalOffset;
- (void)setIbInspectedHasTitleTextShadowOffset:(BOOL)arg1;
- (BOOL)ibInspectedHasTitleTextShadowOffset;
- (void)setIbInspectedTitleTextShadowColor:(id)arg1;
- (id)ibInspectedTitleTextShadowColor;
- (void)setIbInspectedTitleTextColor:(id)arg1;
- (id)ibInspectedTitleTextColor;
- (void)setIbInspectedTitleFontDescription:(id)arg1;
- (id)ibInspectedTitleFontDescription;
- (void)setIbInspectedTitleTextAttributes:(id)arg1;
- (id)ibInspectedTitleTextAttributes;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (void)editorView:(id)arg1 drawDecoratorInRect:(struct CGRect)arg2 overlayView:(id)arg3;
- (BOOL)ibShouldChildBeIncludedInArbitrationUnitWithParent:(id)arg1;
- (BOOL)ibCanBeCollectionViewBackgroundView;
- (BOOL)ibCanBeTableViewBracketingView;
- (id)ibWidgetType;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibRemoveChildren:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (void)ibCustomizeForInsertionIntoIBUIView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (Class)barMetricsClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

