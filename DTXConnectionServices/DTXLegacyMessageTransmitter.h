/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DTXConnectionServices/DTXMessageTransmitter.h>

@interface DTXLegacyMessageTransmitter : DTXMessageTransmitter
{
}

- (void)transmitMessage:(id)arg1 routingInfo:(struct DTXMessageRoutingInfo)arg2 fragment:(unsigned int)arg3 transmitter:(id)arg4;
- (unsigned int)fragmentsForLength:(unsigned long long)arg1;

@end
