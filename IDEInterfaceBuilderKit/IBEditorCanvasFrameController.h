//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>
#import <IDEInterfaceBuilderKit/IBDelegatedCanvasOverlayDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBDocumentArbitrationResponder-Protocol.h>
#import <IDEInterfaceBuilderKit/IBEndPointProvider-Protocol.h>
#import <IDEInterfaceBuilderKit/NSDraggingDestination-Protocol.h>
#import <IDEInterfaceBuilderKit/NSUserInterfaceValidations-Protocol.h>

@class DVTStackBacktrace, IBAbstractDocumentEditor, IBActionForwardingResponder, IBCancellationToken, IBCanvasViewController, IBDelegatedCanvasOverlay, IBDeviceBezel, IBDocument, IBEditor, IBEditorCanvasFrame, IBFieldEditor, IBHitDetectionMap, IBInlineStringEditingContext, IBInvalidationToken, IBLayoutManager, IBMemberConfiguration, IBNavigationMenuController, IBTargetIdentifier, NSAccessibilityElement, NSDate, NSEvent, NSMapTable, NSMutableSet, NSSet, NSString;
@protocol DVTInvalidation;

@interface IBEditorCanvasFrameController : NSObject <IBDelegatedCanvasOverlayDelegate, IBEndPointProvider, NSUserInterfaceValidations, NSDraggingDestination, IBDocumentArbitrationResponder, DVTInvalidation>
{
    IBEditorCanvasFrame *editorCanvasFrame;
    IBFieldEditor *fieldEditor;
    IBEditor *activeEditor;
    BOOL shouldSelectDeepestObjectOnNextMouseUp;
    BOOL shouldPruneToSingleSelectionOnNextMouseUp;
    IBHitDetectionMap *decoratorActionMap;
    IBEditor *lastDragTarget;
    NSObject *lastDragIdentifiedObject;
    BOOL blockDragTillMove;
    BOOL blockDragTillHold;
    BOOL editorDidAcceptDragInfo;
    struct CGPoint lastDragPoint;
    long long lastDragSequenceNumber;
    NSEvent *lastLeftMouseDown;
    NSEvent *lastRightMouseDown;
    IBDeviceBezel *deviceBezel;
    IBMemberConfiguration *deviceBezelConfiguration;
    IBTargetIdentifier *targetIdentifier;
    IBInlineStringEditingContext *inlineStringEditingContext;
    IBDocument *document;
    IBEditor *baseEditor;
    IBAbstractDocumentEditor *documentEditor;
    NSDate *lastDragMouseMovedTime;
    BOOL dropInProgress;
    IBActionForwardingResponder *editorActionForwarder;
    IBActionForwardingResponder *frameControllerActionForwarder;
    id cursorRectAlwaysAtBackKey;
    IBNavigationMenuController *navigationMenuController;
    IBCancellationToken *lastDragTargetHighlightCancellationToken;
    unsigned long long targetIdentifierUseCount;
    NSObject *objectToMeasureSelectionSpeedFor;
    NSSet *objectsShowingTargetIdentifier;
    IBDelegatedCanvasOverlay *_overlayView;
    id <DVTInvalidation> dragAndDropDrawingToken;
    NSMutableSet *_dependentSiblingEditorFrameControllers;
    BOOL _haveRunFirstSceneUpdate;
    IBInvalidationToken *_loadingToken;
    NSMapTable *_objectsToAccessibilityElements;
    BOOL _opensEditorsWithKeyEvents;
    IBEditorCanvasFrameController *_prerequisiteSiblingEditorFrameController;
    IBEditor *_activeEditorBeforeLastClick;
    NSObject *_baseEditedObject;
    NSAccessibilityElement *_baseEditedObjectAccessibilityElement;
}

+ (void)initialize;
@property(retain, nonatomic) NSAccessibilityElement *baseEditedObjectAccessibilityElement; // @synthesize baseEditedObjectAccessibilityElement=_baseEditedObjectAccessibilityElement;
@property(retain, nonatomic) NSObject *baseEditedObject; // @synthesize baseEditedObject=_baseEditedObject;
@property(nonatomic) __weak IBEditor *activeEditorBeforeLastClick; // @synthesize activeEditorBeforeLastClick=_activeEditorBeforeLastClick;
@property __weak IBEditorCanvasFrameController *prerequisiteSiblingEditorFrameController; // @synthesize prerequisiteSiblingEditorFrameController=_prerequisiteSiblingEditorFrameController;
@property(retain) NSSet *dependentSiblingEditorFrameControllers; // @synthesize dependentSiblingEditorFrameControllers=_dependentSiblingEditorFrameControllers;
@property BOOL opensEditorsWithKeyEvents; // @synthesize opensEditorsWithKeyEvents=_opensEditorsWithKeyEvents;
@property(copy, nonatomic) NSEvent *lastRightMouseDown; // @synthesize lastRightMouseDown;
@property(copy, nonatomic) NSEvent *lastLeftMouseDown; // @synthesize lastLeftMouseDown;
@property(nonatomic, getter=isDropInProgress) BOOL dropInProgress; // @synthesize dropInProgress;
@property(copy) NSDate *lastDragMouseMovedTime; // @synthesize lastDragMouseMovedTime;
@property(retain, nonatomic) IBAbstractDocumentEditor *documentEditor; // @synthesize documentEditor;
@property(retain, nonatomic) IBEditor *baseEditor; // @synthesize baseEditor;
@property(retain, nonatomic) IBDocument *document; // @synthesize document;
@property(retain, nonatomic) IBEditorCanvasFrame *editorCanvasFrame; // @synthesize editorCanvasFrame;
- (void).cxx_destruct;
- (id)runSynchronousSceneUpdateForRoot:(id)arg1;
- (void)populateIncrementalSceneUpdates:(id)arg1 forUpdatingSceneWithRoot:(id)arg2 sceneUpdateManager:(id)arg3;
- (void)populateFullSceneUpdates:(id)arg1 forUpdatingSceneWithRoot:(id)arg2 objectPackage:(id)arg3 sceneUpdateManager:(id)arg4;
- (id)_makeIncrementalSceneUpdateRequest;
- (id)_makeFullSceneUpdateRequestForRoot:(id)arg1 withObjectPackage:(id)arg2;
- (void)configureSceneUpdateRequest:(id)arg1;
- (long long)_sceneUpdateRenderingFidelity;
- (double)_sceneUpdateScaleFactor;
- (void)document:(id)arg1 willRunArbitrationOfUnits:(id)arg2;
- (void)prepareToResizeFrameWithTracker:(id)arg1;
- (void)didResizeEditedObject:(id)arg1 withEvent:(id)arg2 fromKnob:(CDUnion_31865a80)arg3;
- (void)willResizeEditedObject:(id)arg1 withEvent:(id)arg2 fromKnob:(CDUnion_31865a80)arg3;
- (void)recursivelyVisitEditorsStartingAtEditedObject:(id)arg1 callingBlockForEachVisitedEditor:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) IBLayoutManager *layoutManager;
- (void)sendEvent:(id)arg1;
- (BOOL)decoratorActionsShouldInterceptEvent:(id)arg1;
- (BOOL)decoratorActionsShouldInterceptEventAtPoint:(struct CGPoint)arg1;
- (id)connectionSourceForEvent:(id)arg1;
- (id)descendantEditorClickPassthroughTarget;
- (BOOL)shouldDragFrameWithMouseDownInContentRect:(id)arg1;
- (CDUnknownBlockType)willTrackWithMouseDownEvent:(id)arg1;
- (void)noteMouseEvent:(id)arg1;
- (BOOL)openEditorWithKeyEvent:(id)arg1;
- (id)nextTabTargetRelativeToObject:(id)arg1 forEvent:(id)arg2;
- (id)tabOrderedChidren;
- (void)showNavigationMenuForEvent:(id)arg1;
- (id)navigationMenuController;
- (BOOL)actionAreaInterceptedEvent:(id)arg1;
- (BOOL)interceptDecoratorActionEvent:(id)arg1;
- (BOOL)shouldInterceptEvent:(id)arg1;
- (BOOL)isEventForFieldEditor:(id)arg1;
- (id)hitTestEditorView:(struct CGPoint)arg1;
- (id)contentView;
- (void)editor:(id)arg1 didDrawSelectionHighlightForObject:(id)arg2;
- (void)measureSelectionSpeedForObject:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)deselectObjectSubTrees:(id)arg1;
- (void)openEditorWithMouseEvent:(id)arg1;
- (void)openEditorWithDoubleLeftMouseDown:(id)arg1;
- (void)selectNextObjectWithMouseUp:(id)arg1;
- (BOOL)wouldObjectSelect:(id)arg1 onLeftMouseDownWithModifierFlags:(unsigned long long)arg2;
- (void)openEditorWithSingleMouseDown:(id)arg1;
- (id)activationActionForClickObject:(id)arg1 withModifierFlags:(unsigned long long)arg2 isRightMouse:(BOOL)arg3;
- (id)intendedTargetInCurrentContextStartingFromObject:(id)arg1;
- (id)firstInitiallySelectableObjectAtOrAbove:(id)arg1;
- (void)invokeDelete;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)delegatePasteboardActionValidationToCanvasView:(SEL)arg1;
- (void)duplicate:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (BOOL)isObjectRemovalValidForMode:(unsigned long long)arg1;
- (unsigned long long)objectRemovalModeForCurrentSelection;
- (id)pasteTarget;
- (id)cutCopyDeleteDuplicateTarget;
- (BOOL)shouldForwardPasteboardActionsToCanvasView;
- (BOOL)useViewBasedImageRepSnapshotForDragImage;
- (void)delegateDrawingDragAndDropInsertionHints;
- (id)lastDragTarget;
- (void)updateLastDragTargetEditedObject:(id)arg1 fromDraggingInfo:(id)arg2;
- (id)updateLastDragRespectingDragModifierFlagsForTargetEditedObject:(id)arg1 fromDraggingInfo:(id)arg2;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)dragTarget:(id)arg1 didAcceptDraggedObjects:(id)arg2 fromDragInfo:(id)arg3 context:(id)arg4;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (BOOL)isDragLocationWithinTheDraggingSourceEditedObject:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)autoscrollEditedContentWithExternalDragEvent:(id)arg1 animate:(BOOL)arg2;
- (BOOL)shouldBlockDragsUntilHoldFromDragginEntered;
- (id)draggedImageState:(id)arg1;
- (void)springForwardForDragAndDrop;
- (id)springLoadedObjectAtPoint:(struct CGPoint)arg1 criteria:(long long)arg2;
- (BOOL)prepareToAcceptDragInfo:(id)arg1;
- (id)dropTargetEditedObjectForDragInfo:(id)arg1;
- (void)registerDragTypes;
- (id)acceptedDragTypes;
- (BOOL)shouldFilterConstraintChoicesBasedUponAngleOfLine;
- (void)indicateConnectionSuccessForTarget:(id)arg1;
- (id)showTargetIdentifierForEndPoint:(id)arg1;
- (id)endPointsFromBackToFrontAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4 connectionHandler:(id *)arg5;
- (void)revealSpringLoadedObjectAndIndicateSuccess:(id)arg1;
- (id)springLoadedObjectInfoAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4;
- (void)synchronouslyFlashObjectToIndicateSuccess:(id)arg1;
- (id)specifierWithLabel:(id)arg1 frameGenerator:(CDUnknownBlockType)arg2;
- (id)showTargetIdentifierForObject:(id)arg1 showLabel:(BOOL)arg2 duration:(double)arg3;
- (id)showTargetIdentifierForObjects:(id)arg1 showLabels:(BOOL)arg2 duration:(double)arg3;
- (void)addDecoratorActionRect:(struct CGRect)arg1 forEditor:(id)arg2 clipToEditedObjectsClippedRect:(BOOL)arg3;
- (void)addDecoratorActionRect:(struct CGRect)arg1 withOrderingKey:(id)arg2;
- (void)trackMeasurementsWithEvent:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)displayLockedMemberAlertForMembers:(id)arg1;
- (void)invalidateCursorRects;
- (void)addCursorRect:(struct CGRect)arg1 cursor:(id)arg2 forObject:(id)arg3 useForegroundLayer:(BOOL)arg4 clipToParentViews:(BOOL)arg5;
- (void)addCursorRect:(struct CGRect)arg1 cursor:(id)arg2 forObject:(id)arg3;
- (void)didResetCursorRects;
- (void)resetCursorRects;
- (void)willResetCursorRects;
- (void)positionChildEditorFrames;
- (BOOL)isEligibleForBandSelection;
- (BOOL)shouldIncludeParentWhenScrollingToVisible;
- (id)orderedDependentSiblingEditorFrameControllers;
- (void)removeDependentSiblingEditorFrameController:(id)arg1;
- (void)addDependentSiblingEditorFrameController:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)overlayView;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)_accessibilityFauxElementForObject:(id)arg1;
- (struct CGRect)_frameForCanvasOverlayInCanvasView:(id)arg1 scale:(double)arg2;
- (struct CGRect)frameForOverlay:(id)arg1 inCanvasView:(id)arg2 scale:(double)arg3;
- (BOOL)editorCanvasFrame:(id)arg1 interceptDoubleClickedEvent:(id)arg2;
- (void)canvasFrameDidCompleteLayout;
- (void)canvasFrameHasKeyLookDidChange;
- (id)cursorRectAlwaysAtBackKey;
- (void)editorDidChangeSelection:(id)arg1;
- (id)editedObjectsFromBaseToActive;
- (id)editorsFromBaseToActive;
- (struct CGRect)clippedRectForObject:(id)arg1;
- (id)childOfObject:(id)arg1 atPoint:(struct CGPoint)arg2 criteria:(long long)arg3;
- (id)objectAtPoint:(struct CGPoint)arg1 criteria:(long long)arg2;
- (id)objectsFromBackToFrontAtPoint:(struct CGPoint)arg1 criteria:(long long)arg2;
- (void)depthFirstSearchForObjectsAtPoint:(struct CGPoint)arg1 criteria:(long long)arg2 fromObject:(id)arg3 clippedRect:(struct CGRect)arg4 clippingRectForChildren:(struct CGRect)arg5 addingObjectsToArray:(id)arg6;
- (struct CGRect)rectClippedToViewAncestorsForChild:(id)arg1 ofParent:(id)arg2;
- (struct CGRect)clipRect:(struct CGRect)arg1 toViewAncestorsOfObject:(id)arg2;
- (id)delegatedCanvasOverlay:(id)arg1 hitTest:(struct CGPoint)arg2 inCoordinatesSpaceOfView:(id)arg3;
- (void)decrementTargetIdentifierUseCount;
- (void)incrementTargetIdentifierUseCount;
- (void)primitiveInvalidate;
- (void)willRemoveFrameFromCanvas;
- (void)didAddFrameToCanvas;
- (void)deactivate;
- (void)activate;
- (void)willChangeEditorStack;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)noteAncestor:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)editStringWithContext:(id)arg1 forEditor:(id)arg2;
- (BOOL)isFieldEditorOpen;
- (void)closeFieldEditorWithConclusion:(long long)arg1;
- (void)trackMeasurementLinesFromObjects:(id)arg1 toObject:(id)arg2 withEvent:(id)arg3;
- (unsigned long long)dragObjects:(id)arg1 withImage:(id)arg2 inMouseDownEvent:(id)arg3 mouseDraggedEvent:(id)arg4 imageLocation:(struct CGPoint)arg5 allowedOperations:(unsigned long long)arg6 editor:(id)arg7 draggingSourceContext:(id)arg8;
- (id)lastMouseDown;
- (id)targetIdentifier;
@property(readonly, nonatomic) IBDeviceBezel *deviceBezel; // @synthesize deviceBezel;
- (id)descendantActiveEditor;
- (id)parentController;
- (void)setActiveEditor:(id)arg1;
- (id)activeEditor;
- (BOOL)wouldEditObject:(id)arg1;
- (id)objectsFromBackToFrontForCriteria:(long long)arg1;
- (void)enumerateChildrenOfObject:(id)arg1 criteria:(long long)arg2 fromBackToFrontWithBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)unclippedRectForObject:(id)arg1;
- (struct CGRect)rectForBaseEditedObject;
- (id)canvasView;
@property(readonly, nonatomic) IBCanvasViewController *canvasViewController;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

