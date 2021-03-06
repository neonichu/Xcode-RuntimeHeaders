//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCCommandLineToolSpecification.h>

@class NSArray;

@interface XCCompilerSpecification : XCCommandLineToolSpecification
{
    NSArray *_supportedArchs;
}

+ (id)specificationsToDisplayInDomain:(id)arg1;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
- (id)computeDependenciesForFilePath:(id)arg1 ofType:(id)arg2 outputDirectory:(id)arg3 inTargetBuildContext:(id)arg4;
- (id)computeDependenciesForInputFile:(id)arg1 ofType:(id)arg2 variant:(id)arg3 architecture:(id)arg4 outputDirectory:(id)arg5 inTargetBuildContext:(id)arg6;
- (id)adjustedFileTypeForInputFileAtPath:(id)arg1 originalFileType:(id)arg2 inTargetBuildContext:(id)arg3;
- (id)fileTypeForGccLanguageDialect:(id)arg1;
- (id)effectiveCompilerSpecificationForFileType:(id)arg1 inPropertyExpansionContext:(id)arg2 platformDomain:(id)arg3;
- (id)defaultOutputDirectory;
- (id)executablePath;
- (id)outputFilesForInputFilePath:(id)arg1 inTargetBuildContext:(id)arg2;
- (id)uniqueOutputBaseNameForInputFilePath:(id)arg1 inTargetBuildContext:(id)arg2;
- (id)builtinJambaseRuleName;
- (BOOL)isAbstract;
- (id)supportedArchitectures;
- (void)dealloc;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;
- (id)builtinMacroDefinitionsInBuildContext:(id)arg1 forLanguageDialect:(id)arg2;
- (id)builtinFrameworkSearchPathsInBuildContext:(id)arg1 forLanguageDialect:(id)arg2;
- (id)builtinBracketSearchPathsInBuildContext:(id)arg1 forLanguageDialect:(id)arg2;
- (id)builtinQuoteSearchPathsInBuildContext:(id)arg1 forLanguageDialect:(id)arg2;

@end

