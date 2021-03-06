/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SBLockScreenManager, SBLockStateAggregator, NSMutableDictionary, NSMutableSet, DNDEventBehaviorResolutionService;

@interface SBNCSoundController : NSObject {

	SBLockScreenManager* _lockScreenManager;
	SBLockStateAggregator* _lockStateAggregator;
	NSMutableDictionary* _playingSounds;
	NSMutableSet* _requestsRequiringExplicitKill;
	DNDEventBehaviorResolutionService* _dndEventBehaviorResolutionService;

}

@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                            //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBLockStateAggregator * lockStateAggregator;                                        //@synthesize lockStateAggregator=_lockStateAggregator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playingSounds;                                                //@synthesize playingSounds=_playingSounds - In the implementation block
@property (nonatomic,retain) NSMutableSet * requestsRequiringExplicitKill;                                       //@synthesize requestsRequiringExplicitKill=_requestsRequiringExplicitKill - In the implementation block
@property (nonatomic,retain) DNDEventBehaviorResolutionService * dndEventBehaviorResolutionService;              //@synthesize dndEventBehaviorResolutionService=_dndEventBehaviorResolutionService - In the implementation block
-(SBLockScreenManager *)lockScreenManager;
-(DNDEventBehaviorResolutionService *)dndEventBehaviorResolutionService;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(void)playSoundIfPossibleForNotificationRequest:(id)arg1 presentingDestination:(id)arg2 ;
-(id)init;
-(void)setDndEventBehaviorResolutionService:(DNDEventBehaviorResolutionService *)arg1 ;
-(SBLockStateAggregator *)lockStateAggregator;
-(void)_hardwareButtonPressed:(id)arg1 ;
-(void)setLockStateAggregator:(SBLockStateAggregator *)arg1 ;
-(void)setRequestsRequiringExplicitKill:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)playingSounds;
-(NSMutableSet *)requestsRequiringExplicitKill;
-(void)_lockStateChanged:(id)arg1 ;
-(void)stopSoundForNotificationRequest:(id)arg1 ;
-(void)playSoundForNotificationRequest:(id)arg1 presentingDestination:(id)arg2 ;
-(BOOL)canPlaySoundForNotificationRequest:(id)arg1 ;
-(void)_killSounds;
-(id)initWithLockScreenManager:(id)arg1 lockStateAggregator:(id)arg2 ;
-(BOOL)_isDeviceUILocked;
-(void)setPlayingSounds:(NSMutableDictionary *)arg1 ;
@end

