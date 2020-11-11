/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, NSObject;

@interface HDFitnessMachineStateTimer : NSObject {

	NSString* _name;
	unsigned long long _duration;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long duration;                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy,readonly) id handler;                                  //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
+(id)_timerWithDuration:(long long)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSString *)name;
-(NSObject*<OS_dispatch_source>)timer;
-(void)begin;
-(unsigned long long)duration;
-(id)handler;
-(void)cancel;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isValid;
-(void)dealloc;
-(id)initWithName:(id)arg1 duration:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
@end
