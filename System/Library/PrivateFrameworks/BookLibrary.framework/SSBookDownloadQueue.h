/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol SSBookDownloadQueue <NSObject>
@property (nonatomic,readonly) NSArray * downloads; 
@required
+(id*)sharedInstance;
-(NSArray *)downloads;
-(void)cancelDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeObserver:(id)arg1;
-(void)addDownloadsWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addDownloadWithPurchaseParameters:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelAllActiveDownloadsWithCompletion:(/*^block*/id)arg1;
-(void)processAutomaticDownloadsWithReply:(/*^block*/id)arg1;
-(void)addDownloadWithPermlink:(id)arg1 title:(id)arg2 completion:(/*^block*/id)arg3;
-(void)resumeDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addRestoreDownloadsWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addRestoreDownloadWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addObserver:(id)arg1;
-(void)addDownloadWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)pauseDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

