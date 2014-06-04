/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SKEmitterNode.h"

#import "SKNodeWithShader-Protocol.h"

@class NSColor, NSImage, NSString, NSURL, SKShader;

@interface SKEmitterNode (InspectorAdditions) <SKNodeWithShader>
@property(retain, nonatomic) NSURL *customSpriteShader;
- (id)ide_undoKVOKeypaths;
- (void)setNilValueForKey:(id)arg1;
- (id)inspectorAttributes;
@property BOOL shouldShowParentInInspector;
@property(nonatomic) struct CGPoint previewParticlePosition;
@property(nonatomic) unsigned long long numParticlesToEmitWithAction;
@property(nonatomic) double particleRotationSpeedDeg;
@property(nonatomic) double particleRotationRangeDeg;
@property(nonatomic) double particleRotationDeg;
@property(nonatomic) double emissionAngleRangeDeg;
@property(nonatomic) double emissionAngleDeg;
@property(retain, nonatomic) NSColor *backgroundColor;
@property(retain, nonatomic) NSImage *particleTextureImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SKShader *shader;
@property(readonly) Class superclass;
@end
