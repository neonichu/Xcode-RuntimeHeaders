/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IDEDataValue <NSObject>
@property(readonly) BOOL childValuesCountValid;
@property(readonly) NSArray *childValues;
@property(readonly) BOOL hasChildValues;
@property(readonly) BOOL inScope;
@property(readonly) BOOL itemDescriptionHasChanged;
@property(readonly, copy) NSString *itemDescription;
@property(readonly) BOOL typeHasChanged;
@property(readonly, copy) NSString *type;
@property(readonly, copy) NSString *primitiveLogicalValue;
@property(readonly) BOOL logicalValueHasChanged;
@property(readonly, copy) NSString *logicalValue;
@property(readonly) BOOL valueHasChanged;
@property(readonly) BOOL isValueEditable;
@property(copy) NSString *value;
@property(readonly, copy) NSString *name;
@end
