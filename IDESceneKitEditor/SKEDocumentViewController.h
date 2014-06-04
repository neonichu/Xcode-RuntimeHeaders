/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEEditor.h"

#import "DVTReplacementViewDelegate-Protocol.h"
#import "SKESceneViewDelegate-Protocol.h"

@class DVTReplacementView, DVTSplitView, NSArray, NSString, SCNNode, SKECanvasViewController, SKEDocument, SKEDocumentStructureViewController;

@interface SKEDocumentViewController : IDEEditor <DVTReplacementViewDelegate, SKESceneViewDelegate>
{
    DVTSplitView *splitView;
    DVTReplacementView *structureAreaContainer;
    DVTReplacementView *canvasContainer;
    SKEDocumentStructureViewController *_structureViewController;
    SKECanvasViewController *_canvasViewController;
    NSArray *_currentSelectedItems;
    SCNNode *_selectedNode;
    SCNNode *_currentPointOfView;
}

+ (id)keyPathsForValuesAffectingIsFreeBrowsingWithNodeSelected;
+ (id)keyPathsForValuesAffectingIsFreeBrowsing;
@property(retain, nonatomic) SCNNode *currentPointOfView; // @synthesize currentPointOfView=_currentPointOfView;
@property(retain) SKECanvasViewController *canvasViewController; // @synthesize canvasViewController=_canvasViewController;
@property(retain) SKEDocumentStructureViewController *structureViewController; // @synthesize structureViewController=_structureViewController;
@property(retain) SCNNode *selectedNode; // @synthesize selectedNode=_selectedNode;
- (void).cxx_destruct;
- (id)selectedNodeForSceneView:(id)arg1;
- (void)sceneViewBeganFreeBrowsing:(id)arg1;
- (void)sceneView:(id)arg1 droppedContent:(id)arg2 onNode:(id)arg3 geometryIndex:(long long)arg4;
- (void)sceneView:(id)arg1 didSelectNode:(id)arg2 geometryIndex:(long long)arg3;
- (void)primitiveInvalidate;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)resizeSplitViewToFitStructureAreaView;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)selectDocumentLocations:(id)arg1;
- (void)takeFreeCameraParametersFor:(id)arg1;
- (void)selectDefaultPointOfView;
- (BOOL)isFreeBrowsingWithNodeSelected;
@property(readonly) BOOL isFreeBrowsing;
@property(readonly) NSArray *availablePointsOfView;
@property(copy) NSArray *currentSelectedItems;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)documentDidReplaceMember:(id)arg1;
- (void)documentDidRemoveMember:(id)arg1;
- (void)takeFocus;
- (BOOL)canBecomeMainViewController;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) SKEDocument *document;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
