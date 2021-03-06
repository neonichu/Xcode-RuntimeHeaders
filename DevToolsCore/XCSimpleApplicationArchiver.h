//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/XCApplicationArchiver-Protocol.h>

@class DTExtension, NSArray, NSString, XCPlatformSpecification;

@interface XCSimpleApplicationArchiver : NSObject <XCApplicationArchiver>
{
    XCPlatformSpecification *_platform;
    DTExtension *_extension;
}

@property(retain) DTExtension *extension; // @synthesize extension=_extension;
@property(retain) XCPlatformSpecification *platform; // @synthesize platform=_platform;
- (Class)detailViewControllerClass;
- (id)applicationIconURL;
- (_Bool)archiveApplicationAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)willWriteArchiveInfo:(id)arg1 forApp:(id)arg2 error:(id *)arg3;
- (id)initWithExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSArray *actionNames;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

