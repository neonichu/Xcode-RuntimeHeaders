//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class DBGNavigatorCompressedIndicatorView, NSColor;

@interface DBGNavigatorCompressedTableCellView : NSTableCellView
{
    DBGNavigatorCompressedIndicatorView *_compressedIndicatorView;
}

+ (void)registerNibWithOutlineView:(id)arg1 forIdentifier:(id)arg2;
@property(retain) DBGNavigatorCompressedIndicatorView *compressedIndicatorView; // @synthesize compressedIndicatorView=_compressedIndicatorView;
- (void).cxx_destruct;
@property(copy) NSColor *color;

@end

