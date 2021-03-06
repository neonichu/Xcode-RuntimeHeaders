//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

#import <DevToolsInterface/NSTextFieldDelegate-Protocol.h>
#import <DevToolsInterface/XCRefactoringTransformationSetUpModule-Protocol.h>

@class NSDictionary, NSMapTable, NSMutableSet, NSString, XCRefactoringSetUpModule, XCRefactoringTransformationSetUpRow2Module;

@interface XCRefactoringTransformationSetUpModule : PBXProjectModule <NSTextFieldDelegate, XCRefactoringTransformationSetUpModule>
{
    BOOL _isPopulatedWithSetUpInfo;
    BOOL _isPopulatedWithPostInitialFileInfo;
    BOOL _hasUserInputOccurred;
    XCRefactoringSetUpModule *_setUpModule;
    NSMutableSet *_textFields;
    NSMapTable *_textFieldToInputValidatorMap;
    NSDictionary *_snapshot;
    NSDictionary *_snapshotTextFieldsForKeys;
    XCRefactoringTransformationSetUpRow2Module *_transformationSetUpRow2Module;
}

+ (Class)classForTransformKey:(id)arg1;
- (void)dealloc;
- (void)setSnapshot:(id)arg1;
- (void)setTextInputValidator:(id)arg1 forField:(id)arg2;
- (id)textInputValidatorForField:(id)arg1;
- (void)notifyOfTextField:(id)arg1 withFormatter:(id)arg2;
- (id)initWithModule:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)control:(id)arg1 didFailToValidatePartialString:(id)arg2 errorDescription:(id)arg3;
- (void)restoreUserInputSnapshot;
- (id)snapshotTextFieldsForKeys;
- (void)setSnapshotFromTextField:(id)arg1;
- (void)addToUserInput:(id)arg1;
- (void)setTransformationSetUpRow2Module:(id)arg1;
- (void)setPreviewEnabledRule:(int)arg1;
- (void)makeFirstResponder;
- (void)setSelectionString:(id)arg1;
- (id)resizableView;
- (void)userInputValuesChanged;
- (void)setUserInputHasOccurred;
- (void)getPreviewEnabledRule:(int *)arg1 localizedMessage:(id *)arg2;
- (id)localizedMessage;
- (id)userInput;
- (void)populateWithSetUpInfo:(id)arg1 postInitialFileInfo:(id)arg2;
- (id)_snapshotKeyForTextField:(id)arg1;
- (void)_setSpellingStateForArray:(id)arg1;
- (void)_populateWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

