//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSIntegration.h>

@interface XCSIntegration (IDEKit)
+ (id)durationStringFromTimeInterval:(double)arg1;
+ (void)componentsFromBotIntegrationURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)botIntegrationURLForIntegrationWithID:(id)arg1 botIdentifier:(id)arg2 serviceIdentifier:(id)arg3;
+ (id)botIntegrationURLForIntegrationWithID:(id)arg1 botIdentifier:(id)arg2 server:(id)arg3;
- (id)title;
- (id)integrationTypeString;
@end

