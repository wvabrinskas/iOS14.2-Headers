/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CloudDocs/CloudDocs-Structs.h>
@class NSHashTable, NSObject;

@interface BRReachabilityMonitor : NSObject {

	NSHashTable* _reachabilityObservers;
	SCNetworkReachabilityRef _reachabilityRef;
	unsigned _reachabilityFlags;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) unsigned reachabilityFlags;              //@synthesize reachabilityFlags=_reachabilityFlags - In the implementation block
@property (nonatomic,readonly) BOOL isNetworkReachable; 
+(BOOL)isNetworkReachableForFlags:(unsigned)arg1 ;
+(unsigned)getReachabilityFlagsByCheckingNetwork;
+(id)sharedReachabilityMonitor;
-(BOOL)isNetworkReachable;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(unsigned)reachabilityFlags;
-(void)setReachabilityFlags:(unsigned)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end
