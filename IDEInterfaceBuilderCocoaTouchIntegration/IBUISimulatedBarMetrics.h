//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBBinaryArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedMetrics-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCopying-Protocol.h>

@class NSString;

@interface IBUISimulatedBarMetrics : NSObject <NSCoding, IBUISimulatedMetrics, NSCopying, IBDocumentArchiving, IBBinaryArchiving>
{
    int _barStyle;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)simulatedBarMetricsForBarView:(id)arg1;
@property(readonly, nonatomic) int barStyle; // @synthesize barStyle=_barStyle;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithBarStyle:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)simulatedBarMetricsByRemovingTintColor;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)promptedInstance;
- (BOOL)isTranslucentForTargetRuntime:(id)arg1;
- (unsigned long long)barEdge;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (double)heightForTargetRuntime:(id)arg1;
- (void)applyMetricsToBar:(id)arg1;
@property(readonly, copy) NSString *displayName;
- (id)ibWidgetType;
- (Class)barClass;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

