//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/NSCopying-Protocol.h>
#import <DevToolsInterface/PBXMarkerDelegateProtocol-Protocol.h>

@class NSString, PBXDebugSessionModule, PBXFileDocument;

@interface PBXDebugInstructionPointer : NSObject <NSCopying, PBXMarkerDelegateProtocol>
{
    PBXDebugSessionModule *_debugModule;
    unsigned long long _lineNumber;
    PBXFileDocument *_document;
}

- (int)state;
- (void)setDocument:(id)arg1;
- (id)document;
- (BOOL)isEnabled;
- (void)markChanged;
- (unsigned long long)lineNumber;
- (void)setLineNumber:(unsigned long long)arg1;
- (void)setLineNumber:(unsigned long long)arg1 informDebugModule:(BOOL)arg2;
- (id)debugSessionModule;
- (void)setDebugSessionModule:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

