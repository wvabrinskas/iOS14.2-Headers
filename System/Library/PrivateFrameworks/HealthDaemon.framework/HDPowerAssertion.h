/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface HDPowerAssertion : NSObject {

	unsigned _assertionID;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _timeoutHandler;
	AB _invalidated;
	NSString* _identifier;
	double _timeout;

}

@property (readonly) BOOL invalidated; 
@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) double timeout;                          //@synthesize timeout=_timeout - In the implementation block
+(id)powerAssertionWithIdentifier:(id)arg1 timeout:(double)arg2 timeoutHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)_scheduleTimer;
-(NSString *)identifier;
-(BOOL)invalidated;
-(void)_timerDidFire;
-(double)timeout;
-(void)invalidate;
-(void)dealloc;
-(id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 timeoutHandler:(/*^block*/id)arg3 ;
@end
