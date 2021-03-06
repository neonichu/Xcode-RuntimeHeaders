//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTProducts/DVTProductSource.h>

@class DVTDelayedInvocation, DVTFilePath, DVTObservingToken, DVTPerformanceMetric, NSSet;

@interface DVTAppStoreProductSource : DVTProductSource
{
    DVTPerformanceMetric *_perfMetric;
    DVTDelayedInvocation *_delayedRefreshInvocation;
    DVTObservingToken *_developerAccountsObserver;
    NSSet *_developerAccountPasswordObservers;
    DVTFilePath *_productsRootDirectory;
}

+ (id)defaultProductsRootDirectory;
+ (BOOL)isAdamIdWhitelisted:(id)arg1;
+ (id)whiteListedAppByAdamId;
@property(retain, nonatomic) DVTFilePath *productsRootDirectory; // @synthesize productsRootDirectory=_productsRootDirectory;
@property(retain) NSSet *developerAccountPasswordObservers; // @synthesize developerAccountPasswordObservers=_developerAccountPasswordObservers;
@property(retain) DVTObservingToken *developerAccountsObserver; // @synthesize developerAccountsObserver=_developerAccountsObserver;
@property(retain, nonatomic) DVTDelayedInvocation *delayedRefreshInvocation; // @synthesize delayedRefreshInvocation=_delayedRefreshInvocation;
- (void).cxx_destruct;
- (id)_binaryInfosForVersion:(id)arg1;
- (id)_supportedDeviceTypesForAppVersion:(id)arg1 productCategory:(id)arg2;
- (id)_productFromAppDescription:(id)arg1 versionDescriptions:(id)arg2 session:(id)arg3 coordinator:(id)arg4 errors:(id *)arg5;
- (id)_productsForAccount:(id)arg1 coordinator:(id)arg2;
- (id)_productsFromITunesWithCoordinator:(id)arg1;
- (void)_setBusyOnMainThread:(BOOL)arg1;
- (void)_delayedRefreshProducts;
- (void)refreshProducts;
- (void)_startLocating;
- (BOOL)_networkRefreshEnabled;
- (id)_resultByMergingProductResults:(id)arg1 withCoordinator:(id)arg2;
- (id)updateCacheWithResult:(id)arg1;
- (id)readProductsFromCacheWithCoordinator:(id)arg1;
- (id)appIconPathForProduct:(id)arg1;
- (id)filePathForProductVersion:(id)arg1 parentProduct:(id)arg2;
- (id)filePathForProduct:(id)arg1;
- (id)_cacheAndNetworkLock;
- (void)primitiveInvalidate;
- (id)initWithProductManager:(id)arg1 productsRootDirectory:(id)arg2;
- (id)initWithProductManager:(id)arg1;

@end

