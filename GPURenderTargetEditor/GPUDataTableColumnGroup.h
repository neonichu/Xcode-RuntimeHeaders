//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GPUDataTableColumnGroup : NSObject
{
    NSString *_title;
    long long _columnCount;
}

@property(readonly, nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 columnCount:(long long)arg2;

@end

