//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXCompilerSpecificationGcc2_95_2.h>

@class XCStringList;

@interface PBXCompilerSpecificationGcc3_1 : PBXCompilerSpecificationGcc2_95_2
{
    XCStringList *_flagsToElideFromPrecompHash;
}

- (id)precompileHeaderFileAtPath:(id)arg1 forSourceFileOfType:(id)arg2 withExtraFlags:(id)arg3 toPrecompPath:(id)arg4 inTargetBuildContext:(id)arg5;
- (void)removeFlagsThatDoNotAffectPrecompValidityFromMutableArray:(id)arg1;
- (id)flagsForIncludingPrecompiledPrefixHeaderAtPath:(id)arg1 inTargetBuildContext:(id)arg2;
- (id)precompFileNameForHeaderPath:(id)arg1 inTargetBuildContext:(id)arg2;
- (void)dealloc;

@end

