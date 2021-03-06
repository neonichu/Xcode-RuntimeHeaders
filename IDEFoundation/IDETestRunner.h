//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDETestOperationCoordinatorEvents-Protocol.h>

@class DVTDisallowFinishToken, DVTFilePath, DVTOperationGroup, DVTStackBacktrace, IDEActivityLogSection, IDEBuildOperation, IDEExecutionEnvironment, IDELaunchParametersSnapshot, IDERunDestination, IDERunOperation, IDERunnable, IDESchemeCommand, IDETestRunSpecification, NSArray, NSMutableArray, NSMutableSet, NSString;
@protocol IDEBuildableProduct, IDETestRunnerEvents;

@interface IDETestRunner : NSObject <IDETestOperationCoordinatorEvents, DVTInvalidation>
{
    NSMutableArray *_testResults;
    NSMutableSet *_runningTests;
    BOOL _finished;
    BOOL _treatMissingBaselinesAsFailures;
    BOOL _hasStartedRunning;
    BOOL _ignoreNextSuiteDidFinish;
    BOOL _needsToResyncStateWithRestartedOperation;
    BOOL _currentOperationSuccessfullyBootstrapped;
    IDETestRunSpecification *_testRunSpecification;
    IDEExecutionEnvironment *_executionEnvironment;
    IDEBuildOperation *_buildOperation;
    IDERunDestination *_runDestination;
    IDEActivityLogSection *_activityLog;
    NSString *_launchName;
    IDERunnable *_testHostRunnable;
    IDESchemeCommand *_schemeCommand;
    id <IDEBuildableProduct> _buildableProductForUIRecordingManager;
    id <IDETestRunnerEvents> _testsOperationsObserver;
    NSMutableSet *_skippedTestIDs;
    NSMutableSet *_pendingRunTestIDs;
    NSMutableSet *_alreadyRunTestIDs;
    NSString *_productModuleName;
    DVTFilePath *_baselinePlistFilePath;
    NSMutableArray *_testResultStack;
    double _testRunStartedTime;
    NSMutableSet *_testsThatHaveStarted;
    NSMutableArray *_suiteStack;
    NSMutableSet *_suitesThatHaveFinished;
    DVTOperationGroup *_testSessionOperation;
    IDERunOperation *_currentTestRunOperation;
    long long _restartCount;
    unsigned long long _currentSuiteResyncIndex;
    NSString *_currentTestClass;
    NSString *_currentTestMethod;
    NSMutableArray *_testOperationCoordinators;
    DVTDisallowFinishToken *_testOperationDisallowFinishToken;
    IDELaunchParametersSnapshot *_launchParameters;
}

+ (id)_commandLineArgumentsForCocoaApplications;
+ (id)_configurationOperationForLaunchSession:(id)arg1 reportResultsToIDE:(BOOL)arg2 pathToXcodeReportingSocket:(id)arg3 testRunSpecification:(id)arg4 runDestination:(id)arg5 testsThatHaveStarted:(id)arg6 error:(id *)arg7;
+ (id)identifierForTestClass:(id)arg1 method:(id)arg2;
+ (void)initialize;
@property(retain) IDELaunchParametersSnapshot *launchParameters; // @synthesize launchParameters=_launchParameters;
@property BOOL currentOperationSuccessfullyBootstrapped; // @synthesize currentOperationSuccessfullyBootstrapped=_currentOperationSuccessfullyBootstrapped;
@property(retain) DVTDisallowFinishToken *testOperationDisallowFinishToken; // @synthesize testOperationDisallowFinishToken=_testOperationDisallowFinishToken;
@property(retain) NSMutableArray *testOperationCoordinators; // @synthesize testOperationCoordinators=_testOperationCoordinators;
@property(retain) NSString *currentTestMethod; // @synthesize currentTestMethod=_currentTestMethod;
@property(retain) NSString *currentTestClass; // @synthesize currentTestClass=_currentTestClass;
@property unsigned long long currentSuiteResyncIndex; // @synthesize currentSuiteResyncIndex=_currentSuiteResyncIndex;
@property long long restartCount; // @synthesize restartCount=_restartCount;
@property BOOL needsToResyncStateWithRestartedOperation; // @synthesize needsToResyncStateWithRestartedOperation=_needsToResyncStateWithRestartedOperation;
@property(retain) IDERunOperation *currentTestRunOperation; // @synthesize currentTestRunOperation=_currentTestRunOperation;
@property(retain) DVTOperationGroup *testSessionOperation; // @synthesize testSessionOperation=_testSessionOperation;
@property BOOL ignoreNextSuiteDidFinish; // @synthesize ignoreNextSuiteDidFinish=_ignoreNextSuiteDidFinish;
@property(retain) NSMutableSet *suitesThatHaveFinished; // @synthesize suitesThatHaveFinished=_suitesThatHaveFinished;
@property(retain) NSMutableArray *suiteStack; // @synthesize suiteStack=_suiteStack;
@property(retain) NSMutableSet *testsThatHaveStarted; // @synthesize testsThatHaveStarted=_testsThatHaveStarted;
@property BOOL hasStartedRunning; // @synthesize hasStartedRunning=_hasStartedRunning;
@property double testRunStartedTime; // @synthesize testRunStartedTime=_testRunStartedTime;
@property(retain) NSMutableArray *testResultStack; // @synthesize testResultStack=_testResultStack;
@property(readonly) DVTFilePath *baselinePlistFilePath; // @synthesize baselinePlistFilePath=_baselinePlistFilePath;
@property(readonly) NSString *productModuleName; // @synthesize productModuleName=_productModuleName;
@property(readonly) BOOL treatMissingBaselinesAsFailures; // @synthesize treatMissingBaselinesAsFailures=_treatMissingBaselinesAsFailures;
@property(readonly, retain) NSMutableSet *alreadyRunTestIDs; // @synthesize alreadyRunTestIDs=_alreadyRunTestIDs;
@property(readonly, retain) NSMutableSet *pendingRunTestIDs; // @synthesize pendingRunTestIDs=_pendingRunTestIDs;
@property(readonly, retain) NSMutableSet *skippedTestIDs; // @synthesize skippedTestIDs=_skippedTestIDs;
@property(readonly) BOOL finished; // @synthesize finished=_finished;
@property __weak id <IDETestRunnerEvents> testsOperationsObserver; // @synthesize testsOperationsObserver=_testsOperationsObserver;
@property(readonly) id <IDEBuildableProduct> buildableProductForUIRecordingManager; // @synthesize buildableProductForUIRecordingManager=_buildableProductForUIRecordingManager;
@property(readonly) IDESchemeCommand *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property(readonly) IDERunnable *testHostRunnable; // @synthesize testHostRunnable=_testHostRunnable;
@property(readonly) NSString *launchName; // @synthesize launchName=_launchName;
@property(retain) IDEActivityLogSection *activityLog; // @synthesize activityLog=_activityLog;
@property(readonly) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
@property(readonly) IDEBuildOperation *buildOperation; // @synthesize buildOperation=_buildOperation;
@property(readonly) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
@property(readonly) IDETestRunSpecification *testRunSpecification; // @synthesize testRunSpecification=_testRunSpecification;
- (void).cxx_destruct;
- (void)testCaseDidFinishForTestClass:(id)arg1 method:(id)arg2 withStatus:(id)arg3 duration:(double)arg4 rawOutput:(id)arg5 sessionState:(id)arg6;
- (void)testCaseDidFailForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(long long)arg5 rawOutput:(id)arg6 sessionState:(id)arg7;
- (void)testCaseDidMeasurePerformanceMetricForTestClass:(id)arg1 method:(id)arg2 performanceMetric:(id)arg3 rawOutput:(id)arg4 sessionState:(id)arg5;
- (void)testDidOutput:(id)arg1 sessionState:(id)arg2;
- (void)testCase:(id)arg1 method:(id)arg2 didFinishActivity:(id)arg3 sessionState:(id)arg4;
- (void)testCase:(id)arg1 method:(id)arg2 willStartActivity:(id)arg3 sessionState:(id)arg4;
- (void)testCaseDidStartForTestClass:(id)arg1 method:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)testSuiteDidFinish:(long long)arg1 withFailures:(long long)arg2 unexpected:(long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(id)arg6 sessionState:(id)arg7;
- (void)testSuite:(id)arg1 willFinishAt:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)testSuite:(id)arg1 didStartAt:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)_unwindTestSuiteStackForResultsProcessor:(id)arg1;
- (void)willFinishWithError:(id)arg1 didCancel:(BOOL)arg2 sessionState:(id)arg3;
- (void)launchSessionStarted:(id)arg1 diagnosticLogPath:(id)arg2;
- (BOOL)_hasTestsLeftToRun;
- (BOOL)_cloneTestOperation:(id)arg1 error:(id *)arg2;
- (id)testOperationWithLaunchParameters:(id)arg1 withError:(id *)arg2;
- (id)_testRunOperationWithLaunchParameters:(id)arg1 error:(id *)arg2;
- (id)configurationOperationForLaunchSession:(id)arg1 error:(id *)arg2;
- (BOOL)validateRunDestinationWithError:(id *)arg1;
- (void)primitiveInvalidate;
- (id)initWithTestRunSpecification:(id)arg1 executionEnvironment:(id)arg2 buildOperation:(id)arg3 runDestination:(id)arg4;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSMutableArray *mutableTestResults; // @dynamic mutableTestResults;
@property(readonly) Class superclass;
@property(readonly) NSArray *testResults; // @dynamic testResults;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

