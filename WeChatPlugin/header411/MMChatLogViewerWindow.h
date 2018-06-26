//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMChatItemViewerWindow.h"

#import "NSWindowDelegate.h"

@class FavoritesItemDataField, MMChatLogDetailViewController, MMMessageTableItem, MMTextView, NSString;

@interface MMChatLogViewerWindow : MMChatItemViewerWindow <NSWindowDelegate>
{
    NSString *_sourceBreadPath;
    MMChatLogDetailViewController *_detailViewController;
    MMTextView *_mainTitleTextView;
    FavoritesItemDataField *_dataField;
}

+ (id)viewerWindowForNestedRecord:(id)arg1 useSingleWindow:(BOOL)arg2;
+ (void)initialize;
@property(retain, nonatomic) FavoritesItemDataField *dataField; // @synthesize dataField=_dataField;
@property(retain, nonatomic) MMTextView *mainTitleTextView; // @synthesize mainTitleTextView=_mainTitleTextView;
@property(retain, nonatomic) MMChatLogDetailViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) NSString *sourceBreadPath; // @synthesize sourceBreadPath=_sourceBreadPath;
- (void).cxx_destruct;
- (void)forwardContentToContactsWithUserNames:(id)arg1;
- (void)closeWindowAnimated:(BOOL)arg1;
- (void)reloadAllImageCell;
- (void)windowDidResize:(id)arg1;
- (void)layoutMainTitleView:(id)arg1;
- (void)setUpMainTitleView;
- (void)close;
- (void)setUpChatLogDetailViewController;
- (id)shareSubMenuSupportActions;
- (BOOL)useSpaceKeyForClose;
- (struct CGSize)sizeForContent;
- (id)supportedActions;
- (void)refreshContent;
- (void)loadContent;
@property(readonly, nonatomic) MMMessageTableItem *messageItem;
- (void)dealloc;
- (void)windowDidLoad;
- (id)initWithFavoritesItemDataField:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
