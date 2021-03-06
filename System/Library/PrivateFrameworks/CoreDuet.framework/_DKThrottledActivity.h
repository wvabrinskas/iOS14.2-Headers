/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKSimpleKeyValueStore;
@class NSString;

@interface _DKThrottledActivity : NSObject {

	NSString* _namespace;
	id<_DKSimpleKeyValueStore> _store;

}

@property (nonatomic,readonly) id<_DKSimpleKeyValueStore> store; 
+(id)standardInstance;
-(void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(id)initWithStore:(id)arg1 namespace:(id)arg2 ;
-(void)performWithMinimumIntervalInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(void)performWithDelayInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(id)description;
-(void)performWithMinimumIntervalInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithMinimumIntervalInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(id<_DKSimpleKeyValueStore>)store;
-(void)performWithDelayInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)performWithMinimumIntervalInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(void)clearHistoryForName:(id)arg1 ;
-(void)performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithDelayInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)setDate:(id)arg1 forName:(id)arg2 ;
@end

