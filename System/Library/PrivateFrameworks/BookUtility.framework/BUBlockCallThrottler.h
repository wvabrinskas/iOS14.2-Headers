/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface BUBlockCallThrottler : NSObject {

	BOOL _running;
	double _minimumTimeBetweenCalls;
	NSDate* _lastBlockCallDate;

}

@property (nonatomic,retain) NSDate * lastBlockCallDate;                  //@synthesize lastBlockCallDate=_lastBlockCallDate - In the implementation block
@property (assign,nonatomic) BOOL running;                                //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) double minimumTimeBetweenCalls;              //@synthesize minimumTimeBetweenCalls=_minimumTimeBetweenCalls - In the implementation block
-(void)setRunning:(BOOL)arg1 ;
-(id)init;
-(BOOL)running;
-(void)runBlock:(/*^block*/id)arg1 ;
-(BOOL)_runBlock:(/*^block*/id)arg1 throttle:(BOOL)arg2 ;
-(double)minimumTimeBetweenCalls;
-(NSDate *)lastBlockCallDate;
-(void)setLastBlockCallDate:(NSDate *)arg1 ;
-(BOOL)runBlockThrottled:(/*^block*/id)arg1 ;
-(void)setMinimumTimeBetweenCalls:(double)arg1 ;
@end

