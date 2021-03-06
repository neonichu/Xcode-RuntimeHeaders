//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXProjectItem.h>

@class NSMutableArray, NSString, PBXFileType, PBXTarget;

@interface PBXBuildRule : PBXProjectItem
{
    NSString *_name;
    PBXTarget *_target;
    PBXFileType *_fileType;
    NSString *_filePatterns;
    NSString *_compilerSpecIdentifier;
    NSString *_script;
    NSMutableArray *_outputFiles;
    BOOL _isEditable;
}

+ (id)findFirstBuildRuleInArray:(id)arg1 thatAppliesToInputFileNamed:(id)arg2 ofType:(id)arg3 withDesiredOutputTypes:(id)arg4 inContext:(id)arg5 platformDomain:(id)arg6;
+ (id)archivableAttributes;
+ (id)compilerSpecIsScriptProxy;
+ (id)fileTypeIsPatternProxy;
+ (id)buildPhaseSpecificBuildRulesForBuildPhaseIdentifier:(id)arg1 platform:(id)arg2;
+ (id)systemBuildRules;
+ (id)systemBuildRulesForPlatform:(id)arg1;
+ (id)buildRulesFromCompilationTaskSpecification:(id)arg1;
+ (id)buildRulesFromBuildRuleActionSpecification:(id)arg1;
+ (id)loadBuildRulesFromPropertyListsInDirectory:(id)arg1;
+ (id)_loadBuildRulesAtPath:(id)arg1;
+ (id)buildRuleWithName:(id)arg1;
+ (void)initialize;
- (id)createDependencyGraphSnapshotForPlatform:(id)arg1;
- (Class)dependencyGraphSnapshotClass;
- (void)addRelevantToolSpecificationsForFileType:(id)arg1 inPropertyExpansionContext:(id)arg2 andPlatformDomain:(id)arg3 toSet:(id)arg4;
- (BOOL)appliesToInputFileNamed:(id)arg1 ofType:(id)arg2 withDesiredOutputTypes:(id)arg3 inContext:(id)arg4 platformDomain:(id)arg5;
- (BOOL)_filePath:(const char *)arg1 matchesPatternInPatternString:(id)arg2;
- (void)willChange;
- (id)innerDescription;
- (id)description;
- (id)errorRegexes;
- (id)warningRegexes;
- (id)ignoredRegexes;
- (id)outputParseRules;
- (id)statusMessageFormat;
- (unsigned long long)inputFileParameterNumber;
- (void)_setCompilerSpec:(id)arg1;
- (id)_compilerSpec;
- (void)_setFileType:(id)arg1;
- (id)_fileType;
- (void)setIsEditable:(BOOL)arg1;
- (BOOL)isEditable;
- (void)replaceOutputFileAtIndex:(unsigned long long)arg1 withFile:(id)arg2;
- (void)removeOutputFileAtIndex:(unsigned long long)arg1;
- (void)insertOutputFile:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)outputFileAtIndex:(unsigned long long)arg1;
- (void)setOutputFiles:(id)arg1;
- (id)outputFiles;
- (void)setScript:(id)arg1;
- (id)script;
- (id)compilerSpecForIdentifier:(id)arg1;
- (id)fileTypeForIdentifier:(id)arg1;
- (id)compilerSpecificationInDomain:(id)arg1;
- (void)setCompilerSpecificationIdentifier:(id)arg1;
- (id)compilerSpecificationIdentifier;
- (void)setFilePatterns:(id)arg1;
- (id)filePatterns;
- (void)setFileType:(id)arg1;
- (id)fileType;
- (id)container;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setName:(id)arg1;
- (id)name;
- (id)_defaultName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPropertyListDictionary:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)objectSpecifier;

@end

