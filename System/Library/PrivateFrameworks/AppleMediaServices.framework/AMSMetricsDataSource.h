/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSMetricsDataSource
@required
-(void)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2;
-(void)skipEvents:(id)arg1 error:(id*)arg2;
-(void)didFinishBatching;
-(void)enumerateSortedEventsForTopic:(id)arg1 block:(/*^block*/id)arg2;
-(void)removeEvents:(id)arg1 error:(id*)arg2;
-(void)cancel;

@end

