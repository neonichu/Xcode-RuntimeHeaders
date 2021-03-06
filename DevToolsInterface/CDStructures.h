//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CC_MD5state_st {
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct NSObject {
    Class _field1;
};

struct PBXButtonState {
    long long _field1;
    char _field2;
    char _field3;
    char _field4;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PBXChangeEntry {
    struct _NSRange _field1;
    long long _field2;
    struct _NSRange _field3;
    long long _field4;
};

struct _PBXDateTimestampMapping {
    double _field1;
    unsigned long long _field2;
};

struct _PBXExtendedMenuItemFlags {
    unsigned int alternateByDefault:1;
    unsigned int RESERVED:31;
};

struct _PBXLineOffsetTable {
    unsigned long long capacity;
    unsigned long long count;
    unsigned long long *offsets;
    unsigned long long deferredAdjustmentIndex;
    long long deferredAdjustment;
};

struct _XCBuildAnalyzerResultsNavigatorFlags {
    unsigned int needsToUpdatePopUpButton:1;
    unsigned int showsAnnotationIndicator:1;
    unsigned int RESERVED:30;
};

struct _XCCustomizerFlags {
    unsigned int hasChanges:1;
    unsigned int RESERVED:31;
};

struct _XCDiffComparatorCellFlags {
    unsigned int diffMergeDirection:3;
    unsigned int drawsTitle:1;
    unsigned int drawsDiffMergeDirection:1;
    unsigned int RESERVED:27;
};

struct _XCDiffComparatorFlags {
    unsigned int updatingDiffContext:1;
    unsigned int shouldCloseFileDocuments:1;
    unsigned int storesMergedResultsToRightFileDocument:1;
    unsigned int delegateRespondsToDidFinishLoadingLeftFileDocument:1;
    unsigned int delegateRespondsToDidFinishLoadingRightFileDocument:1;
    unsigned int RESERVED:27;
};

struct _XCDiffComparatorViewFlags {
    unsigned int comparatorViewStyle:1;
    unsigned int modificationGranularity:1;
    unsigned int allowsMultipleSelection:1;
    unsigned int allowsEmptySelection:1;
    unsigned int allowsUndo:1;
    unsigned int allowsUserCustomization:1;
    unsigned int needsInvalidateDiffHunkRects:1;
    unsigned int showsDiffHunks:1;
    unsigned int showsChangeNumbers:1;
    unsigned int showsMergeDirection:1;
    unsigned int showsModification:1;
    unsigned int mergesModification:1;
    unsigned int drawsHorizontalDividerBorder:1;
    unsigned int drawsVerticalDividerBorder:1;
    unsigned int setAcceptsMouseMoved:1;
    unsigned int wasAcceptingMouseMoved:1;
    unsigned int leftViewConformsToDiffHunkMarking:1;
    unsigned int rightViewConformsToDiffHunkMarking:1;
    unsigned int mergeViewConformsToDiffHunkMarking:1;
    unsigned int delegateRespondsToSelectionDidChange:1;
    unsigned int delegateRespondsToToolTipForDiffDescriptor:1;
    unsigned int delegateRespondsToWritablePasteboardTypes:1;
    unsigned int delegateRespondsToWriteDiffDescriptor:1;
    unsigned int delegateRespondsToUndoManager:1;
    unsigned int userChangedShowsChangeNumbers:1;
    unsigned int userChangedShowsMergeDirection:1;
    unsigned int userChangedShowsModification:1;
    unsigned int userChangedDiffHunkColor:1;
    unsigned int selectionPostingDisableCount:5;
};

struct _XCDiffHunkMarkerFlags {
    unsigned int hasValidLeftHunkRect:1;
    unsigned int hasValidRightHunkRect:1;
    unsigned int hasValidMergeHunkRect:1;
    unsigned int RESERVED:29;
};

struct _XCDiffScrollViewFlags {
    unsigned int showsDiffHunkMarkers:1;
    unsigned int leftViewFrameDidChange:1;
    unsigned int rightViewFrameDidChange:1;
    unsigned int mergeViewFrameDidChange:1;
    unsigned int RESERVED:27;
};

struct _XCDiffScrollerFlags {
    unsigned int segmentsNeedUpdate:1;
    unsigned int drawsSegments:1;
    unsigned int RESERVED:30;
};

struct _XCDiffToken {
    struct _NSRange _field1;
    unsigned long long _field2;
    int _field3;
};

struct _XCEPoint {
    long long x;
    long long y;
};

struct _XCESize {
    long long width;
    long long height;
};

struct _XCElementInset {
    double left;
    double top;
    double right;
    double bottom;
};

struct _XCIncrementalFinderFlags {
    unsigned int findType:1;
    unsigned int findIgnoresCase:1;
    unsigned int finderMode:1;
    unsigned int findWraps:1;
    unsigned int replaceInSelectedText:1;
    unsigned int matchStyle:2;
    unsigned int userIsChangingFindString:1;
    unsigned int userIsChangingReplaceString:1;
    unsigned int needsHighlightFoundRanges:1;
    unsigned int pendingHighlightFoundRanges:1;
    unsigned int showingFirstFindResult:1;
    unsigned int disablingPerformFindCount:7;
    unsigned int registeredForWindowUpdates:1;
    unsigned int dontChangeFocusToTextView:1;
};

struct _XCRefactoringLineInfo {
    struct _NSRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    SEL _field2;
    char _field3;
    id _field4;
} CDStruct_3310b9fc;

typedef struct {
    unsigned int _reserved:25;
    unsigned int _isDir:1;
    unsigned int _isLink:1;
    unsigned int _isReadableWasDetermined:1;
    unsigned int _isReadable:1;
    unsigned int _fileExists:1;
    unsigned int _isBuildable:1;
    unsigned int _hasSnapshots:1;
} CDStruct_b0cf6b6f;

typedef struct {
    id _field1;
    long long _field2;
    long long _field3;
    struct _NSRange _field4;
    struct _NSRange _field5;
    id _field6;
    id _field7;
    char *_field8;
    id _field9;
    unsigned short _field10;
    char _field11;
    id _field12;
} CDStruct_03c79a60;

// Ambiguous groups
typedef struct {
    unsigned int doesDraggingEntered:1;
    unsigned int doesDraggingUpdated:1;
    unsigned int doesDraggingExited:1;
    unsigned int doesPrepare:1;
    unsigned int doesPerform:1;
    unsigned int doesConclude:1;
    unsigned int _reserved:26;
} CDStruct_f97c376c;

typedef struct {
    unsigned int _adapterRespondsTo_stringForObjectValue:1;
    unsigned int _adapterRespondsTo_getObjectValue:1;
    unsigned int _reserved:30;
} CDStruct_47239cbd;

typedef struct {
    unsigned int observingProject:1;
    unsigned int RESERVED:31;
} CDStruct_3d6bd516;

