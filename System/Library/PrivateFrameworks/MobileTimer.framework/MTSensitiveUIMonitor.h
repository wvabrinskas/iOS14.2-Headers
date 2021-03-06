/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MobileTimer/MobileTimer-Structs.h>
@class MTObserverStore;

@interface MTSensitiveUIMonitor : NSObject {

	BOOL _hideSensitiveUI;
	BOOL _needPrefsUpdate;
	int _notifyToken;
	os_unfair_lock_s _lock;
	MTObserverStore* _observers;

}

@property (nonatomic,retain) MTObserverStore * observers;              //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) int notifyToken;                          //@synthesize notifyToken=_notifyToken - In the implementation block
@property (assign,nonatomic) BOOL hideSensitiveUI;                     //@synthesize hideSensitiveUI=_hideSensitiveUI - In the implementation block
@property (assign,nonatomic) BOOL needPrefsUpdate;                     //@synthesize needPrefsUpdate=_needPrefsUpdate - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                    //@synthesize lock=_lock - In the implementation block
+(id)sharedMonitor;
-(int)notifyToken;
-(void)registerForNotifications;
-(void)unregisterForNotifications;
-(os_unfair_lock_s)lock;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)setHideSensitiveUI:(BOOL)arg1 ;
-(void)setNeedPrefsUpdate:(BOOL)arg1 ;
-(id)init;
-(BOOL)hideSensitiveUI;
-(MTObserverStore *)observers;
-(void)addSensitiveUIObserver:(id)arg1 ;
-(BOOL)needPrefsUpdate;
-(void)setNotifyToken:(int)arg1 ;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(void)_handleNotification;
-(void)removeSensitiveUIObserver:(id)arg1 ;
-(BOOL)shouldHideForSensitivity:(long long)arg1 ;
-(BOOL)_hideSensitiveUI;
-(BOOL)_isVendorRelease;
-(void)dealloc;
@end

