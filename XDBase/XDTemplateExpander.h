//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableString;

@interface XDTemplateExpander : NSObject
{
    NSMutableDictionary *_settingsDict;
    NSMutableString *_templateString;
    NSMutableArray *_errorArray;
    BOOL _isInLoop;
    BOOL _isInIF;
    BOOL _isInNotIF;
    BOOL _continueGeneration;
}

+ (id)expandTemplateString:(id)arg1 withSetting:(id)arg2 errorsArray:(id)arg3;
- (id)expandLoopString:(id)arg1;
- (id)expandConditionalString:(id)arg1 negate:(BOOL)arg2;
- (id)substituteReference:(id)arg1;
- (id)expandString:(id)arg1;
- (id)expandedResult;
- (void)dealloc;
- (id)initWithTemplateString:(id)arg1 settings:(id)arg2 errorsArray:(id)arg3;

@end

