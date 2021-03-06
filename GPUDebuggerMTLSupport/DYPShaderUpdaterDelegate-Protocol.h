//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerMTLSupport/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol DYResource;

@protocol DYPShaderUpdaterDelegate <NSObject>
- (void)defaultLibraryUpdateRequested:(void (^)(NSData *))arg1;
- (void)setInfoDictForProgram:(unsigned long long)arg1 dict:(NSDictionary *)arg2 container:(unsigned long long)arg3;
- (NSDictionary *)infoDictForProgram:(unsigned long long)arg1 container:(unsigned long long)arg2;
- (void)shaderUpdatedWithStatus:(BOOL)arg1 resource:(id <DYResource>)arg2;
- (NSString *)appRunnableLocation;
- (void)setShadersUpdatable:(BOOL)arg1;
@end

