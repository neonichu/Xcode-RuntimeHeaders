//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, _UXFlowLayoutInfo;

__attribute__((visibility("hidden")))
@interface _UXFlowLayoutSection : NSObject
{
    NSMutableArray *_items;
    NSMutableArray *_rows;
    struct NSEdgeInsets _sectionMagins;
    double _verticalInterstice;
    double _horizontalInterstice;
    struct CGRect _headerFrame;
    struct CGRect _footerFrame;
    double _headerDimension;
    double _footerDimension;
    BOOL _isValid;
    struct CGRect _frame;
    NSDictionary *_rowAlignmentOptions;
    BOOL _fixedItemSize;
    struct CGSize _itemSize;
    double _otherMargin;
    double _beginMargin;
    double _endMargin;
    double _actualGap;
    double _lastRowBeginMargin;
    double _lastRowEndMargin;
    double _lastRowActualGap;
    BOOL _lastRowIncomplete;
    long long _itemsCount;
    long long _itemsByRowCount;
    long long _indexOfImcompleteRow;
    _UXFlowLayoutInfo *_layoutInfo;
    struct NSEdgeInsets _sectionMargins;
}

@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(readonly, nonatomic) long long itemsByRowCount; // @synthesize itemsByRowCount=_itemsByRowCount;
@property(nonatomic) long long itemsCount; // @synthesize itemsCount=_itemsCount;
@property(readonly, nonatomic) long long indexOfImcompleteRow; // @synthesize indexOfImcompleteRow=_indexOfImcompleteRow;
@property(readonly, nonatomic) BOOL lastRowIncomplete; // @synthesize lastRowIncomplete=_lastRowIncomplete;
@property(readonly, nonatomic) double lastRowActualGap; // @synthesize lastRowActualGap=_lastRowActualGap;
@property(readonly, nonatomic) double lastRowEndMargin; // @synthesize lastRowEndMargin=_lastRowEndMargin;
@property(readonly, nonatomic) double lastRowBeginMargin; // @synthesize lastRowBeginMargin=_lastRowBeginMargin;
@property(readonly, nonatomic) double actualGap; // @synthesize actualGap=_actualGap;
@property(readonly, nonatomic) double endMargin; // @synthesize endMargin=_endMargin;
@property(readonly, nonatomic) double beginMargin; // @synthesize beginMargin=_beginMargin;
@property(readonly, nonatomic) double otherMargin; // @synthesize otherMargin=_otherMargin;
@property(nonatomic) BOOL fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;
@property(retain, nonatomic) NSDictionary *rowAlignmentOptions; // @synthesize rowAlignmentOptions=_rowAlignmentOptions;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) _UXFlowLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(nonatomic) struct CGRect footerFrame; // @synthesize footerFrame=_footerFrame;
@property(nonatomic) struct CGRect headerFrame; // @synthesize headerFrame=_headerFrame;
@property(nonatomic) double footerDimension; // @synthesize footerDimension=_footerDimension;
@property(nonatomic) double headerDimension; // @synthesize headerDimension=_headerDimension;
@property(nonatomic) struct NSEdgeInsets sectionMargins; // @synthesize sectionMargins=_sectionMargins;
@property(nonatomic) double horizontalInterstice; // @synthesize horizontalInterstice=_horizontalInterstice;
@property(nonatomic) double verticalInterstice; // @synthesize verticalInterstice=_verticalInterstice;
@property(readonly, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (id)copyFromLayoutInfo:(id)arg1;
- (id)snapshot;
- (id)addRow;
- (id)addItem;
- (void)dealloc;
- (void)recomputeFromIndex:(long long)arg1;
- (void)computeLayout;
- (void)invalidate;
- (id)init;

@end

