/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TLTimelineDataSourceProvider.h>

@class NTKTimelineDataSourceWrapper, NSOperationQueue, NSString;

@interface NTKTimelineRemoteDataSourceProvider : NSObject <TLTimelineDataSourceProvider> {

	NTKTimelineDataSourceWrapper* _wrapper;
	NSOperationQueue* _operationQueue;
	double _timeout;

}

@property (nonatomic,readonly) NTKTimelineDataSourceWrapper * wrapper;                //@synthesize wrapper=_wrapper - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) double timeout;                                        //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) id<CLKComplicationDataSource> dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSOperationQueue *)operationQueue;
-(id)initWithDataSource:(id)arg1 ;
-(id<CLKComplicationDataSource>)dataSource;
-(NTKTimelineDataSourceWrapper *)wrapper;
-(double)timeout;
-(void)getCurrentEntryForComplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)tl_getDataSourceWithCompletion:(/*^block*/id)arg1 ;
@end
