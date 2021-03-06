/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncOperation;

@interface HDCloudSyncConditionalOperation : HDCloudSyncOperation {

	HDCloudSyncOperation* _operation;
	/*^block*/id _shouldRunHandler;

}

@property (retain) HDCloudSyncOperation * operation;              //@synthesize operation=_operation - In the implementation block
@property (copy) id shouldRunHandler;                             //@synthesize shouldRunHandler=_shouldRunHandler - In the implementation block
+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
-(void)setOperation:(HDCloudSyncOperation *)arg1 ;
-(void)main;
-(id)description;
-(HDCloudSyncOperation *)operation;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 operation:(id)arg3 shouldRunHandler:(/*^block*/id)arg4 ;
-(void)setShouldRunHandler:(id)arg1 ;
-(id)shouldRunHandler;
@end

