/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface CAMCallStatusMonitor : NSObject {

	BOOL _callActive;
	NSMutableSet* __disabledReasons;
	NSObject*<OS_dispatch_queue> __avscAccessQueue;

}

@property (nonatomic,readonly) NSMutableSet * _disabledReasons;                            //@synthesize _disabledReasons=__disabledReasons - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _avscAccessQueue;              //@synthesize _avscAccessQueue=__avscAccessQueue - In the implementation block
@property (assign,getter=isCallActive,nonatomic) BOOL callActive;                          //@synthesize callActive=_callActive - In the implementation block
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)setCallActive:(BOOL)arg1 ;
-(id)init;
-(NSMutableSet *)_disabledReasons;
-(id)initDisabledForLaunch;
-(void)_setCallActive:(BOOL)arg1 ;
-(void)removeDisabledReason:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)_avscAccessQueue;
-(void)_registerForAVSystemControllerNotifications;
-(id)initWithInitialDisabledReasons:(id)arg1 ;
-(id)_descriptionStringForReason:(long long)arg1 ;
-(void)_handleServerConnectionDiedNotification:(id)arg1 ;
-(id)_descriptionForReasons:(id)arg1 ;
-(void)_handleCallIsActiveDidChangeNotification:(id)arg1 ;
-(BOOL)isCallActive;
-(void)addDisabledReason:(long long)arg1 ;
-(void)_accessQueue_queryCallActiveStatusForReason:(id)arg1 ;
-(void)_enableCallStatusMonitor;
-(void)dealloc;
@end

