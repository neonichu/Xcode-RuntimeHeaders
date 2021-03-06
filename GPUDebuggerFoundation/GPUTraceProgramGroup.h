//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceProgramItem.h>

#import <GPUDebuggerFoundation/DYPProgramGroup-Protocol.h>

@class GPUTraceGroupItem, NSMutableArray, NSString;

@interface GPUTraceProgramGroup : GPUTraceProgramItem <DYPProgramGroup>
{
    GPUTraceGroupItem *_relatedDisplayablesGroupItem;
}

@property(readonly, nonatomic) GPUTraceGroupItem *relatedDisplayablesGroupItem; // @synthesize relatedDisplayablesGroupItem=_relatedDisplayablesGroupItem;
- (void).cxx_destruct;
- (unsigned int)functionIndex;
- (id)associatedDisplayableItem;
- (void)primitiveInvalidate;
- (void)addNewDisplayableItem:(id)arg1;
- (id)relatedDisplayableItems;
- (id)navigableItem_subtitle;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *children;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

