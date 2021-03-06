//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/XCOutputStreams-Protocol.h>

@class NSString, XCBuildLogCommandInvocationSectionRecorder, XCSystemStatisticsMeasurement, XCWorkQueueOperation;
@protocol XCOutputStreams, XCWorkQueueCommands;

@interface XCWorkQueueCommandInvocation : NSObject <XCOutputStreams>
{
    XCWorkQueueOperation *_workQueueOperation;
    id <XCWorkQueueCommands> _command;
    unsigned long long _slotNumber;
    XCBuildLogCommandInvocationSectionRecorder *_buildLogRecorder;
    id <XCOutputStreams> _outputStream;
    unsigned long long _numberOfMessages;
    XCSystemStatisticsMeasurement *_systemStatsAtStart;
    XCSystemStatisticsMeasurement *_systemStatsAtFinish;
}

+ (unsigned long long)messageLimit;
@property(readonly, copy) NSString *description;
- (double)elapsedSystemTime;
- (double)elapsedUserTime;
- (id)systemStatisticsDelta;
- (void)parser:(id)arg1 foundMessageOfType:(int)arg2 title:(const char *)arg3 forFileAtPath:(const char *)arg4 lineNumber:(unsigned long long)arg5;
- (BOOL)hasReachedMessageLimit;
- (void)emitBuildMessageOfType:(int)arg1 withFormat:(id)arg2;
- (void)emitBuildMessageOfType:(int)arg1 toTranscript:(BOOL)arg2 withFormat:(id)arg3;
- (void)emitBuildMessageOfType:(int)arg1 message:(id)arg2 forFileAtPath:(id)arg3 lineNumber:(unsigned long long)arg4;
- (void)emitBuildMessageOfType:(int)arg1 toTranscript:(BOOL)arg2 message:(id)arg3 forFileAtPath:(id)arg4 lineNumber:(unsigned long long)arg5;
- (id)absolutePathForPath:(id)arg1;
- (void)close;
- (void)flush;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)cancel;
- (void)handleInputFileDescriptorActivity;
- (void)handleOutputFileDescriptorActivity;
- (void)handleEndOfOutput;
- (void)handleOutputBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (BOOL)startRunning;
- (int)realExitCode;
- (int)exitCode;
- (BOOL)isRunning;
- (int)inputFileDescriptor;
- (int)outputFileDescriptor;
- (void)stopRecordingBuildOutput;
- (id)buildLogRecorder;
- (unsigned long long)slotNumber;
- (id)command;
- (id)workQueueOperation;
- (void)dealloc;
- (id)initWithSlotNumber:(unsigned long long)arg1 workQueueOperation:(id)arg2 workQueueCommand:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

