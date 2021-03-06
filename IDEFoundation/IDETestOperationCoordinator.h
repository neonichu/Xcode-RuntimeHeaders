//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEConsoleAdaptorDelegateProtocol-Protocol.h>
#import <IDEFoundation/IDETestOperationStateMachineDelegate-Protocol.h>
#import <IDEFoundation/IDETestingDiagnosticLogWriter-Protocol.h>
#import <IDEFoundation/XCTestManager_IDEInterface-Protocol.h>

@class DTXConnection, DVTDevice, DVTDisallowFinishToken, DVTObservingToken, DVTStackBacktrace, IDEConsoleAdaptor, IDERunOperation, IDETestOperationStateMachine, IDETestRunner, IDETestingDiagnosticLogArbiter, NSArray, NSDateFormatter, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOutputStream, NSString, NSTimer;
@protocol OS_dispatch_queue, OS_dispatch_source, XCTestDriverInterface, XCTestManager_DaemonConnectionInterface;

@interface IDETestOperationCoordinator : NSObject <XCTestManager_IDEInterface, IDEConsoleAdaptorDelegateProtocol, IDETestingDiagnosticLogWriter, IDETestOperationStateMachineDelegate, DVTInvalidation>
{
    BOOL _finished;
    BOOL _testPlanDidStartExecuting;
    BOOL _hasFailed;
    BOOL _readyForTestBundleToConnect;
    BOOL _hasStartedTests;
    BOOL _targetIsiOSSimulator;
    BOOL _testingIsFinished;
    int _testProcessPID;
    IDETestRunner *_testRunner;
    NSString *_targetArchitecture;
    DVTDevice *_targetDevice;
    IDERunOperation *_operation;
    NSMutableArray *_validatorsStack;
    DTXConnection *_connection;
    id <XCTestDriverInterface> _testBundleProxy;
    long long _testProtocolVersion;
    DTXConnection *_daemonConnection;
    id <XCTestManager_DaemonConnectionInterface> _daemonProxy;
    long long _daemonProtocolVersion;
    NSTimer *_startupTimeoutTimer;
    DVTObservingToken *_launchSessionStartObserverToken;
    DVTObservingToken *_launchSessionHasCrashedObserverToken;
    DVTObservingToken *_runOperationCancellationObservationToken;
    DVTObservingToken *_runOperationErrorObservationToken;
    DVTObservingToken *_launchSessionAlertErrorObserverToken;
    DVTObservingToken *_debuggerPausedObserverToken;
    DVTObservingToken *_launchSessionPIDObserverToken;
    id _iPhoneConnectLogHandlerToken;
    id _iPhoneSimulatorLogHandlerToken;
    DVTDisallowFinishToken *_disallowFinishToken;
    DVTObservingToken *_launchSessionsConsoleAdaptorsObserverToken;
    NSString *_consoleBuffer;
    NSMutableArray *_consoleChunkQueue;
    NSMutableArray *_delegateBlockQueue;
    IDEConsoleAdaptor *_consoleAdaptor;
    NSArray *_finalCommandLineArguments;
    NSOutputStream *_statusStream;
    NSObject<OS_dispatch_queue> *_statusStreamQueue;
    NSString *_statusLogPath;
    IDETestingDiagnosticLogArbiter *_logArbiter;
    NSDateFormatter *_loggingDateFormatter;
    NSString *_partialConsoleChunkFromLastOutput;
    NSString *_unprintedConsoleOutput;
    NSObject<OS_dispatch_queue> *_consoleProcessingQueue;
    NSObject<OS_dispatch_source> *_acceptSource;
    NSTimer *_delegateBlockQueueTimeoutTimer;
    NSMutableDictionary *_testTokensToExecutionTrackers;
    NSMutableDictionary *_testTokensToOperations;
    NSMutableDictionary *_testTokensToErrors;
    NSMutableSet *_launchedApplicationTokens;
    NSMutableSet *_executionTrackerObservationTokens;
    NSMutableSet *_displayNamesOfLaunchedProcesses;
    NSArray *_OSXCrashReportObservers;
    NSString *_pathToUnixDomainSocket;
    IDETestOperationStateMachine *_stateMachine;
}

+ (id)nextLaunchSessionToken;
+ (BOOL)supportsInvalidationPrevention;
+ (void)initialize;
@property int testProcessPID; // @synthesize testProcessPID=_testProcessPID;
@property(retain) IDETestOperationStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy) NSString *pathToUnixDomainSocket; // @synthesize pathToUnixDomainSocket=_pathToUnixDomainSocket;
@property(retain) NSArray *OSXCrashReportObservers; // @synthesize OSXCrashReportObservers=_OSXCrashReportObservers;
@property(retain) NSMutableSet *displayNamesOfLaunchedProcesses; // @synthesize displayNamesOfLaunchedProcesses=_displayNamesOfLaunchedProcesses;
@property(retain) NSMutableSet *executionTrackerObservationTokens; // @synthesize executionTrackerObservationTokens=_executionTrackerObservationTokens;
@property(retain) NSMutableSet *launchedApplicationTokens; // @synthesize launchedApplicationTokens=_launchedApplicationTokens;
@property(retain) NSMutableDictionary *testTokensToErrors; // @synthesize testTokensToErrors=_testTokensToErrors;
@property(retain) NSMutableDictionary *testTokensToOperations; // @synthesize testTokensToOperations=_testTokensToOperations;
@property(retain) NSMutableDictionary *testTokensToExecutionTrackers; // @synthesize testTokensToExecutionTrackers=_testTokensToExecutionTrackers;
@property BOOL testingIsFinished; // @synthesize testingIsFinished=_testingIsFinished;
@property(retain, nonatomic) NSTimer *delegateBlockQueueTimeoutTimer; // @synthesize delegateBlockQueueTimeoutTimer=_delegateBlockQueueTimeoutTimer;
@property(retain) NSObject<OS_dispatch_source> *acceptSource; // @synthesize acceptSource=_acceptSource;
@property BOOL targetIsiOSSimulator; // @synthesize targetIsiOSSimulator=_targetIsiOSSimulator;
@property(retain) NSObject<OS_dispatch_queue> *consoleProcessingQueue; // @synthesize consoleProcessingQueue=_consoleProcessingQueue;
@property(retain) NSString *unprintedConsoleOutput; // @synthesize unprintedConsoleOutput=_unprintedConsoleOutput;
@property(retain) NSString *partialConsoleChunkFromLastOutput; // @synthesize partialConsoleChunkFromLastOutput=_partialConsoleChunkFromLastOutput;
@property(retain) NSDateFormatter *loggingDateFormatter; // @synthesize loggingDateFormatter=_loggingDateFormatter;
@property(retain) IDETestingDiagnosticLogArbiter *logArbiter; // @synthesize logArbiter=_logArbiter;
@property(retain) NSString *statusLogPath; // @synthesize statusLogPath=_statusLogPath;
@property(retain) NSObject<OS_dispatch_queue> *statusStreamQueue; // @synthesize statusStreamQueue=_statusStreamQueue;
@property(retain) NSOutputStream *statusStream; // @synthesize statusStream=_statusStream;
@property(retain) NSArray *finalCommandLineArguments; // @synthesize finalCommandLineArguments=_finalCommandLineArguments;
@property(retain, nonatomic) IDEConsoleAdaptor *consoleAdaptor; // @synthesize consoleAdaptor=_consoleAdaptor;
@property(retain) NSMutableArray *delegateBlockQueue; // @synthesize delegateBlockQueue=_delegateBlockQueue;
@property(retain) NSMutableArray *consoleChunkQueue; // @synthesize consoleChunkQueue=_consoleChunkQueue;
@property(retain) NSString *consoleBuffer; // @synthesize consoleBuffer=_consoleBuffer;
@property(retain) DVTObservingToken *launchSessionsConsoleAdaptorsObserverToken; // @synthesize launchSessionsConsoleAdaptorsObserverToken=_launchSessionsConsoleAdaptorsObserverToken;
@property(retain) DVTDisallowFinishToken *disallowFinishToken; // @synthesize disallowFinishToken=_disallowFinishToken;
@property BOOL hasStartedTests; // @synthesize hasStartedTests=_hasStartedTests;
@property BOOL readyForTestBundleToConnect; // @synthesize readyForTestBundleToConnect=_readyForTestBundleToConnect;
@property BOOL hasFailed; // @synthesize hasFailed=_hasFailed;
@property BOOL testPlanDidStartExecuting; // @synthesize testPlanDidStartExecuting=_testPlanDidStartExecuting;
@property(retain) id iPhoneSimulatorLogHandlerToken; // @synthesize iPhoneSimulatorLogHandlerToken=_iPhoneSimulatorLogHandlerToken;
@property(retain) id iPhoneConnectLogHandlerToken; // @synthesize iPhoneConnectLogHandlerToken=_iPhoneConnectLogHandlerToken;
@property(retain) DVTObservingToken *launchSessionPIDObserverToken; // @synthesize launchSessionPIDObserverToken=_launchSessionPIDObserverToken;
@property(retain) DVTObservingToken *debuggerPausedObserverToken; // @synthesize debuggerPausedObserverToken=_debuggerPausedObserverToken;
@property(retain) DVTObservingToken *launchSessionAlertErrorObserverToken; // @synthesize launchSessionAlertErrorObserverToken=_launchSessionAlertErrorObserverToken;
@property(retain) DVTObservingToken *runOperationErrorObservationToken; // @synthesize runOperationErrorObservationToken=_runOperationErrorObservationToken;
@property(retain) DVTObservingToken *runOperationCancellationObservationToken; // @synthesize runOperationCancellationObservationToken=_runOperationCancellationObservationToken;
@property(retain) DVTObservingToken *launchSessionHasCrashedObserverToken; // @synthesize launchSessionHasCrashedObserverToken=_launchSessionHasCrashedObserverToken;
@property(retain) DVTObservingToken *launchSessionStartObserverToken; // @synthesize launchSessionStartObserverToken=_launchSessionStartObserverToken;
@property(retain) NSTimer *startupTimeoutTimer; // @synthesize startupTimeoutTimer=_startupTimeoutTimer;
@property long long daemonProtocolVersion; // @synthesize daemonProtocolVersion=_daemonProtocolVersion;
@property(retain) id <XCTestManager_DaemonConnectionInterface> daemonProxy; // @synthesize daemonProxy=_daemonProxy;
@property(retain) DTXConnection *daemonConnection; // @synthesize daemonConnection=_daemonConnection;
@property long long testProtocolVersion; // @synthesize testProtocolVersion=_testProtocolVersion;
@property(retain) id <XCTestDriverInterface> testBundleProxy; // @synthesize testBundleProxy=_testBundleProxy;
@property(retain) DTXConnection *connection; // @synthesize connection=_connection;
@property BOOL finished; // @synthesize finished=_finished;
@property(retain) NSMutableArray *validatorsStack; // @synthesize validatorsStack=_validatorsStack;
@property(readonly) IDERunOperation *operation; // @synthesize operation=_operation;
@property(retain) DVTDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
@property(retain) IDETestRunner *testRunner; // @synthesize testRunner=_testRunner;
- (void).cxx_destruct;
- (id)_XCT_testCase:(id)arg1 method:(id)arg2 didFinishActivity:(id)arg3;
- (id)_XCT_testCase:(id)arg1 method:(id)arg2 willStartActivity:(id)arg3;
- (id)_XCT_recordedEventNames:(id)arg1 timestamp:(id)arg2 duration:(id)arg3 startLocation:(id)arg4 startElementSnapshot:(id)arg5 startApplicationSnapshot:(id)arg6 endLocation:(id)arg7 endElementSnapshot:(id)arg8 endApplicationSnapshot:(id)arg9;
- (id)_XCT_nativeFocusItemDidChangeAtTime:(id)arg1 parameterSnapshot:(id)arg2 applicationSnapshot:(id)arg3;
- (id)_XCT_exchangeCurrentProtocolVersion:(id)arg1 minimumVersion:(id)arg2;
- (id)_XCT_recordedFirstResponderChangedWithApplicationSnapshot:(id)arg1;
- (id)_XCT_recordedOrientationChange:(id)arg1;
- (id)_XCT_recordedEventNames:(id)arg1 duration:(id)arg2 startElementID:(id)arg3 startApplicationSnapshot:(id)arg4 endElementID:(id)arg5 endApplicationSnapshot:(id)arg6;
- (id)_XCT_recordedEventNames:(id)arg1 duration:(id)arg2 startElement:(id)arg3 startApplicationSnapshot:(id)arg4 endElement:(id)arg5 endApplicationSnapshot:(id)arg6;
- (id)_XCT_recordedEventName:(id)arg1 duration:(id)arg2 startApplicationSnapshot:(id)arg3 endApplicationSnapshot:(id)arg4;
- (id)_XCT_recordedEventNames:(id)arg1 duration:(id)arg2 startLocation:(id)arg3 startElementSnapshot:(id)arg4 startApplicationSnapshot:(id)arg5 endLocation:(id)arg6 endElementSnapshot:(id)arg7 endApplicationSnapshot:(id)arg8;
- (id)_XCT_recordedEvent:(id)arg1 targetElementID:(id)arg2 applicationSnapshot:(id)arg3;
- (id)_XCT_recordedEvent:(id)arg1 forElement:(id)arg2;
- (id)_XCT_recordedKeyEventsWithApplicationSnapshot:(id)arg1 characters:(id)arg2 charactersIgnoringModifiers:(id)arg3 modifierFlags:(id)arg4;
- (id)_XCT_recordedKeyEventsWithCharacters:(id)arg1 charactersIgnoringModifiers:(id)arg2 modifierFlags:(id)arg3;
- (id)_XCT_terminateProcess:(id)arg1;
- (id)_XCT_getProgressForLaunch:(id)arg1;
- (id)_XCT_launchProcessWithPath:(id)arg1 bundleID:(id)arg2 arguments:(id)arg3 environmentVariables:(id)arg4;
- (void)_executeOperation:(id)arg1 withPath:(id)arg2 bundleID:(id)arg3 remoteReceipt:(id)arg4;
- (void)_observeExitOfLaunchSession:(id)arg1 withToken:(id)arg2;
- (void)_observeCompletionOfTracker:(id)arg1 withToken:(id)arg2 path:(id)arg3 bundleID:(id)arg4;
- (id)_launchParametersForProcessWithPath:(id)arg1 bundleID:(id)arg2 arguments:(id)arg3 environmentVariables:(id)arg4;
- (id)_XCT_handleCrashReportData:(id)arg1 fromFileWithName:(id)arg2;
- (id)_XCT_handleCrashReportData:(id)arg1;
- (void)_handleSymbolicatedCrashLog:(id)arg1;
- (id)_XCT_logDebugMessage:(id)arg1;
- (id)_XCT_logMessage:(id)arg1;
- (id)_XCT_testSuite:(id)arg1 didFinishAt:(id)arg2 runCount:(id)arg3 withFailures:(id)arg4 unexpected:(id)arg5 testDuration:(id)arg6 totalDuration:(id)arg7;
- (id)_XCT_testCaseDidFinishForTestClass:(id)arg1 method:(id)arg2 withStatus:(id)arg3 duration:(id)arg4;
- (id)_XCT_testMethod:(id)arg1 ofClass:(id)arg2 didMeasureMetric:(id)arg3 file:(id)arg4 line:(id)arg5;
- (id)_XCT_testCase:(id)arg1 method:(id)arg2 didStallOnMainThreadInFile:(id)arg3 line:(id)arg4;
- (id)_XCT_testCaseDidFailForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(id)arg5;
- (id)_XCT_testCaseDidStartForTestClass:(id)arg1 method:(id)arg2;
- (id)_XCT_testSuite:(id)arg1 didStartAt:(id)arg2;
- (id)_XCT_didFinishExecutingTestPlan;
- (id)_XCT_didBeginExecutingTestPlan;
- (id)_XCT_testBundleReadyWithProtocolVersion:(id)arg1 minimumVersion:(id)arg2;
- (BOOL)validateEvent:(int)arg1;
- (void)_enqueueDelegateBlock:(CDUnknownBlockType)arg1;
- (void)_executeDelegateBlockWithNextConsoleChunk:(CDUnknownBlockType)arg1;
- (void)_considerDispatchingDelegateBlock;
- (void)_enqueueConsoleChunk:(id)arg1;
- (void)_flushDelegateBlockQueue;
- (void)_delegateBlockQueueTimeoutTimerFired;
- (void)_considerFlushingDelegateBlockQueue;
- (id)parseConsoleOutputFromOriginalOutput:(id)arg1;
- (id)_subStringToLastCharacterInSet:(id)arg1 ofString:(id *)arg2;
- (void)_reportFinishToRunnerWithError:(id)arg1 didCancel:(BOOL)arg2;
- (id)_finalErrorFromError:(id)arg1;
- (void)_tearDownLoggingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_detectAndMessageTrace_r17733855_fromError:(id)arg1;
- (void)_reallyFinishWithError:(id)arg1 didCancel:(BOOL)arg2;
- (void)_finishWithError:(id)arg1 didCancel:(BOOL)arg2;
- (void)_logAtLevel:(int)arg1 message:(id)arg2;
- (void)_logMessage:(id)arg1 needsPrefix:(BOOL)arg2;
- (id)_logMessagePrefix;
- (BOOL)_logMessageWantsWriteToStdout;
- (void)writeLogStatus:(id)arg1;
- (void)writeLogData:(id)arg1;
- (void)_handleUnexpectedFailureDuringTestExecution:(id)arg1;
- (void)_reportStartupFailure:(id)arg1 errorCode:(unsigned long long)arg2;
- (void)_reportStartupProgress:(id)arg1 withTimeoutInterval:(double)arg2;
- (void)_startupTimedOut:(id)arg1;
- (void)_waitForTestProcessToConnect;
- (void)_waitForLaunch;
- (void)_handleDaemonConnection:(id)arg1;
- (double)_defaultTimeoutInterval;
- (void)_requestCrashReportCollection;
- (void)_updateCrashObserverWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleOSXCrashReportAtPath:(id)arg1;
- (void)_checkUITestingPermissionsForPID:(int)arg1;
- (void)_setXcodeUITestingAgentAsResponsibleProcessForPID:(int)arg1;
- (void)_whitelistTestProcessIDForUITesting;
- (void)_setupTestBundleConnectionWithTransport:(id)arg1;
- (BOOL)_setupTransportForUDSWithErrorMessage:(id *)arg1;
- (void)_acceptConnectionForListenSocket:(int)arg1 withAddress:(struct sockaddr_un)arg2;
- (void)_handleDisconnectForUDSTransport;
- (void)_setupObserversForTestOperation:(id)arg1;
- (void)_observeRunnablePIDForLaunchSession:(id)arg1;
- (void)_observeErrorForTestOperation:(id)arg1;
- (void)_observeCancellationForTestOperation:(id)arg1;
- (void)_observeCrashForLaunchSession:(id)arg1;
- (void)_observeDebuggerPauseForLaunchSession:(id)arg1;
- (void)_observeLaunchSessionConsoleAdaptors:(id)arg1;
- (void)_observeStartForTestOperation:(id)arg1;
- (void)_observeAlertsForLaunchSession:(id)arg1;
- (void)launchSessionDidFinalizeWithDescription:(id)arg1 userInfo:(id)arg2;
- (void)_registerHandlersForOtherLogAspects;
- (void)_prepareStatusLoggingStream;
- (id)initWithTestRunOperation:(id)arg1 forTestRunner:(id)arg2;
- (void)primitiveInvalidate;
- (BOOL)validateEvent:(int)arg1 error:(id *)arg2;
- (void)initializeValidatorsStack;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

