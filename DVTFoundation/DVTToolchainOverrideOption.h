//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTToolchain, DVTToolchainRegistry, NSDate, NSError, NSString;

@interface DVTToolchainOverrideOption : NSObject
{
    BOOL _isValid;
    BOOL _isBuiltIn;
    BOOL _isActive;
    DVTToolchain *_toolchainForDisplay;
    DVTToolchain *_toolchainForToolchainRegistryDefaultOverride;
    DVTToolchain *_toolchainForXcodebuildCommandLine;
    NSString *_displayName;
    NSString *_shortDisplayName;
    NSString *_origin;
    NSDate *_createdDate;
    NSString *_localizedCreatedDate;
    unsigned long long _fileSize;
    NSString *_localizedFileSize;
    NSError *_validationError;
    DVTToolchainRegistry *_registry;
}

@property(readonly) DVTToolchainRegistry *registry; // @synthesize registry=_registry;
@property(readonly) BOOL isActive; // @synthesize isActive=_isActive;
@property(readonly) BOOL isBuiltIn; // @synthesize isBuiltIn=_isBuiltIn;
@property(readonly) NSError *validationError; // @synthesize validationError=_validationError;
@property(readonly) BOOL isValid; // @synthesize isValid=_isValid;
@property(readonly) NSString *localizedFileSize; // @synthesize localizedFileSize=_localizedFileSize;
@property(readonly) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly) NSString *localizedCreatedDate; // @synthesize localizedCreatedDate=_localizedCreatedDate;
@property(readonly) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(readonly) NSString *origin; // @synthesize origin=_origin;
@property(readonly) NSString *shortDisplayName; // @synthesize shortDisplayName=_shortDisplayName;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) DVTToolchain *toolchainForXcodebuildCommandLine; // @synthesize toolchainForXcodebuildCommandLine=_toolchainForXcodebuildCommandLine;
@property(readonly) DVTToolchain *toolchainForToolchainRegistryDefaultOverride; // @synthesize toolchainForToolchainRegistryDefaultOverride=_toolchainForToolchainRegistryDefaultOverride;
@property(readonly) DVTToolchain *toolchainForDisplay; // @synthesize toolchainForDisplay=_toolchainForDisplay;
- (void).cxx_destruct;
- (id)description;
- (BOOL)activateWithError:(id *)arg1;
- (id)initWithRegistry:(id)arg1 toolchainForDisplay:(id)arg2 toolchainForToolchainRegistryDefaultOverride:(id)arg3 toolchainForXcodebuildCommandLine:(id)arg4 displayNameOverride:(id)arg5 shortDisplayNameOverride:(id)arg6;

@end
