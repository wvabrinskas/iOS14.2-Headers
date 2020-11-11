/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol TBFetchResponse, TBFetchRequest;
@class NSDate, TBRemoteFetchAndCacheDataSource;

@interface TBRemoteFetchAndCacheOperation : NSOperation {

	BOOL _finished;
	NSDate* _start;
	id<TBFetchResponse> _response;
	id<TBFetchRequest> _fetchRequest;
	TBRemoteFetchAndCacheDataSource* _dataSource;

}

@property (nonatomic,retain) id<TBFetchRequest> fetchRequest;                           //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) id<TBFetchResponse> response;                              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) TBRemoteFetchAndCacheDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)finish;
-(void)start;
-(id<TBFetchRequest>)fetchRequest;
-(void)setFetchRequest:(id<TBFetchRequest>)arg1 ;
-(void)setDataSource:(TBRemoteFetchAndCacheDataSource *)arg1 ;
-(id)name;
-(TBRemoteFetchAndCacheDataSource *)dataSource;
-(void)setResponse:(id<TBFetchResponse>)arg1 ;
-(BOOL)isFinished;
-(BOOL)isReady;
-(id<TBFetchResponse>)response;
-(id)initWithFetchRequest:(id)arg1 dataSource:(id)arg2 ;
@end
