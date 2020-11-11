/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID;

@interface RTStateWeeklyStatisticsEl : NSObject {

	double _numOfClustEntPerWeek;
	double _avgAggTime_s;
	double _stdAggTime_s;
	double _daysPerWeek;
	NSUUID* _stateUUID;
	double _topMedian;

}

@property (assign,nonatomic) double numOfClustEntPerWeek;              //@synthesize numOfClustEntPerWeek=_numOfClustEntPerWeek - In the implementation block
@property (assign,nonatomic) double avgAggTime_s;                      //@synthesize avgAggTime_s=_avgAggTime_s - In the implementation block
@property (assign,nonatomic) double stdAggTime_s;                      //@synthesize stdAggTime_s=_stdAggTime_s - In the implementation block
@property (assign,nonatomic) double daysPerWeek;                       //@synthesize daysPerWeek=_daysPerWeek - In the implementation block
@property (nonatomic,copy) NSUUID * stateUUID;                         //@synthesize stateUUID=_stateUUID - In the implementation block
@property (assign,nonatomic) double topMedian;                         //@synthesize topMedian=_topMedian - In the implementation block
-(id)init;
-(NSUUID *)stateUUID;
-(void)setStateUUID:(NSUUID *)arg1 ;
-(void)setAvgAggTime_s:(double)arg1 ;
-(void)setStdAggTime_s:(double)arg1 ;
-(void)setDaysPerWeek:(double)arg1 ;
-(void)setNumOfClustEntPerWeek:(double)arg1 ;
-(void)setTopMedian:(double)arg1 ;
-(double)numOfClustEntPerWeek;
-(double)avgAggTime_s;
-(double)stdAggTime_s;
-(double)daysPerWeek;
-(double)topMedian;
@end
