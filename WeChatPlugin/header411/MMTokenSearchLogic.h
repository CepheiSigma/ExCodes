//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MMTokenSearchLogic : NSObject
{
    NSArray *_searchResultList;
    NSArray *_allTags;
}

@property(retain, nonatomic) NSArray *allTags; // @synthesize allTags=_allTags;
@property(retain, nonatomic) NSArray *searchResultList; // @synthesize searchResultList=_searchResultList;
- (void).cxx_destruct;
- (void)dealloc;
- (void)doSearchByKey:(id)arg1 except:(id)arg2;
- (void)fetchAllTags;
- (id)init;

@end
