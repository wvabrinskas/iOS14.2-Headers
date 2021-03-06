/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, EFObserver;
@class NSObject, EFObservable;

@interface MFLockStateMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	EFObservable*<EFObserver> _observable;
	BOOL _isLocked;

}

@property (nonatomic,readonly) EFObservable * lockStateObservable; 
@property (getter=isLocked,readonly) BOOL locked; 
+(id)sharedInstance;
-(BOOL)isLocked;
-(id)init;
-(EFObservable *)lockStateObservable;
-(void)_receiveLockState:(BOOL)arg1 ;
-(void)dealloc;
@end

