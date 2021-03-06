//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTraceDebuggerUI/GPUMainEditor.h>

#import <GPURenderTargetEditor/GPURenderBufferViewStateCoordinationProtocol-Protocol.h>

@class DVTBorderedView, DVTObservingToken, GPUDebuggingAdditionUIController, GPUPathControl, GPURenderBufferBezeledLabel, GPURenderBufferCanvas, GPURenderBufferCanvasGrid, GPURenderBufferPool, GPUTraceSubEditor, NSImage, NSLayoutConstraint, NSMenu, NSMenuItem, NSMutableIndexSet, NSSegmentedControl, NSString, NSTextField, NSView;
@protocol DVTCancellable;

__attribute__((visibility("hidden")))
@interface GPUTraceEditor : GPUMainEditor <GPURenderBufferViewStateCoordinationProtocol>
{
    DVTBorderedView *_bottomToolBar;
    NSSegmentedControl *_viewSegmentedControl;
    NSTextField *_viewSegmentLabel;
    NSSegmentedControl *_orientationSegmentedControl;
    GPURenderBufferCanvasGrid *_renderBufferCanvas;
    NSMenuItem *_revealInDebugNavigatorMenuItem;
    GPURenderBufferBezeledLabel *_bezeledZoomLabel;
    GPURenderBufferBezeledLabel *_bezeledOrientationLabel;
    NSLayoutConstraint *_toolbarHeightConstraint;
    NSMenu *_colorAttachmentSelectionMenu;
    GPUPathControl *_layerSelector;
    struct vector<AnnotatedRenderBuffer, std::__1::allocator<AnnotatedRenderBuffer>> _annotatedRenderBuffers;
    int _toolbarMode;
    GPUTraceSubEditor *_subEditor;
    NSView *_mainEditorContentView;
    GPURenderBufferPool *_renderBufferPool;
    BOOL _showColorBuffer;
    BOOL _showDepthBuffer;
    BOOL _showStencilBuffer;
    BOOL _showAllBuffer;
    NSMutableIndexSet *_visibleColorBufferIndices;
    NSView *_superView;
    BOOL _reloadingViewTree;
    NSMenuItem *_toggleWireframeMenuItem;
    NSMenuItem *_toggleDeviceWireframeMenuItem;
    GPUDebuggingAdditionUIController *_debuggingAdditionUIController;
    DVTObservingToken *_debuggerControllerDebugStateObserverToken;
    BOOL _haveRequestedUIController;
    id <DVTCancellable> _uiControllerObserver;
    id _controlKeyEventTap;
    NSImage *_zoomToFitIcon;
    NSImage *_zoomToActualIcon;
    NSString *_zoomToFitControlLabel;
    NSString *_freeZoomControlLabelFormat;
    double _zoom;
    _Bool _zoomToFit;
    _Bool _changingVisibleBuffers;
    double _scaleX;
    double _scaleY;
    int _rotation;
    NSSegmentedControl *_buffersSegmentedControl;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property __weak NSSegmentedControl *buffersSegmentedControl; // @synthesize buffersSegmentedControl=_buffersSegmentedControl;
@property(readonly, nonatomic) GPURenderBufferCanvas *renderBufferCanvas; // @synthesize renderBufferCanvas=_renderBufferCanvas;
@property(copy) NSMenuItem *toggleDeviceWireframeMenuItem; // @synthesize toggleDeviceWireframeMenuItem=_toggleDeviceWireframeMenuItem;
@property(copy) NSMenuItem *toggleWireframeMenuItem; // @synthesize toggleWireframeMenuItem=_toggleWireframeMenuItem;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dumpImages:(id)arg1 asRaw:(BOOL)arg2;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)handleOpenScrubberTriggeredNewLocation:(id)arg1;
- (void)selectDocumentLocations:(id)arg1;
- (void)handleDebugBarNavigationWithDocumentLocation:(id)arg1;
- (void)handleUpdatedMainTraceItem:(id)arg1;
- (void)_loadSubEditorForNavItem:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)debuggingAddtionUIControllerInvalidated:(id)arg1;
- (void)debuggingAddtionUIControllerUpdated:(id)arg1;
- (Class)classOfDebuggingAddtionUIControllerInterestedIn;
- (void)renderBufferViewDidChangeState:(id)arg1;
- (void)changeZoom:(id)arg1;
- (void)gpuZoomToFit:(id)arg1;
- (void)gpuZoomActual:(id)arg1;
- (void)gpuZoomOut:(id)arg1;
- (void)gpuZoomIn:(id)arg1;
- (void)_applyNewZoom:(double)arg1 operation:(int)arg2;
- (BOOL)_zoomToFitEnabled;
- (BOOL)_zoomActualEnabled;
- (BOOL)_zoomOutEnabled;
- (BOOL)_zoomInEnabled;
- (void)changeOrientation:(id)arg1;
- (void)gpuFlipHorz:(id)arg1;
- (void)gpuFlipVert:(id)arg1;
- (void)_handleFlipAcrossVertical:(BOOL)arg1;
- (void)gpuRotateCW:(id)arg1;
- (void)gpuRotateCCW:(id)arg1;
- (void)_updateOrientation:(BOOL)arg1;
- (void)_changeVisibleBufferViews:(int)arg1;
- (void)changeVisibleBufferViews:(id)arg1;
- (void)_updateToolbarState;
- (void)_switchToolbarMode:(int)arg1;
- (void)_showBezeledLabelWithString:(id)arg1;
- (void)_showZoomLabelWithValue:(double)arg1;
- (void)_storePreferredVisibleRenderBuffers;
- (void)_updateRenderBuffersVisibility;
- (BOOL)_stencilBufferEnabled:(id)arg1;
- (BOOL)_depthBufferEnabled:(id)arg1;
- (BOOL)_colorBufferEnabled:(id)arg1;
- (BOOL)_autoBuffersEnabled:(id)arg1;
- (void)_updateRenderBuffersVisibilityAfterDelay;
- (id)updateViewsWithDisplayableItem:(id)arg1;
- (void)_updateLayerSelector;
- (void)_renderDisplaySet:(BOOL)arg1;
- (void)_updateColorAttachmentSelectionMenu;
- (void)_toggleColorBuffer:(id)arg1;
- (void)viewWillUninstall;
- (void)_handleDebuggingAdditionUIControllerCreated:(id)arg1;
- (void)viewDidInstall;
- (BOOL)_documentIsInQuickLookMode;
- (void)_loadInitialDisplayable;
- (void)replayCapture:(id)arg1;
- (void)gpuBuffersStencil:(id)arg1;
- (void)gpuBuffersDepth:(id)arg1;
- (void)gpuBuffersColor:(id)arg1;
- (void)gpuBuffersAuto:(id)arg1;
- (void)_chooseLayer:(id)arg1;
- (void)toggleDeviceWireframe:(id)arg1;
- (void)toggleWireframe:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)_loadSubEditorWithIdentifier:(id)arg1;
- (id)_subEditorInstanceForIdentifier:(id)arg1;
- (void)_makeSegmentedControlImagesTemplates:(id)arg1;

@end

