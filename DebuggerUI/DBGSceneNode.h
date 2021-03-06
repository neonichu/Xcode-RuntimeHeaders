//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerUI/DBGNode.h>

@class DBGBorderNode, DBGHostNode, DBGInteractiveSceneView, DBGViewGeometry, DBGViewInstance, NSColor, SCNMaterial;

@interface DBGSceneNode : DBGNode
{
    DBGBorderNode *_borderNode;
    DBGNode *_connectionLine;
    DBGNode *_distanceLabel;
    SCNMaterial *_imageMaterial;
    BOOL _isHostRoot;
    BOOL _isSceneRoot;
    BOOL _isWireframeModeEnabled;
    BOOL _isConstraintsWireframeModeEnabled;
    BOOL _isClippingSubviewNodes;
    NSColor *_defaultBorderColor;
    NSColor *_selectedBorderColor;
    BOOL _clippingEnabled;
    BOOL _currentlyOfInterestForAutoLayout;
    BOOL _hasRotation;
    int _nodeContentMode;
    DBGViewInstance *_viewInstance;
    DBGInteractiveSceneView *_sceneView;
    DBGHostNode *_host;
    DBGNode *_constraintsNode;
}

@property BOOL hasRotation; // @synthesize hasRotation=_hasRotation;
@property(nonatomic) int nodeContentMode; // @synthesize nodeContentMode=_nodeContentMode;
@property BOOL currentlyOfInterestForAutoLayout; // @synthesize currentlyOfInterestForAutoLayout=_currentlyOfInterestForAutoLayout;
@property(retain) DBGNode *constraintsNode; // @synthesize constraintsNode=_constraintsNode;
@property __weak DBGHostNode *host; // @synthesize host=_host;
@property __weak DBGInteractiveSceneView *sceneView; // @synthesize sceneView=_sceneView;
@property __weak DBGViewInstance *viewInstance; // @synthesize viewInstance=_viewInstance;
- (void).cxx_destruct;
- (void)unclipSubviewContentNodes;
- (void)clipSubviewContentNodes;
@property(getter=isClippingEnabled) BOOL clippingEnabled; // @synthesize clippingEnabled=_clippingEnabled;
- (void)updateRenderingOrderWithRangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
@property(readonly) NSColor *selectedBorderColor;
@property(readonly) NSColor *defaultBorderColor;
- (id)_colorForDefaultKey:(id)arg1;
- (void)updateAppearenceAfterConstraintsUpdateWithSelectedItemCount:(unsigned long long)arg1;
- (void)changeBorderColor:(id)arg1 borderOpacity:(double)arg2;
- (void)setBorderHidden:(BOOL)arg1;
- (void)setWireframeModeEnabled:(BOOL)arg1;
- (void)setupBorder;
- (void)updateShaderModifiers;
- (BOOL)respondsToHitTests;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateSnapshot;
- (id)snapshot;
@property(readonly) DBGViewGeometry *viewGeometry;
- (struct CATransform3D)applicableTransform;
- (id)initWithView:(id)arg1 inSceneView:(id)arg2 host:(id)arg3 isHostRoot:(BOOL)arg4 isSceneRoot:(BOOL)arg5;

@end

