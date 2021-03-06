/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDQueryServer.h>

@interface HDBatchedQueryServer : HDQueryServer {

	/*^block*/id _unitTest_queryServerObjectEnumerationHandler;
	/*^block*/id _unitTest_queryServerWillSendBatchHandler;

}

@property (nonatomic,copy) id unitTest_queryServerObjectEnumerationHandler;              //@synthesize unitTest_queryServerObjectEnumerationHandler=_unitTest_queryServerObjectEnumerationHandler - In the implementation block
@property (nonatomic,copy) id unitTest_queryServerWillSendBatchHandler;                  //@synthesize unitTest_queryServerWillSendBatchHandler=_unitTest_queryServerWillSendBatchHandler - In the implementation block
-(id)unitTest_queryServerObjectEnumerationHandler;
-(long long)batchObjectsWithEnumerator:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(long long)batchObjectsWithEnumerator:(id)arg1 includeDeletedObjects:(BOOL)arg2 error:(id*)arg3 batchHandler:(/*^block*/id)arg4 ;
-(id)unitTest_queryServerWillSendBatchHandler;
-(void)setUnitTest_queryServerWillSendBatchHandler:(id)arg1 ;
-(/*^block*/id)_processBatchHandlerForResearchAppECGAccess:(/*^block*/id)arg1 ;
-(void)setUnitTest_queryServerObjectEnumerationHandler:(id)arg1 ;
@end

