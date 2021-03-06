//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlAuthenticationStrategy.h>

@class NSString, NSURL;

@interface DVTSourceControlSSHKeysAuthenticationStrategy : DVTSourceControlAuthenticationStrategy
{
    BOOL _usernameDefinedFromURL;
    NSString *_username;
    NSURL *_privateKeyFile;
    NSString *_privateKeyPassword;
}

+ (BOOL)supportsSecureCoding;
+ (id)validateSSHKeysWithPrivateKeyURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)defaultSSHKeyAuthenticationStrategy;
+ (id)defaultSSHKeyAuthenticationStrategyWithUsername:(id)arg1;
+ (id)defaultSSHKeyAuthenticationStrategyWithUsername:(id)arg1 password:(id)arg2;
+ (id)defaultSSHKeyFolder;
+ (id)defaultSSHKeyAuthenticationStrategyForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)generateNewKeysInFolder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)generateNewKeysInFolder:(id)arg1 comment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)generateNewKeysWithPassword:(id)arg1 inFolder:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (BOOL)strategyIsValidForURL:(id)arg1;
+ (id)name;
@property(copy) NSString *privateKeyPassword; // @synthesize privateKeyPassword=_privateKeyPassword;
@property(retain) NSURL *privateKeyFile; // @synthesize privateKeyFile=_privateKeyFile;
@property(copy) NSString *username; // @synthesize username=_username;
@property BOOL usernameDefinedFromURL; // @synthesize usernameDefinedFromURL=_usernameDefinedFromURL;
- (void).cxx_destruct;
@property(readonly) NSURL *keyDirectory;
@property(readonly) NSURL *publicKeyFile;
- (unsigned long long)type;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLDefinedUsername:(id)arg1 privateKey:(id)arg2 password:(id)arg3;
- (id)initWithUsername:(id)arg1 publicKeyData:(id)arg2 privateKeyData:(id)arg3 password:(id)arg4 sshKeyDirectory:(id)arg5;
- (id)initWithUsername:(id)arg1 privateKey:(id)arg2 password:(id)arg3;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

