//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTBorderedView.h>

@interface IBDevicePickerView : DVTBorderedView
{
    CDUnknownBlockType _didCompleteFirstLayoutCallback;
    CDUnknownBlockType _layoutTopDownCallback;
}

@property(copy, nonatomic) CDUnknownBlockType layoutTopDownCallback; // @synthesize layoutTopDownCallback=_layoutTopDownCallback;
@property(copy, nonatomic) CDUnknownBlockType didCompleteFirstLayoutCallback; // @synthesize didCompleteFirstLayoutCallback=_didCompleteFirstLayoutCallback;
- (void).cxx_destruct;
- (void)layoutTopDown;
- (void)layoutBottomUp;
- (void)_fireDidCompleteFirstLayoutCallback;

@end
