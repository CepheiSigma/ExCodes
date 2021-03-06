//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMResourceDownloadDelegate.h"
#import "MMResourceDownloadMgr.h"

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSRecursiveLock, NSString;

@interface MMResourceDownloadMgr : NSObject <MMResourceDownloadDelegate, MMResourceDownloadMgr>
{
    NSMutableArray *_taskQueue;
    NSMutableDictionary *_dictDownloadingTask;
    NSRecursiveLock *_lock;
    NSOperationQueue *_operationQueue;
    id <MMResDownloadMgrDelegate> _downloadMgrDelegate;
}

@property(nonatomic) __weak id <MMResDownloadMgrDelegate> downloadMgrDelegate; // @synthesize downloadMgrDelegate=_downloadMgrDelegate;
- (void).cxx_destruct;
- (void)onDownloadFinish:(long long)arg1 downloadData:(id)arg2 resUrl:(id)arg3;
- (void)checkQueue;
- (void)cancelDownload:(id)arg1;
- (void)addDownloadTask:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

