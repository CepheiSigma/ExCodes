//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMBaseChatsViewController.h"

#import "BrandSessionMgrExt.h"
#import "MMChatDetailSplitViewDelegate.h"
#import "MMChatsTableCellViewDelegate.h"
#import "MMTableViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MMOfficialAccountsDetailViewController, MMView, NSString, NSTextField, RFOverlayScrollView, WCContactData;

@interface MMBrandChatsViewController : MMBaseChatsViewController <NSTableViewDataSource, NSTableViewDelegate, BrandSessionMgrExt, MMChatsTableCellViewDelegate, MMTableViewDelegate, MMChatDetailSplitViewDelegate>
{
    BOOL _showHighlightSelection;
    unsigned long long _lastSelectedRow;
    NSString *_lastSelectedUserName;
    MMView *_topView;
    NSTextField *_titleLabel;
    WCContactData *_currContact;
    RFOverlayScrollView *_tableScrollView;
    CDUnknownBlockType _brandChatsSelectionDidChangeBlock;
    MMOfficialAccountsDetailViewController *_officialAccountsDetailViewController;
}

@property(retain, nonatomic) MMOfficialAccountsDetailViewController *officialAccountsDetailViewController; // @synthesize officialAccountsDetailViewController=_officialAccountsDetailViewController;
@property(copy, nonatomic) CDUnknownBlockType brandChatsSelectionDidChangeBlock; // @synthesize brandChatsSelectionDidChangeBlock=_brandChatsSelectionDidChangeBlock;
@property __weak RFOverlayScrollView *tableScrollView; // @synthesize tableScrollView=_tableScrollView;
@property(retain, nonatomic) WCContactData *currContact; // @synthesize currContact=_currContact;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak MMView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSString *lastSelectedUserName; // @synthesize lastSelectedUserName=_lastSelectedUserName;
@property(nonatomic) unsigned long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property(nonatomic) BOOL showHighlightSelection; // @synthesize showHighlightSelection=_showHighlightSelection;
- (void).cxx_destruct;
- (void)handleAppFontSize;
- (void)chatDetailSplitViewDidHidden;
- (void)keyDown:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)selectLeftItem;
- (void)showDetailChatPanel:(id)arg1;
- (void)tableView:(id)arg1 rowGotMouseUp:(long long)arg2;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (void)cellView:(id)arg1 deleteWithUserName:(id)arg2;
- (void)OnDeleteBrandSession:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)OnBrandSessionChanged:(id)arg1;
- (void)OnBrandSessionsReoredered;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)selectFirstIfNothingSelected;
- (void)showBrandChatContactList;
- (void)startChatWithContact:(id)arg1;
- (void)cleanHighlightSelectionAndScrollToTop;
- (void)cleanHighlightSelection;
- (void)setupTopView;
- (void)selectLastChatIfPossible;
- (void)_layoutTitleLabel;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

