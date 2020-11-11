/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDSPNotificationObserver.h>
#import <libobjc.A.dylib/HDSPSource.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@class HDSPEnvironment, NSString;

@interface HDSPSleepScheduleModelMigrationManager : NSObject <HDSPNotificationObserver, HDSPSource, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) BOOL dontNotify; 
@property (nonatomic,readonly) BOOL dontSync; 
@property (nonatomic,readonly) id<HDSPSource> targetSource; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
-(void)environmentWillBecomeReady:(id)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(id)_migrateSleepDurationFromHealthKit;
-(BOOL)needDataMigration;
-(void)migrateToMobileTimerIfNecessary;
-(id)migrateFromHealthKitIfNecessary;
-(id)_migrateSleepScreen;
-(HDSPEnvironment *)environment;
-(NSString *)sourceIdentifier;
-(id)_migrateSleepScheduleFromMobileTimer;
-(id)performDataMigration;
@end
