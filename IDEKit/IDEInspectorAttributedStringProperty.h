/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorProperty.h>

@class IDEAttributedStringControl, IDEInspectorKeyPath;

@interface IDEInspectorAttributedStringProperty : IDEInspectorProperty
{
    IDEAttributedStringControl *_attributedStringControl;
    IDEInspectorKeyPath *_valueKeyPath;
}

- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (double)baseline;
- (void)setupRefreshTriggersAndConfigure;
- (void)awakeFromNib;
- (void)userDidUpdateAttributedStringValue:(id)arg1;
- (void)refresh;
- (void)primitiveInvalidate;

@end
