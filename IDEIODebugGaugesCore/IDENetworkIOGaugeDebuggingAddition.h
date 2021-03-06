//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEIODebugGaugesCore/IDEGaugeDebuggingAddition.h>

@class NSArray, NSDate, NSNumber;

@interface IDENetworkIOGaugeDebuggingAddition : IDEGaugeDebuggingAddition
{
    NSDate *_updateTime;
    NSNumber *_rxBytesPerSecond;
    NSNumber *_txBytesPerSecond;
    NSNumber *_rxBytes;
    NSNumber *_txBytes;
    NSArray *_rxBytesDeltas;
    NSArray *_txBytesDeltas;
    NSNumber *_rxPacketsPerSecond;
    NSNumber *_txPacketsPerSecond;
    NSNumber *_rxPackets;
    NSNumber *_txPackets;
    NSArray *_rxPacketsDeltas;
    NSArray *_txPacketsDeltas;
    NSArray *_connections;
}

+ (id)reportDataQueryAttributes;
+ (id)requiredDataQueryAttribute;
+ (id)basicDataQueryAttributes;
+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
@property(readonly, nonatomic) NSArray *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) NSArray *txPacketsDeltas; // @synthesize txPacketsDeltas=_txPacketsDeltas;
@property(readonly, nonatomic) NSArray *rxPacketsDeltas; // @synthesize rxPacketsDeltas=_rxPacketsDeltas;
@property(readonly, nonatomic) NSNumber *txPackets; // @synthesize txPackets=_txPackets;
@property(readonly, nonatomic) NSNumber *rxPackets; // @synthesize rxPackets=_rxPackets;
@property(readonly, nonatomic) NSNumber *txPacketsPerSecond; // @synthesize txPacketsPerSecond=_txPacketsPerSecond;
@property(readonly, nonatomic) NSNumber *rxPacketsPerSecond; // @synthesize rxPacketsPerSecond=_rxPacketsPerSecond;
@property(readonly, nonatomic) NSArray *txBytesDeltas; // @synthesize txBytesDeltas=_txBytesDeltas;
@property(readonly, nonatomic) NSArray *rxBytesDeltas; // @synthesize rxBytesDeltas=_rxBytesDeltas;
@property(readonly, nonatomic) NSNumber *txBytes; // @synthesize txBytes=_txBytes;
@property(readonly, nonatomic) NSNumber *rxBytes; // @synthesize rxBytes=_rxBytes;
@property(readonly, nonatomic) NSNumber *txBytesPerSecond; // @synthesize txBytesPerSecond=_txBytesPerSecond;
@property(readonly, nonatomic) NSNumber *rxBytesPerSecond; // @synthesize rxBytesPerSecond=_rxBytesPerSecond;
@property(readonly, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
- (void).cxx_destruct;
- (void)processQueryResultDict:(id)arg1;

@end

