/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKWorkoutRouteQueryClientInterface.h>

@class HKWorkoutRoute, NSString;

@interface HKWorkoutRouteQuery : HKQuery <HKWorkoutRouteQueryClientInterface> {

	/*^block*/id _dataHandler;
	HKWorkoutRoute* _series;

}

@property (copy) id dataHandler;                                    //@synthesize dataHandler=_dataHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
+(Class)configurationClass;
-(void)queue_deliverError:(id)arg1 ;
-(id)dataHandler;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)setDataHandler:(id)arg1 ;
-(void)client_deliverWorkoutRouteLocations:(id)arg1 isFinal:(BOOL)arg2 query:(id)arg3 ;
-(id)initWithRoute:(id)arg1 dataHandler:(/*^block*/id)arg2 ;
@end

