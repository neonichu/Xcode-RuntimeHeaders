//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSColor, NSControl, NSMutableArray, NSPopUpButton, NSString, NSTextField, _NSPredicateDataSourceWrapper, _NSPredicateLogicElement;
@protocol NSPredicateViewDataSource;

@interface NSPredicateView : NSView
{
    BOOL _usesSheet;
    _NSPredicateLogicElement *_mainElement;
    _NSPredicateLogicElement *_selectedElement;
    NSControl *_firstkeyView;
    NSControl *_lastkeyView;
    BOOL _needsPredicateNotification;
    NSString *_lastPredicateString;
    double _originalFrameWidth;
    long long _inCallMakeFirstRepsonder;
    struct CGPoint _mouseDownLocation;
    _NSPredicateLogicElement *_dragNdropElement;
    BOOL _dragFeedback;
    struct CGPoint _dragFeedbackLocation;
    BOOL _dragFeedbackDirection;
    NSMutableArray *_colors;
    NSMutableArray *_labels;
    NSColor *_backgroundColor;
    NSColor *_alternateBackgroundColor;
    unsigned long long _lineIndex;
    unsigned long long _controlSize;
    BOOL _usesPerLinePopUps;
    BOOL _usesPlusMinusButtons;
    int _mode;
    BOOL _usesGraphic;
    BOOL _enabled;
    BOOL _formatError;
    id <NSPredicateViewDataSource> _appDataSource;
    _NSPredicateDataSourceWrapper *_bindingsDataSource;
    NSPopUpButton *_opTypePopUp[2];
    NSTextField *_opTypeLabel[2];
    NSButton *_buttonAnd;
    NSButton *_buttonOr;
    NSButton *_buttonNot;
    NSButton *_buttonAdd;
    NSButton *_buttonRemove;
    NSButton *_buttonUp;
    NSButton *_buttonDown;
    NSButton *_buttonLeft;
    NSButton *_buttonRight;
}

+ (id)findPredicateViewContaining:(id)arg1;
+ (id)bundle;
- (BOOL)formatError;
- (void)setFormatError:(BOOL)arg1;
- (BOOL)worksWhenModal;
- (void)dealloc;
- (void)buttonVar2:(id)arg1;
- (void)buttonVar1:(id)arg1;
- (void)buttonVal2:(id)arg1;
- (void)buttonVal1:(id)arg1;
- (void)buttonKey2:(id)arg1;
- (void)buttonKey1:(id)arg1;
- (void)buttonPredicate:(id)arg1;
- (void)buttonPredicateText:(id)arg1;
- (void)buttonAlterLogic:(id)arg1;
- (void)buttonUp:(id)arg1;
- (void)buttonRight:(id)arg1;
- (void)buttonRemove:(id)arg1;
- (void)buttonOr:(id)arg1;
- (void)buttonNot:(id)arg1;
- (void)buttonLeft:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)buttonAnd:(id)arg1;
- (void)buttonAdd:(id)arg1;
- (id)lastKeyView;
- (id)setLastKeyView:(id)arg1;
- (id)firstKeyView;
- (id)setFirstKeyView:(id)arg1;
- (BOOL)callMakeFirstResponder:(id)arg1;
- (void)textfieldBecameFirstResponder:(id)arg1;
- (void)makeSelected:(id)arg1;
- (id)selectedElement;
- (void)setSelected:(_Bool)arg1 element:(id)arg2;
- (void)_updatePredicateEntry:(id)arg1;
- (void)updatePredicate;
- (void)_updateToolbar:(id)arg1;
- (void)_updateDataSourcePostEvent:(id)arg1;
- (void)reloadDataAction:(id)arg1;
- (void)reloadData;
- (void)setStringPredicate:(id)arg1;
- (void)setPredicateString:(id)arg1;
- (void)setPredicate:(id)arg1;
- (id)predicate;
- (id)predicateString;
- (id)controllerForKey:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)_clear;
- (id)mainElement;
- (void)setMainElement:(id)arg1;
- (double)originalFrameWidth;
- (void)positionLogic;
- (unsigned long long)nextLineIndex;
- (void)resetLineIndex;
- (id)lineElements;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (id)_parseStringPredicate:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)_draggingCommon:(id)arg1;
- (id)_findDestinationElement:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)mouseDragged:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)_giveUpFocus;
- (void)drawRect:(struct CGRect)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)alternateBackgroundColor;
- (void)setAlternateBackgroundColor:(id)arg1;
- (BOOL)isFlipped;
- (void)_drawDragFeedback;
- (void)awakeFromNib;
- (id)toolbarView;
- (BOOL)usesGraphic;
- (void)setUseGraphic:(BOOL)arg1;
- (BOOL)usesPlusMinusButtons;
- (void)setUsesPlusMinusButtons:(BOOL)arg1;
- (int)viewMode;
- (void)setViewMode:(int)arg1;
- (BOOL)isAny;
- (BOOL)usesAnyAll;
- (BOOL)usesPerLinePopUps;
- (void)setUsesPerLinePopUps:(BOOL)arg1;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)arg1;
- (void)_completeRefresh;
- (id)_makeToolbarButton:(id)arg1 size:(double)arg2 selector:(SEL)arg3;
- (void)_choseOpType1:(id)arg1;
- (void)_choseOpType0:(id)arg1;
- (void)_choseOpType:(long long)arg1;
- (id)labelAtIndex:(unsigned long long)arg1;
- (void)setLabel:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)colorAtIndex:(unsigned long long)arg1;
- (void)setColor:(id)arg1 atIndex:(unsigned long long)arg2;
- (double)datePickerHeight;
- (double)datePickerVerticalOffset;
- (double)popUpHeight;
- (double)popUpVerticalOffset;
- (double)textFieldHeight;
- (double)textFieldVerticalOffset;
- (id)fontForUI;
- (id)_internalDataSource;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_unselectKeyView;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)_setEnabledSubControls:(BOOL)arg1;
- (BOOL)usesSheet;
- (void)setUseSheet:(BOOL)arg1;
- (id)lightColor;
- (id)darkColor;

@end

