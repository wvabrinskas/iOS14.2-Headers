/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/ControlCenter/Bundles/TimerModule.bundle/TimerModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TimerModule/TimerModule-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface MTCCTimer : NSObject <NSCopying> {

	unsigned long long _state;
	double _duration;
	double _remainingTime;
	NSDate* _fireDate;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double remainingTime;                  //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,copy) NSDate * fireDate;                       //@synthesize fireDate=_fireDate - In the implementation block
-(void)setDuration:(double)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(NSDate *)fireDate;
-(unsigned long long)state;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(double)duration;
-(void)setFireDate:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

