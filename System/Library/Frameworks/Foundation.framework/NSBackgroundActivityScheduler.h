/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NSBackgroundActivityScheduler : NSObject {

	id _private1;
	id _private2;
	id _private3;
	long long _flags;

}

@property (getter=isPreregistered) BOOL preregistered; 
@property (assign) double delay; 
@property (assign) id checkInHandler; 
@property (getter=_isAppRefresh) BOOL _appRefresh; 
@property (copy,readonly) NSString * identifier; 
@property (assign) long long qualityOfService; 
@property (assign) BOOL repeats; 
@property (assign) double interval; 
@property (assign) double tolerance; 
@property (readonly) BOOL shouldDefer; 
-(void)scheduleWithBlock:(/*^block*/id)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(BOOL)_isAppRefresh;
-(id)init;
-(void)setCheckInHandler:(id)arg1 ;
-(void)setDelay:(double)arg1 ;
-(double)delay;
-(long long)qualityOfService;
-(double)tolerance;
-(NSString *)identifier;
-(double)interval;
-(void)setRepeats:(BOOL)arg1 ;
-(id)checkInHandler;
-(void)setInterval:(double)arg1 ;
-(void)set_appRefresh:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_setAdditionalXPCActivityProperties:(id)arg1 ;
-(void)_updateCriteriaForCompletedActivity:(id)arg1 ;
-(void)_updateCriteria:(id)arg1 ;
-(BOOL)repeats;
-(void)setPreregistered:(BOOL)arg1 ;
-(void)invalidate;
-(BOOL)isPreregistered;
-(void)setTolerance:(double)arg1 ;
-(void)dealloc;
-(BOOL)shouldDefer;
@end

