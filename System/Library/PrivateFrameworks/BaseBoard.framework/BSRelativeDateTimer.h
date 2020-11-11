/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSPowerMonitorObserver.h>

@protocol BSRelativeDateTimerDelegate;
@class NSCalendar, NSTimer, NSDate, NSString;

@interface BSRelativeDateTimer : NSObject <BSPowerMonitorObserver> {

	NSCalendar* _gregorian;
	NSTimer* _timer;
	NSDate* _date;
	unsigned long long _currResolution;
	long long _currValue;
	id<BSRelativeDateTimerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BSRelativeDateTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setDate:(id)arg1 ;
-(id)init;
-(id<BSRelativeDateTimerDelegate>)delegate;
-(id)date;
-(void)setDelegate:(id<BSRelativeDateTimerDelegate>)arg1 ;
-(void)powerMonitorSystemDidWakeFromSleep:(id)arg1 ;
-(void)_fireForLocaleEvent:(id)arg1 ;
-(void)fireAndSchedule;
-(void)_fireAndUpdateTimerIfNecessary;
-(double)nextFireInterval;
-(void)invalidate;
-(void)dealloc;
@end
