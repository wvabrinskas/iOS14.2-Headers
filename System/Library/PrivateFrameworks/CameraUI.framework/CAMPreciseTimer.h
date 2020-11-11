/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSObject;

@interface CAMPreciseTimer : NSObject {

	BOOL _fired;
	double _delay;
	double _interval;
	/*^block*/id __handler;
	NSObject*<OS_dispatch_source> __currentTimer;

}

@property (nonatomic,copy,readonly) id _handler;                                                                //@synthesize _handler=__handler - In the implementation block
@property (setter=_setCurrentTimer:,nonatomic,retain) NSObject*<OS_dispatch_source> _currentTimer;              //@synthesize _currentTimer=__currentTimer - In the implementation block
@property (assign,setter=_setFired:,nonatomic) BOOL fired;                                                      //@synthesize fired=_fired - In the implementation block
@property (nonatomic,readonly) double delay;                                                                    //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double interval;                                                                 //@synthesize interval=_interval - In the implementation block
-(void)start;
-(BOOL)fired;
-(id)init;
-(double)delay;
-(double)interval;
-(void)_setFired:(BOOL)arg1 ;
-(id)_handler;
-(NSObject*<OS_dispatch_source>)_currentTimer;
-(void)_setCurrentTimer:(id)arg1 ;
-(void)invalidate;
-(id)initWithDelay:(double)arg1 interval:(double)arg2 handler:(/*^block*/id)arg3 ;
@end
