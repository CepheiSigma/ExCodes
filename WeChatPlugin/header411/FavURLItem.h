//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FavURLItem : NSObject
{
    int _openCache;
    NSString *_title;
    NSString *_descriptionStr;
    NSString *_cleanUrl;
    NSString *_thumbUrl;
}

@property(nonatomic) int openCache; // @synthesize openCache=_openCache;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *cleanUrl; // @synthesize cleanUrl=_cleanUrl;
@property(retain, nonatomic) NSString *descriptionStr; // @synthesize descriptionStr=_descriptionStr;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

