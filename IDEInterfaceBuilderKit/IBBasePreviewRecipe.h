//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractPreviewRecipe.h>

@class DVTLocale;

@interface IBBasePreviewRecipe : IBAbstractPreviewRecipe
{
    DVTLocale *_language;
}

@property(retain) DVTLocale *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (id)propertyListRepresentation;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithLanguage:(id)arg1;

@end

