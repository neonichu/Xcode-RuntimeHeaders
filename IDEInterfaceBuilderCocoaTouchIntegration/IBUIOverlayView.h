//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@protocol IBUIOverlayViewDelegate;

@interface IBUIOverlayView : NSView
{
    id <IBUIOverlayViewDelegate> _delegate;
}

@property __weak id <IBUIOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
