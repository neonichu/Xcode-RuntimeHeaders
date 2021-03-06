//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/NSObject-Protocol.h>

@class NSData, NSError, NSString, XCSMessageChannel;

@protocol XCSMessageChannelDelegate <NSObject>
- (void)messageChannel:(XCSMessageChannel *)arg1 didReceiveMessage:(NSData *)arg2 withTag:(unsigned char)arg3;

@optional
- (void)messageChannel:(XCSMessageChannel *)arg1 didFailToSendMessage:(NSData *)arg2 withTag:(unsigned char)arg3 error:(NSError *)arg4;
- (void)messageChannel:(XCSMessageChannel *)arg1 didSendMessage:(NSData *)arg2 withTag:(unsigned char)arg3;
- (void)messageChannel:(XCSMessageChannel *)arg1 didQueueMessage:(NSData *)arg2 withTag:(unsigned char)arg3;
- (void)messageChannel:(XCSMessageChannel *)arg1 didUpdatePrivilegesWithUsername:(NSString *)arg2;
- (void)messageChannelDidRejectClientCertificate:(XCSMessageChannel *)arg1;
- (void)messageChannelDidAcceptClientCertificate:(XCSMessageChannel *)arg1;
- (void)messageChannel:(XCSMessageChannel *)arg1 didDisconnectWithError:(NSError *)arg2 andWillRetry:(BOOL)arg3;
- (void)messageChannelDidConnect:(XCSMessageChannel *)arg1;
@end

