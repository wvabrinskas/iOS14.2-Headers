/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface CSCommandControlBehaviorMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                         //@synthesize observers=_observers - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSHashTable *)observers;
-(void)notifyDidStopStream:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)notifyDidStartStreamWithContext:(id)arg1 successfully:(BOOL)arg2 option:(id)arg3 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)notifyWillStopStream:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)notifyWillStartStreamWithContext:(id)arg1 option:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end
