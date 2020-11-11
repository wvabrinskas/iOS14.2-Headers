/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CAMClosedViewfinderControllerDelegate;
@class NSMutableSet;

@interface CAMClosedViewfinderController : NSObject {

	id<CAMClosedViewfinderControllerDelegate> _delegate;
	NSMutableSet* __reasonsForClosingViewfinder;
	double __referenceTime;
	long long __referenceTimeEvent;

}

@property (nonatomic,readonly) NSMutableSet * _reasonsForClosingViewfinder;                             //@synthesize _reasonsForClosingViewfinder=__reasonsForClosingViewfinder - In the implementation block
@property (assign,setter=_setReferenceTime:,nonatomic) double _referenceTime;                           //@synthesize _referenceTime=__referenceTime - In the implementation block
@property (assign,setter=_setReferenceTimeEvent:,nonatomic) long long _referenceTimeEvent;              //@synthesize _referenceTimeEvent=__referenceTimeEvent - In the implementation block
@property (assign,nonatomic,__weak) id<CAMClosedViewfinderControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (getter=isViewfinderClosed,nonatomic,readonly) BOOL viewfinderClosed; 
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)_handleApplicationDidBecomeActive:(id)arg1 ;
-(void)_performDelayedRemovalOfReason:(id)arg1 ;
-(void)_setReferenceTimeEvent:(long long)arg1 ;
-(long long)_referenceTimeEvent;
-(void)addClosedViewfinderReason:(long long)arg1 ;
-(id)init;
-(id<CAMClosedViewfinderControllerDelegate>)delegate;
-(id)descriptionForTimeBetweenReferenceAndNow;
-(double)_referenceTime;
-(void)_setReferenceTime:(double)arg1 ;
-(NSMutableSet *)_reasonsForClosingViewfinder;
-(void)setDelegate:(id<CAMClosedViewfinderControllerDelegate>)arg1 ;
-(void)cancelDelayedRemovalOfReason:(long long)arg1 ;
-(id)_descriptionStringForReason:(long long)arg1 ;
-(void)removeClosedViewfinderReason:(long long)arg1 ;
-(void)_scheduleLogWarningIfViewfinderStillClosedAfterDelay:(double)arg1 ;
-(void)_logWarningIfViewfinderStillClosed;
-(id)_descriptionForReasons:(id)arg1 ;
-(void)_cancelDelayedLoggingForClosedViewfinder;
-(BOOL)hasClosedViewfinderReason:(long long)arg1 ;
-(void)_updateReferenceTimeToNowForEvent:(long long)arg1 ;
-(void)removeClosedViewfinderReason:(long long)arg1 afterDelay:(double)arg2 ;
-(BOOL)isViewfinderClosed;
-(id)_descriptionStringForReferenceTimeEvent:(long long)arg1 ;
-(void)dealloc;
@end
