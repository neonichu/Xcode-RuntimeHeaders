//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsKit/DTDraggedImageStateTransitionView.h>

@interface IBSimpleCrossfadeDragImageStateTransition : DTDraggedImageStateTransitionView
{
}

- (void)drawRect:(struct CGRect)arg1;
- (void)setProgress:(float)arg1;
- (struct CGSize)idealFrameSize;
- (struct CGPoint)toAnchor;
- (struct CGPoint)fromAnchor;
- (id)toImage;
- (id)fromImage;
- (id)initWithFromState:(id)arg1 andToState:(id)arg2;

@end

