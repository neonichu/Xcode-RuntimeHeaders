//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelEditor/IDEDMGeniusResultsFinder.h>

@interface IDEDataModelDocumentResultsFinder : IDEDMGeniusResultsFinder
{
}

+ (Class)editorDocumentClass;
- (BOOL)_getUpdateGeniusResultsPhaseOneBlock:(CDUnknownBlockType *)arg1 phaseTwoBlock:(CDUnknownBlockType *)arg2 phaseThreeBlock:(CDUnknownBlockType *)arg3;
- (id)_geniusLocationsForModelObject:(id)arg1;
- (id)_geniusSymbolsForEntity:(id)arg1;
- (id)_classSymbolsForEntity:(id)arg1;
- (id)geniusCategoryIdentifier;

@end

