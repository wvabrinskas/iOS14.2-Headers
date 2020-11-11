/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/DNDSBackingStoreRecord.h>

@class NSDictionary, NSDate, NSString;

@interface DNDSMetricsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord> {

	NSDictionary* _metricsByDay;
	NSDate* _lastDailyHeartbeat;
	NSDictionary* _metricsByWeek;
	NSDate* _lastWeeklyHeartbeat;
	NSDictionary* _metricsByMonth;
	NSDate* _lastMonthlyHeartbeat;

}

@property (nonatomic,copy,readonly) NSDictionary * metricsByDay;                //@synthesize metricsByDay=_metricsByDay - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastDailyHeartbeat;                //@synthesize lastDailyHeartbeat=_lastDailyHeartbeat - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metricsByWeek;               //@synthesize metricsByWeek=_metricsByWeek - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastWeeklyHeartbeat;               //@synthesize lastWeeklyHeartbeat=_lastWeeklyHeartbeat - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metricsByMonth;              //@synthesize metricsByMonth=_metricsByMonth - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastMonthlyHeartbeat;              //@synthesize lastMonthlyHeartbeat=_lastMonthlyHeartbeat - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3 ;
+(id)newWithDictionaryRepresentation:(id)arg1 ;
+(id)backingStoreWithFileURL:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithRecord:(id)arg1 ;
-(NSDictionary *)metricsByDay;
-(NSDictionary *)metricsByWeek;
-(NSDictionary *)metricsByMonth;
-(NSDate *)lastDailyHeartbeat;
-(NSDate *)lastWeeklyHeartbeat;
-(NSDate *)lastMonthlyHeartbeat;
-(id)_initWithMetricsByDay:(id)arg1 lastDailyHeartbeat:(id)arg2 metricsByWeek:(id)arg3 lastWeeklyHeartbeat:(id)arg4 metricsByMonth:(id)arg5 lastMonthlyHeartbeat:(id)arg6 ;
@end
