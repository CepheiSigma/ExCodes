//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@interface MMPreviewNoBlurImageView : NSImageView
{
    BOOL _isAlreadySetupWithHDImg;
    double _degree;
}

@property(nonatomic) double degree; // @synthesize degree=_degree;
@property(nonatomic) BOOL isAlreadySetupWithHDImg; // @synthesize isAlreadySetupWithHDImg=_isAlreadySetupWithHDImg;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;

@end
