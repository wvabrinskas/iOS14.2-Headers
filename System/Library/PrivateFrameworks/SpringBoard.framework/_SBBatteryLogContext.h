/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface _SBBatteryLogContext : NSObject {

	BOOL _hasChargedPartially;
	int _capacity;
	int _voltage;
	NSArray* _foregroundApplications;
	double _usageTimeInSeconds;
	double _standbyTimeInSeconds;

}

@property (nonatomic,retain) NSArray * foregroundApplications;              //@synthesize foregroundApplications=_foregroundApplications - In the implementation block
@property (assign,nonatomic) int capacity;                                  //@synthesize capacity=_capacity - In the implementation block
@property (assign,nonatomic) int voltage;                                   //@synthesize voltage=_voltage - In the implementation block
@property (assign,nonatomic) double usageTimeInSeconds;                     //@synthesize usageTimeInSeconds=_usageTimeInSeconds - In the implementation block
@property (assign,nonatomic) double standbyTimeInSeconds;                   //@synthesize standbyTimeInSeconds=_standbyTimeInSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasChargedPartially;                      //@synthesize hasChargedPartially=_hasChargedPartially - In the implementation block
-(void)setCapacity:(int)arg1 ;
-(int)capacity;
-(int)voltage;
-(BOOL)hasChargedPartially;
-(void)setHasChargedPartially:(BOOL)arg1 ;
-(NSArray *)foregroundApplications;
-(void)setForegroundApplications:(NSArray *)arg1 ;
-(void)setVoltage:(int)arg1 ;
-(double)usageTimeInSeconds;
-(void)setUsageTimeInSeconds:(double)arg1 ;
-(double)standbyTimeInSeconds;
-(void)setStandbyTimeInSeconds:(double)arg1 ;
@end
