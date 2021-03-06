/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PBBridgeIDSReachabilityObserver;
@interface PBBridgeIDSReachabilityObserverWrapper : NSObject {

	id<PBBridgeIDSReachabilityObserver> _observer;

}

@property (assign,nonatomic,__weak) id<PBBridgeIDSReachabilityObserver> observer;              //@synthesize observer=_observer - In the implementation block
-(void)setObserver:(id<PBBridgeIDSReachabilityObserver>)arg1 ;
-(id<PBBridgeIDSReachabilityObserver>)observer;
-(void)fireReachability:(id)arg1 deviceStatus:(id)arg2 devices:(id)arg3 ;
@end

