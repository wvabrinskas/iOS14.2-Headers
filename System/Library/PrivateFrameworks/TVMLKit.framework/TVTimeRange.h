/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface TVTimeRange : NSObject {

	double _startTime;
	double _endTime;
	double _duration;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,nonatomic) double startTime;                //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                  //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) double duration;                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
-(double)endTime;
-(void)setDuration:(double)arg1 ;
-(NSDate *)endDate;
-(double)startTime;
-(void)setEndTime:(double)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setStartTime:(double)arg1 ;
-(double)duration;
-(void)setStartDate:(NSDate *)arg1 ;
@end

