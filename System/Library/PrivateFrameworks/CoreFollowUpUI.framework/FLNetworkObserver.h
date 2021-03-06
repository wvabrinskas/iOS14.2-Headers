/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_nw_path_monitor, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface FLNetworkObserver : NSObject {

	NSObject*<OS_nw_path_monitor> _pathMonitor;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableDictionary* _invocationByObserver;
	BOOL _isNetworkReachable;
	BOOL _isWiFiEnabled;

}

@property (readonly) BOOL isNetworkReachable; 
@property (readonly) BOOL isAirplaneModeActiveWithoutWiFi; 
+(id)sharedNetworkObserver;
-(BOOL)isNetworkReachable;
-(id)init;
-(void)_startPathMonitor;
-(void)_stopPathMonitor;
-(void)_networkReachabilityDidChange;
-(void)removeNetworkReachableObserver:(id)arg1 ;
-(void)disableAirplaneMode;
-(BOOL)_isWiFiEnabled;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(id)_init;
-(void)dealloc;
-(BOOL)isAirplaneModeActiveWithoutWiFi;
-(id)addNetworkReachableBlock:(/*^block*/id)arg1 ;
@end

