/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBProximityBacklightPolicy.h>

@protocol BSInvalidatable;
@class SBIdleTimerGlobalCoordinator, SBBacklightController, NSString;

@interface SBDefaultProximityBacklightPolicy : NSObject <SBProximityBacklightPolicy> {

	SBBacklightController* _backlightController;
	id<BSInvalidatable> _idleTimerDisableAssertion;
	BOOL _scheduled;
	SBIdleTimerGlobalCoordinator* _idleTimerGlobalCoordinator;

}

@property (nonatomic,retain) SBIdleTimerGlobalCoordinator * idleTimerGlobalCoordinator;              //@synthesize idleTimerGlobalCoordinator=_idleTimerGlobalCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setIdleTimerGlobalCoordinator:(SBIdleTimerGlobalCoordinator *)arg1 ;
-(id)initWithBacklightController:(id)arg1 ;
-(void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1 ;
-(void)_scheduleBacklightFactorToZeroAfterDefaultDuration;
-(void)_restoreBacklightFactor;
-(void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(BOOL)arg2 ;
-(void)_backlightWillUndim:(id)arg1 ;
-(void)_cancelScheduledBacklightFactorToZero;
-(void)_turnBacklightOff;
-(SBIdleTimerGlobalCoordinator *)idleTimerGlobalCoordinator;
@end

