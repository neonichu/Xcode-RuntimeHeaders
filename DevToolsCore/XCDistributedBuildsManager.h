//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/NSNetServiceBrowserDelegate-Protocol.h>
#import <DevToolsCore/NSNetServiceDelegate-Protocol.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSNetServiceBrowser, NSString;

@interface XCDistributedBuildsManager : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSNetServiceBrowser *_serviceBrowser;
    NSMutableSet *_distccBuildServers;
    NSMutableSet *_dnbBuildServers;
    NSMutableSet *_distccHostsToUseForBuilding;
    NSMutableSet *_dnbHostsToUseForBuilding;
    NSMutableDictionary *_dnbBuildSetsByName;
    NSMutableDictionary *_distccBuildSetsByName;
    NSDate *_lastBuildRefresh;
    NSMutableDictionary *_cachedBuildServerNamesByCompilerVersion;
    NSMutableDictionary *_cachedNumberOfBuildServersByCompilerVersion;
    long long _maxNumberOfDistributedTasks;
    NSString *_distccPath;
    NSMutableSet *_servicesBeingAdded;
    NSMutableDictionary *_environment;
    int _distributedBuildSystemInUse;
    unsigned int _shouldUseDistributedBuilds:1;
    unsigned int _runningCommandLineTool:1;
    unsigned int _shouldDistributeToBonjourHosts:1;
    int _distccVerbose;
    BOOL _bonjourIsSelected;
}

+ (void)processWillTerminate;
+ (id)sharedDistributedBuildsManager;
+ (void)initialize;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)stopOrStartMonitoringHostsIfNeeded:(BOOL)arg1;
- (id)environmentVars;
- (void)setEnvironmentVars:(id)arg1;
- (void)refreshAllHosts;
- (BOOL)shouldEnableVerboseLogging;
- (void)buildHostInfoChanged:(id)arg1;
- (void)removeHostWithSpec:(id)arg1 hostType:(int)arg2;
- (id)addHostWithSpec:(id)arg1 hostType:(int)arg2;
- (id)addHostWithSpec:(id)arg1 hostType:(int)arg2 bonjourServiceName:(id)arg3;
- (id)addHostWithSpec:(id)arg1 hostType:(int)arg2 bonjourServiceName:(id)arg3 port:(long long)arg4;
- (id)hostWithSpec:(id)arg1 hostType:(int)arg2;
- (void)_postChangeNotice:(id)arg1;
- (void)_invalidateCaches;
- (id)hostListForBuildServersCompatibleWithCompilerVersion:(id)arg1 andSDKVersion:(id)arg2 estimatedRemainingJobCount:(long long)arg3;
- (id)hostListForStartingPumpMode;
- (id)hostsToUseForDistributedBuildWithCompilerVersion:(id)arg1 andSDKVersion:(id)arg2;
- (id)hostsToUseForDistributedBuildWithHostType:(int)arg1;
- (void)setHostsToUseForDistributedBuild:(id)arg1 hostType:(int)arg2;
- (void)removeHostFromHostsToUseForDistributedBuilds:(id)arg1;
- (void)addHostToHostsToUseForDistributedBuilds:(id)arg1;
- (void)setBonjourIsSelected:(BOOL)arg1;
- (id)allBonjourServers;
- (id)buildSetsForHostType:(int)arg1;
- (unsigned long long)estimatedNumberOfParallelTasksForCompiler:(id)arg1;
- (void)setDistributedBuildSystemInUse:(int)arg1;
- (int)distributedBuildSystemInUse;
- (void)setShouldUseDedicatedNetworkBuilds:(BOOL)arg1;
- (BOOL)shouldUseDedicatedNetworkBuilds;
- (void)setShouldDistributeToBonjourServers:(BOOL)arg1;
- (void)setShouldDistributeToBonjourServers:(BOOL)arg1 saveInDefaults:(BOOL)arg2;
- (BOOL)shouldDistributeToBonjourServers;
- (void)setShouldUseDistributedBuilds:(BOOL)arg1;
- (void)setShouldUseDistributedBuilds:(BOOL)arg1 saveInDefaults:(BOOL)arg2;
- (BOOL)shouldUseDistributedBuilds;
- (id)localHost;
- (id)distributedBuildToolCommandPath;
- (id)distccCommandPath;
- (BOOL)isUsingDistcc;
- (BOOL)isRunningDistributedBuildDaemon:(id)arg1;
- (void)_processWillTerminate;
- (void)_loadInitialHosts;
- (void)dealloc;
- (id)init;
- (id)_loadBuildSetsForHostType:(int)arg1 fromDefaults:(id)arg2;
- (id)_loadOldTrustedServersFromDefaults:(id)arg1;
- (void)_updateRecruiter;
- (void)updateServiceBrowserStartIfNeeded:(BOOL)arg1;
- (void)_stopBrowsingForServices;
- (void)_startBrowsingForServices;
- (void)_stopServiceBrowser;
- (void)_createServiceBrowser;
- (id)_buildServersForHostType:(int)arg1;
- (BOOL)runningCommandLineTool;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

