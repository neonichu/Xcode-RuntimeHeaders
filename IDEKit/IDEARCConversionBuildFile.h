//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEARCConversionTarget, IDEFileReference, NSImage, NSString;

@interface IDEARCConversionBuildFile : NSObject
{
    IDEFileReference *_fileReference;
    IDEARCConversionTarget *_target;
    NSImage *_iconImage;
    NSString *_warningMessage;
    BOOL _enablesARC;
}

@property BOOL enablesARC; // @synthesize enablesARC=_enablesARC;
@property(readonly, copy) NSImage *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, copy) NSString *warningMessage; // @synthesize warningMessage=_warningMessage;
@property(readonly) IDEARCConversionTarget *target; // @synthesize target=_target;
@property(readonly, copy) IDEFileReference *fileReference; // @synthesize fileReference=_fileReference;
- (void).cxx_destruct;
- (id)_treeControllerWarningMessage;
- (id)_treeControllerChildren;
- (void)updateBuildSettings;
- (void)disableOverridingBuildSettings;
- (void)enableOverridingBuildSettings;
- (void)_setEnablesARC:(BOOL)arg1 overridingOnly:(BOOL)arg2;
@property(readonly, copy) NSString *displayName;
- (id)initWithFileReference:(id)arg1 target:(id)arg2;

@end

