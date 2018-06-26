//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JNWCollectionViewCell.h"

@class MMEmoticonData, NSAttributedString, NSImage, NSTrackingArea;

@interface MMEmojiPickerEmojiCell : JNWCollectionViewCell
{
    NSTrackingArea *_trackingArea;
    NSAttributedString *_stringForDrawing;
    NSImage *_imageForDrawing;
    BOOL _highlighted;
    BOOL _rollover;
    MMEmoticonData *_emoticonData;
}

@property(nonatomic) BOOL rollover; // @synthesize rollover=_rollover;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) MMEmoticonData *emoticonData; // @synthesize emoticonData=_emoticonData;
- (void).cxx_destruct;
- (void)clicked:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateTrackingAreas;
- (void)dealloc;
- (void)willLayoutWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
