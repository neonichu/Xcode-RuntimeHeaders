//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, IDEExecutionEnvironment, IDERunDestination, IDESchemeActionsInvocationRecord, IDESchemeCommand, NSArray, NSDictionary, NSString;

@interface IDESchemeOperationParameters : NSObject
{
    int _schemeTask;
    int _buildCommand;
    IDEExecutionEnvironment *_executionEnvironment;
    IDERunDestination *_runDestination;
    IDESchemeCommand *_schemeCommand;
    NSString *_commandName;
    IDESchemeActionsInvocationRecord *_invocationRecord;
    DVTFilePath *_filePathForSingleFileAction;
    NSArray *_overridingTestingSpecifiers;
    NSArray *_additionalLaunchCommandLineArguments;
    NSDictionary *_overridingLaunchEnvironmentVariables;
}

+ (id)operationParametersWithSchemeTask:(int)arg1 buildCommand:(int)arg2 executionEnvironment:(id)arg3 runDestination:(id)arg4 schemeCommand:(id)arg5 commandName:(id)arg6 invocationRecord:(id)arg7;
@property(retain) NSDictionary *overridingLaunchEnvironmentVariables; // @synthesize overridingLaunchEnvironmentVariables=_overridingLaunchEnvironmentVariables;
@property(retain) NSArray *additionalLaunchCommandLineArguments; // @synthesize additionalLaunchCommandLineArguments=_additionalLaunchCommandLineArguments;
@property(retain) NSArray *overridingTestingSpecifiers; // @synthesize overridingTestingSpecifiers=_overridingTestingSpecifiers;
@property(retain) DVTFilePath *filePathForSingleFileAction; // @synthesize filePathForSingleFileAction=_filePathForSingleFileAction;
@property(retain) IDESchemeActionsInvocationRecord *invocationRecord; // @synthesize invocationRecord=_invocationRecord;
@property(copy) NSString *commandName; // @synthesize commandName=_commandName;
@property(retain) IDESchemeCommand *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property(retain) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
@property(retain) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
@property int buildCommand; // @synthesize buildCommand=_buildCommand;
@property int schemeTask; // @synthesize schemeTask=_schemeTask;
- (void).cxx_destruct;

@end

