//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDETemplateTextSubstitutionFactory.h>

@class NSString;

@interface IDERefactoringCreateSuperclassTemplateFactory : IDETemplateTextSubstitutionFactory
{
    NSString *_superclassName;
    NSString *_importFileName;
}

@property(copy) NSString *importFileName; // @synthesize importFileName=_importFileName;
@property(copy) NSString *superclassName; // @synthesize superclassName=_superclassName;
- (void).cxx_destruct;
- (BOOL)shouldAddCreatedDocumentsToVersionControl:(id)arg1;
- (id)additionalMacrosForContext:(id)arg1;
- (id)initWithSuperclassName:(id)arg1 importFileName:(id)arg2;

@end

