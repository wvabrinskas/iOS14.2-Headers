/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HUClipScrubberTimeController : NSObject {

	BOOL _portraitMode;
	BOOL _userControlled;
	double _timeScale;
	double _minimumDuration;
	double _maximumDuration;

}

@property (assign,nonatomic) double minimumDuration;                    //@synthesize minimumDuration=_minimumDuration - In the implementation block
@property (assign,nonatomic) double maximumDuration;                    //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (assign,nonatomic) double timeScale;                          //@synthesize timeScale=_timeScale - In the implementation block
@property (nonatomic,readonly) double maximumGestureScale; 
@property (assign,nonatomic) BOOL portraitMode;                         //@synthesize portraitMode=_portraitMode - In the implementation block
@property (assign,nonatomic) BOOL userControlled;                       //@synthesize userControlled=_userControlled - In the implementation block
-(double)timeScale;
-(id)init;
-(void)setTimeScale:(double)arg1 ;
-(void)setMaximumDuration:(double)arg1 ;
-(double)maximumDuration;
-(double)posterFrameWidthForEvent:(id)arg1 ;
-(void)setPortraitMode:(BOOL)arg1 ;
-(BOOL)portraitMode;
-(void)reloadEvents:(id)arg1 ;
-(double)timeScaleForGestureScale:(double)arg1 ;
-(double)timeScaleForGestureScale:(double)arg1 maxDuration:(double)arg2 ;
-(double)minimumDuration;
-(double)maximumGestureScale;
-(void)setUserControlled:(BOOL)arg1 ;
-(BOOL)isAtMinimumZoom;
-(void)expandTimelineToMaximumZoom;
-(void)shrinkTimelineToMinimumZoom;
-(double)timelineWidthForEvent:(id)arg1 ;
-(void)updateTimeScaleIfNeeded;
-(BOOL)userControlled;
-(double)posterFrameWidthFromCameraLiveSource;
-(void)setMinimumDuration:(double)arg1 ;
@end

