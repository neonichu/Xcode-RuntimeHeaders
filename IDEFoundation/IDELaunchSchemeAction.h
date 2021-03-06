//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESchemeAction.h>

#import <IDEFoundation/DVTXMLUnarchiving-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, IDEDeviceAppDataReference, IDELocationScenarioReference, IDESchemeOptionReference, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSNumber, NSString;

@interface IDELaunchSchemeAction : IDESchemeAction <DVTXMLUnarchiving>
{
    NSMutableArray *_commandLineArgumentEntries;
    NSMutableArray *_environmentVariableEntries;
    NSMutableArray *_additionalSourceCodeEntries;
    NSMutableArray *_additionalDSYMEntries;
    DVTNotificationToken *_buildablesToken;
    NSMutableDictionary *_additionalSchemeSettings;
    DVTObservingToken *_launchSessionObservingToken;
    NSDictionary *_cachedAppExtensionBuiltPaths;
    BOOL _mallocStackLoggingSelected;
    BOOL _debugXPCServices;
    BOOL _enableAddressSanitizer;
    BOOL _enableThreadSanitizer;
    BOOL _stopOnEveryThreadSanitizerIssue;
    BOOL _useCustomWorkingDirectory;
    BOOL _allowLocationSimulation;
    BOOL _showNonLocalizedStrings;
    BOOL _ignoresPersistentStateOnLaunch;
    BOOL _debugDocumentVersioning;
    BOOL _enableGPUValidationMode;
    BOOL _queueDebuggingEnabled;
    unsigned int _debugProcessAsUID;
    int _launchStyle;
    int _enableGPUFrameCaptureMode;
    int _internalIOSLaunchStyle;
    NSString *_selectedDebuggerIdentifier;
    NSString *_selectedLauncherIdentifier;
    NSString *_resolvedCustomWorkingDirectory;
    NSMutableOrderedSet *_debugServiceExtensionContents;
    NSString *_selectedMallocStackLoggingType;
    IDEDeviceAppDataReference *_deviceAppDataReference;
    NSDictionary *_additionalOptionEntriesDict;
    unsigned long long _launchAutomaticallySubstyle;
    NSString *_customWorkingDirectory;
    NSString *_language;
    NSString *_region;
    IDELocationScenarioReference *_locationScenarioReference;
    IDESchemeOptionReference *_routingCoverageFileReference;
    NSNumber *_simulatorIPhoneDisplay;
    NSNumber *_simulatorIPadDisplay;
    NSString *_internalIOSSubstitutionApp;
    long long _consoleMode;
    NSString *_debugServiceExtensionContentsString;
    NSString *_debugServiceExtension;
    NSString *_debugAsWhichUser;
}

+ (id)keyPathsForValuesAffectingDebugProcessAsUID;
+ (id)keyPathsForValuesAffectingLaunchDueToFetchEvent;
+ (id)keyPathsForValuesAffectingDoesNonActionWork;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (void)initialize;
@property(copy) NSString *debugAsWhichUser; // @synthesize debugAsWhichUser=_debugAsWhichUser;
@property(copy) NSString *debugServiceExtension; // @synthesize debugServiceExtension=_debugServiceExtension;
@property(copy) NSString *debugServiceExtensionContentsString; // @synthesize debugServiceExtensionContentsString=_debugServiceExtensionContentsString;
@property long long consoleMode; // @synthesize consoleMode=_consoleMode;
@property BOOL queueDebuggingEnabled; // @synthesize queueDebuggingEnabled=_queueDebuggingEnabled;
@property(copy) NSString *internalIOSSubstitutionApp; // @synthesize internalIOSSubstitutionApp=_internalIOSSubstitutionApp;
@property int internalIOSLaunchStyle; // @synthesize internalIOSLaunchStyle=_internalIOSLaunchStyle;
@property(retain) NSDictionary *additionalSchemeSettings; // @synthesize additionalSchemeSettings=_additionalSchemeSettings;
@property BOOL enableGPUValidationMode; // @synthesize enableGPUValidationMode=_enableGPUValidationMode;
@property int enableGPUFrameCaptureMode; // @synthesize enableGPUFrameCaptureMode=_enableGPUFrameCaptureMode;
@property BOOL debugDocumentVersioning; // @synthesize debugDocumentVersioning=_debugDocumentVersioning;
@property BOOL ignoresPersistentStateOnLaunch; // @synthesize ignoresPersistentStateOnLaunch=_ignoresPersistentStateOnLaunch;
@property(retain) NSNumber *simulatorIPadDisplay; // @synthesize simulatorIPadDisplay=_simulatorIPadDisplay;
@property(retain) NSNumber *simulatorIPhoneDisplay; // @synthesize simulatorIPhoneDisplay=_simulatorIPhoneDisplay;
@property(retain) IDESchemeOptionReference *routingCoverageFileReference; // @synthesize routingCoverageFileReference=_routingCoverageFileReference;
@property(retain) IDELocationScenarioReference *locationScenarioReference; // @synthesize locationScenarioReference=_locationScenarioReference;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property BOOL showNonLocalizedStrings; // @synthesize showNonLocalizedStrings=_showNonLocalizedStrings;
@property BOOL allowLocationSimulation; // @synthesize allowLocationSimulation=_allowLocationSimulation;
@property(copy, nonatomic) NSString *customWorkingDirectory; // @synthesize customWorkingDirectory=_customWorkingDirectory;
@property BOOL useCustomWorkingDirectory; // @synthesize useCustomWorkingDirectory=_useCustomWorkingDirectory;
@property(nonatomic) unsigned long long launchAutomaticallySubstyle; // @synthesize launchAutomaticallySubstyle=_launchAutomaticallySubstyle;
@property(nonatomic) int launchStyle; // @synthesize launchStyle=_launchStyle;
@property BOOL stopOnEveryThreadSanitizerIssue; // @synthesize stopOnEveryThreadSanitizerIssue=_stopOnEveryThreadSanitizerIssue;
@property BOOL enableThreadSanitizer; // @synthesize enableThreadSanitizer=_enableThreadSanitizer;
@property BOOL enableAddressSanitizer; // @synthesize enableAddressSanitizer=_enableAddressSanitizer;
@property BOOL debugXPCServices; // @synthesize debugXPCServices=_debugXPCServices;
@property(nonatomic) unsigned int debugProcessAsUID; // @synthesize debugProcessAsUID=_debugProcessAsUID;
@property(readonly) NSDictionary *additionalOptionEntriesDict; // @synthesize additionalOptionEntriesDict=_additionalOptionEntriesDict;
@property(retain) IDEDeviceAppDataReference *deviceAppDataReference; // @synthesize deviceAppDataReference=_deviceAppDataReference;
@property(copy) NSString *selectedLauncherIdentifier; // @synthesize selectedLauncherIdentifier=_selectedLauncherIdentifier;
- (void).cxx_destruct;
- (void)addRoutingCoverageFileReference:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addLocationScenarioReference:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addDeviceAppData:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addMacroExpansion:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addAdditionalDSYMFilesAndDirs:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addAdditionalSourceCodeFilesAndDirs:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addAdditionalOptions:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addEnvironmentVariables:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addCommandLineArguments:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (BOOL)needsNewSchemeVersionForInternalIOSLaunchStyleAndOthers;
- (BOOL)needsNewSchemeVersionForLocationSimulation;
- (BOOL)needsNewSchemeVersionForAppDataPackage;
- (void)setAskForAppToLaunchFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
@property BOOL askForAppToLaunch;
@property BOOL launchWithComplication;
@property BOOL launchWithGlance;
@property BOOL launchWithNotification;
@property BOOL staticNotificationSelected;
- (void)_setLaunchOption:(unsigned long long)arg1 enabled:(BOOL)arg2;
- (BOOL)_launchOptionIsSet:(unsigned long long)arg1;
- (void)setUseCustomWorkingDirectoryFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
@property(readonly) BOOL shouldAllowGPUOptions;
- (void)setConsoleModeFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setQueueDebuggingEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setLaunchAutomaticallySubstyleFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setInternalIOSLaunchStyleFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setInternalIOSSubstitutionAppFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setSimulatorIPadDisplayFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setSimulatorIPhoneDisplayFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setRegionFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setLanguageFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setShowNonLocalizedStringsFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setAllowLocationSimulationFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setEnableGPUValidationModeFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setEnableGPUFrameCaptureModeFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setDebugServiceExtensionContentsStringFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setDebugServiceExtensionFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setCustomLaunchCommandFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setStopOnEveryThreadSanitizerIssueFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setEnableThreadSanitizerFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setEnableAddressSanitizerFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setDebugXPCServicesFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setDebugDocumentVersioningFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setIgnoresPersistentStateOnLaunchFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
@property(copy) NSMutableOrderedSet *debugServiceExtensionContents; // @synthesize debugServiceExtensionContents=_debugServiceExtensionContents;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)runOperationForSchemeOperationParameters:(id)arg1 withBuildOperation:(id)arg2 buildParameters:(id)arg3 buildableProductDirectories:(id)arg4 schemeCommand:(id)arg5 schemeActionRecord:(id)arg6 outError:(id *)arg7 actionCallbackBlock:(CDUnknownBlockType)arg8;
- (BOOL)_tweakEnvironmentVariables:(id)arg1 buildParameters:(id)arg2 buildableProductDirectories:(id)arg3 schemeCommand:(id)arg4 schemeActionRecord:(id)arg5 shouldSetupRecordedFrames:(BOOL)arg6 optimizationProfileFilePath:(id *)arg7 extensionInfos:(id)arg8 outError:(id *)arg9;
- (id)_preferredBuildableForSchemeCommand:(id)arg1 buildParameters:(id)arg2;
- (void)_restoreLaunchStyleForMetalRemoteDebuggingWithEnvironmentVariables:(id)arg1;
- (BOOL)_overrideParametersForMetalRemoteDebuggingWithEnvironmentVariables:(id)arg1 outError:(id *)arg2;
- (BOOL)_isMetalRemoteDebuggingEnabledWithEnvironmentVariables:(id)arg1;
- (BOOL)hasAppExtensionsInTargets;
- (void)_setupRecordedFramesInEnvironmentVariables:(id)arg1 runDestination:(id)arg2;
- (void)_modifyEnvironmentForMallocStackLogging:(id)arg1;
- (void)_setSelectedMallocStackLoggingType:(id)arg1;
@property BOOL mallocStackLoggingSelected; // @synthesize mallocStackLoggingSelected=_mallocStackLoggingSelected;
@property(copy) NSString *selectedMallocStackLoggingType; // @synthesize selectedMallocStackLoggingType=_selectedMallocStackLoggingType;
@property(readonly) NSArray *availableMallocStackLoggingTypes;
@property(retain) NSString *customLaunchCommand;
- (id)customLaunchCommandMacroExpanded;
- (void)setLaunchDueToFetchEvent:(BOOL)arg1;
- (BOOL)launchDueToFetchEvent;
@property(copy) NSString *selectedDebuggerIdentifier; // @synthesize selectedDebuggerIdentifier=_selectedDebuggerIdentifier;
@property(readonly) NSArray *additionalDSYMFilePaths;
@property(readonly) NSArray *additionalSourceCodeFilePaths;
- (id)_additionalOptions;
- (id)_additionalOptionEntries;
- (id)_expandMacrosInString:(id)arg1 forBuildParameters:(id)arg2;
- (id)_expandMacrosInString:(id)arg1;
@property(readonly) NSString *resolvedCustomWorkingDirectory; // @synthesize resolvedCustomWorkingDirectory=_resolvedCustomWorkingDirectory;
- (id)environmentVariablesForBuildParameters:(id)arg1;
- (id)commandLineArgumentsForDevice:(id)arg1 buildParameters:(id)arg2;
- (BOOL)doesNonActionWork;
- (id)subtitle;
- (id)name;
- (void)_updateBuildableToUseForMacroExpansion;
- (void)updateBuildableForChangeInRunnable;
- (void)setRunContext:(id)arg1;
- (void)primitiveInvalidate;
- (id)_createAdditionalOptionsDict;
- (id)notificationPayloadFileReferences;
- (void)_setupQueueDebuggingState;
- (void)_commonInit;
- (BOOL)internalSettings;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)init;

// Remaining properties
@property(copy) NSArray *additionalDSYMEntries; // @dynamic additionalDSYMEntries;
@property(copy) NSArray *additionalSourceCodeEntries; // @dynamic additionalSourceCodeEntries;
@property(copy) NSArray *commandLineArgumentEntries; // @dynamic commandLineArgumentEntries;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSArray *environmentVariableEntries; // @dynamic environmentVariableEntries;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableAdditionalDSYMEntries; // @dynamic mutableAdditionalDSYMEntries;
@property(readonly) NSMutableArray *mutableAdditionalSourceCodeEntries; // @dynamic mutableAdditionalSourceCodeEntries;
@property(readonly) NSMutableArray *mutableCommandLineArgumentEntries; // @dynamic mutableCommandLineArgumentEntries;
@property(readonly) NSMutableArray *mutableEnvironmentVariableEntries; // @dynamic mutableEnvironmentVariableEntries;
@property(readonly) Class superclass;

@end

