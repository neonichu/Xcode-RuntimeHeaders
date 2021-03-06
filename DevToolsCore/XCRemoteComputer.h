//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/XCRemoteComputer-Protocol.h>

@class NSMutableDictionary, NSString, XCPlatformSpecification, XCRemoteExecutable;

@interface XCRemoteComputer : NSObject <XCRemoteComputer>
{
    BOOL deviceAvailable;
    NSMutableDictionary *_data;
    XCRemoteExecutable *currentRemoteExecutable;
}

+ (id)keyPathsForValuesAffectingDeviceSoftwareVersion;
+ (id)keyPathsForValuesAffectingDeviceIsIgnored;
+ (id)keyPathsForValuesAffectingCachePath;
+ (id)keyPathsForValuesAffectingDeviceArchitecture;
+ (id)keyPathsForValuesAffectingDeviceName;
+ (id)keyPathsForValuesAffectingDeviceIdentifier;
+ (id)keyPathsForValuesAffectingPlatform;
+ (BOOL)handleDroppedFile:(id)arg1;
+ (BOOL)shouldHandleDroppedFile:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)itemWithPlistRepresentation:(id)arg1;
+ (void)loadOrganizerCategories;
+ (void)beginListeningForDevices;
@property BOOL deviceAvailable; // @synthesize deviceAvailable;
@property(readonly) NSMutableDictionary *data; // @synthesize data=_data;
- (int)debuggerArchitectureMode;
- (id)setCurrentExecutable:(id)arg1;
- (id)currentRemoteExecutable;
- (id)debuggerAttachList;
- (void)renameDevice:(id)arg1;
@property(readonly) BOOL canRenameDevice;
- (void)willBeForgotten;
- (void)didExecute:(id)arg1;
- (void)_willExecuteComplete;
- (void)willExecuteFailed;
- (void)willExecuteCompleted;
- (BOOL)willExecute:(id)arg1 debug:(BOOL)arg2 onPort:(long long *)arg3 performInstall:(BOOL)arg4;
- (void)willExecuteAsync:(id)arg1 shouldInstall:(BOOL)arg2;
- (BOOL)useAsyncWillExecute;
- (BOOL)preflightExecutable:(id)arg1;
- (BOOL)canExecute;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property BOOL deviceIsIgnored;
@property(copy) NSString *deviceSoftwareVersion;
@property(readonly) BOOL deviceHasUI;
- (void)setDeviceArchitecture:(id)arg1;
@property(readonly, copy) NSString *deviceArchitecture;
@property(copy) NSString *deviceName;
@property(copy) NSString *deviceIdentifier;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
@property(readonly) BOOL deviceIsBusy;
@property(readonly) BOOL deviceIsTransient;
@property(readonly) XCPlatformSpecification *platform;
@property(readonly, copy) NSString *platformIdentifier;
@property(readonly) NSString *cachePath;
- (BOOL)shouldApplicationTerminate;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)init;
- (id)plistRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

