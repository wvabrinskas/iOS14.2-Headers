/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKPermanentWritableEventStore
@required
-(void)recordEvent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)recordInteraction:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
-(void)recordInteraction:(id)arg1 bundleId:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)recordEvent:(id)arg1 error:(id*)arg2;
-(BOOL)recordInteraction:(id)arg1 error:(id*)arg2;
-(void)recordInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2;
-(void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

