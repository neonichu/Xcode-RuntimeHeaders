//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAbstractLayoutConstraintAbstraction.h>

@class IBLayoutConstraint;

@interface IBDocumentLayoutConstraintAbstraction : IBAbstractLayoutConstraintAbstraction
{
    IBLayoutConstraint *_constraintInDocument;
}

@property(retain, nonatomic) IBLayoutConstraint *constraintInDocument; // @synthesize constraintInDocument=_constraintInDocument;
- (void).cxx_destruct;
- (double)priority;
- (id)makeRepresentingConstraintWithProvider:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToAbstraction:(id)arg1;
- (id)description;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithConstraintInDocument:(id)arg1;

@end

