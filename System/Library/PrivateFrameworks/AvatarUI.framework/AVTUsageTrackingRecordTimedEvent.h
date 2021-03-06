/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVTAvatarRecord;
@class NSDate;

@interface AVTUsageTrackingRecordTimedEvent : NSObject {

	BOOL _paused;
	id<AVTAvatarRecord> _record;
	NSDate* _currentStartTime;
	double _totalTime;

}

@property (nonatomic,retain) NSDate * currentStartTime;                 //@synthesize currentStartTime=_currentStartTime - In the implementation block
@property (assign,nonatomic) double totalTime;                          //@synthesize totalTime=_totalTime - In the implementation block
@property (assign,nonatomic) BOOL paused;                               //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarRecord> record;              //@synthesize record=_record - In the implementation block
-(void)setPaused:(BOOL)arg1 ;
-(id<AVTAvatarRecord>)record;
-(BOOL)paused;
-(void)setTotalTime:(double)arg1 ;
-(double)totalTime;
-(void)setCurrentStartTime:(NSDate *)arg1 ;
-(NSDate *)currentStartTime;
-(id)initWithStartTime:(id)arg1 record:(id)arg2 ;
-(void)pauseAtTime:(id)arg1 ;
-(void)resumeAtTime:(id)arg1 ;
-(double)totalElapsedTimeAtTime:(id)arg1 ;
@end

