//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DYRenderingAttributes, GPUTraceModelFactory, NSString;
@protocol DYResource;

@interface GPURenderJob : NSObject
{
    id <DYResource> _resource;
    id <DYResource> _overlayResource;
    GPUTraceModelFactory *_modelFactory;
    DYRenderingAttributes *_renderingAttributes;
    NSString *_displayElementName;
}

@property(readonly, nonatomic) NSString *displayElementName; // @synthesize displayElementName=_displayElementName;
@property(nonatomic) __weak DYRenderingAttributes *renderingAttributes; // @synthesize renderingAttributes=_renderingAttributes;
@property(readonly, nonatomic) __weak GPUTraceModelFactory *modelFactory; // @synthesize modelFactory=_modelFactory;
@property(readonly, nonatomic) __weak id <DYResource> overlayResource; // @synthesize overlayResource=_overlayResource;
@property(nonatomic) __weak id <DYResource> resource; // @synthesize resource=_resource;
- (void).cxx_destruct;
- (BOOL)showOverlay;
- (BOOL)isColor;
- (BOOL)flipped;
- (struct CGSize)imageSize;
- (void)resolveWithTraceResourceItem:(id)arg1;
@property(readonly, nonatomic) BOOL isStencilDisplayElement;
@property(readonly, nonatomic) BOOL isDepthDisplayElement;
- (id)initWithResource:(id)arg1 modelFactory:(id)arg2 renderingAttributes:(id)arg3 overlayResource:(id)arg4;

@end

