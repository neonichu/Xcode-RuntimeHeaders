/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IBMutableIdentityDictionary;

@interface IBIntegratorManager : NSObject
{
    IBMutableIdentityDictionary *_registeredIntegratorsByClass;
    IBMutableIdentityDictionary *_integratedClassesByOldClass;
}

+ (id)integratorExtensionPoint;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)loadAllIntegrators;
- (id)allIntegrators;
- (id)loadedIntegrators;
- (id)integratorExtensionPoint;
- (id)integratorForClass:(Class)arg1;
- (Class)_effectiveIntegratedClassForClass:(Class)arg1;
- (id)registerIntegrators:(id)arg1;
- (void)registerIntegrator:(id)arg1 remainingIntegratorsBySuperclass:(id)arg2;
- (void)installTypeIdentifierForConnectionClassIfNeeded:(Class)arg1;
- (id)typeIdentifierForConnectionClass:(Class)arg1;
- (id)typeIdentifierStringForConnectionClass:(Class)arg1;
- (void)installIDETypeIdentifierForIntegrator:(id)arg1;
- (id)typeIdentifierForObject:(id)arg1;
- (id)typeIdentifierForClass:(Class)arg1;
- (void)installInspectedKeyPathsForValuesAffectingForIntegrator:(id)arg1;
- (void)assertExistenceOfAccessorsForIntegrator:(id)arg1;
- (void)assertKVOComplianceOfIbInspectedAccessorsForIntegrator:(id)arg1;
- (void)installExtensionBackedMethodsForIntegrator:(id)arg1;
- (void)installDefaultImageClassMethodsForIntegrator:(id)arg1;
- (BOOL)assertExpensiveKVOComplianceTests;
- (id)init;
- (void)addWorkaroundForMissingNSNibExternalObjectPlaceholder;

@end
