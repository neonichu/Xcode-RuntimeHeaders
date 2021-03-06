//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTools/DYInOrderInstructionFilesVisitor.h>

@class DYCaptureArchive, DYFunctionTracer, NSError;

@interface DYCaptureArchiveTracer : DYInOrderInstructionFilesVisitor
{
    DYCaptureArchive *_captureArchive;
    DYFunctionTracer *_functionTracer;
    NSError *_error;
}

@property(readonly, retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)newTraceString:(id)arg1;
- (void)visitFunctionStreamFile:(id)arg1;
- (id)performTrace;
- (id)initWithCaptureArchive:(id)arg1 withFunctionTracer:(id)arg2;

@end

