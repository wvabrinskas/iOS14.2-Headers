/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TimingInstance : NSObject {

	float startTiming;
	float stopTiming;
	float totalTime;
	BOOL isRunning;

}

@property (assign,nonatomic) float startTiming; 
@property (assign,nonatomic) float stopTiming; 
@property (assign,nonatomic) float totalTime; 
@property (assign,nonatomic) BOOL isRunning; 
+(id)createTimingInstanceWithStartTime:(float)arg1 ;
-(void)setIsRunning:(BOOL)arg1 ;
-(void)setTotalTime:(float)arg1 ;
-(BOOL)isRunning;
-(float)totalTime;
-(id)description;
-(void)setStartTiming:(float)arg1 ;
-(void)setStopTiming:(float)arg1 ;
-(float)startTiming;
-(float)stopTiming;
@end

