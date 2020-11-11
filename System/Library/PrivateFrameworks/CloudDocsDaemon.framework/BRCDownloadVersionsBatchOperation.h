/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

@class NSMutableDictionary;

@interface BRCDownloadVersionsBatchOperation : BRCTransferBatchOperation {

	NSMutableDictionary* _readers;
	/*^block*/id _perDownloadCompletionBlock;

}

@property (copy) id perDownloadCompletionBlock;              //@synthesize perDownloadCompletionBlock=_perDownloadCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)createActivity;
-(void)addDownload:(id)arg1 ;
-(void)setPerDownloadCompletionBlock:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 forNonLocalVersion:(BOOL)arg2 ;
-(void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2 ;
-(void)mainWithTransfers:(id)arg1 ;
-(id)actionPrettyName;
-(void)addReaderID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelReaderID:(id)arg1 ;
-(id)perDownloadCompletionBlock;
-(id)transferredObjectsPrettyName;
@end
