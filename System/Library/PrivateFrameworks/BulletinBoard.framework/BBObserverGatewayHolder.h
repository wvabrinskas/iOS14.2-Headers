/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, PCPersistentTimer, NSMutableArray, BBObserverClientProxy, NSString, BBMaskedSet;

@interface BBObserverGatewayHolder : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PCPersistentTimer* _timeoutTimer;
	NSMutableArray* _timeouts;
	BBObserverClientProxy* _gateway;
	unsigned long long _gatewayPriority;
	unsigned long long _feed;
	NSString* _name;
	BBMaskedSet* _observerFeedSet;

}

@property (nonatomic,retain) BBObserverClientProxy * gateway;                 //@synthesize gateway=_gateway - In the implementation block
@property (assign,nonatomic) unsigned long long gatewayPriority;              //@synthesize gatewayPriority=_gatewayPriority - In the implementation block
@property (assign,nonatomic) unsigned long long feed;                         //@synthesize feed=_feed - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BBMaskedSet * observerFeedSet;                 //@synthesize observerFeedSet=_observerFeedSet - In the implementation block
-(void)setGateway:(BBObserverClientProxy *)arg1 ;
-(void)_startTimerWithFireDate:(id)arg1 ;
-(void)setFeed:(unsigned long long)arg1 ;
-(void)_startNextTimer;
-(BBObserverClientProxy *)gateway;
-(BOOL)_invalidateTimeout:(id)arg1 ;
-(NSString *)name;
-(id)_addTimeout:(double)arg1 forBulletinID:(id)arg2 inSectionID:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)sendAddBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 forFeeds:(unsigned long long)arg3 withTimeout:(double)arg4 handler:(/*^block*/id)arg5 ;
-(void)_invalidateTimer;
-(BBMaskedSet *)observerFeedSet;
-(void)_handleTimeout;
-(void)setGatewayPriority:(unsigned long long)arg1 ;
-(unsigned long long)gatewayPriority;
-(void)sendObserversAddBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 forFeeds:(unsigned long long)arg3 ;
-(id)initWithQueue:(id)arg1 name:(id)arg2 ;
-(unsigned long long)feed;
-(void)sendObserver:(id)arg1 addBulletin:(id)arg2 playLightsAndSirens:(BOOL)arg3 forFeeds:(unsigned long long)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
@end
