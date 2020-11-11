/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPFMIPRegisterInfo.h>
#import <SPOwner/SPSettingsConfigurating.h>

@protocol SPBeaconManagerXPCProtocol, OS_dispatch_queue;
@class NSUUID, NSString, NSSet, NSDate, NSNumber, NSUserDefaults, FMXPCServiceDescription, FMXPCSession, NSOperationQueue, NSObject;

@interface SPSettingsConfiguration : NSObject <SPFMIPRegisterInfo, SPSettingsConfigurating> {

	NSUserDefaults* _sharedDefaults;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPBeaconManagerXPCProtocol> _proxy;
	id<SPBeaconManagerXPCProtocol> _userAgentProxy;
	id _serviceSettingsChangedNotificationToken;
	NSOperationQueue* _notificationQueue;
	NSString* _serviceState;
	NSSet* _serviceDisabledReasons;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) NSUUID * baUUID; 
@property (nonatomic,copy,readonly) NSString * serviceState; 
@property (nonatomic,copy,readonly) NSSet * serviceDisabledReasons; 
@property (nonatomic,copy,readonly) NSDate * beaconZoneCreationDate; 
@property (nonatomic,copy,readonly) NSNumber * beaconZoneCreationErrorCode; 
@property (nonatomic,copy,readonly) NSDate * lastKeyRollDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;                   //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                         //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPBeaconManagerXPCProtocol> proxy;                           //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) id<SPBeaconManagerXPCProtocol> userAgentProxy;                  //@synthesize userAgentProxy=_userAgentProxy - In the implementation block
@property (assign,nonatomic,__weak) id serviceSettingsChangedNotificationToken;              //@synthesize serviceSettingsChangedNotificationToken=_serviceSettingsChangedNotificationToken - In the implementation block
@property (nonatomic,retain) NSOperationQueue * notificationQueue;                           //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,retain) NSUserDefaults * sharedDefaults;                                //@synthesize sharedDefaults=_sharedDefaults - In the implementation block
@property (nonatomic,copy) NSString * serviceState;                                          //@synthesize serviceState=_serviceState - In the implementation block
@property (nonatomic,copy) NSSet * serviceDisabledReasons;                                   //@synthesize serviceDisabledReasons=_serviceDisabledReasons - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
-(void)setNotificationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)notificationQueue;
-(id<SPBeaconManagerXPCProtocol>)proxy;
-(void)setProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(id)init;
-(NSString *)serviceState;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(NSUUID *)baUUID;
-(id<SPBeaconManagerXPCProtocol>)userAgentProxy;
-(FMXPCServiceDescription *)serviceDescription;
-(void)setSession:(FMXPCSession *)arg1 ;
-(NSUserDefaults *)sharedDefaults;
-(void)_invalidate;
-(void)setServiceState:(NSString *)arg1 ;
-(FMXPCSession *)session;
-(void)setUserAgentProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDate *)beaconZoneCreationDate;
-(NSNumber *)beaconZoneCreationErrorCode;
-(NSDate *)lastKeyRollDate;
-(id)serviceSettingsConfiguration;
-(NSSet *)serviceDisabledReasons;
-(void)setServiceState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)serviceSettingsChangedNotificationToken;
-(void)setServiceSettingsChangedNotificationToken:(id)arg1 ;
-(void)beginRefreshingServiceStateWithBlock:(/*^block*/id)arg1 ;
-(void)setSharedDefaults:(NSUserDefaults *)arg1 ;
-(void)setServiceDisabledReasons:(NSSet *)arg1 ;
@end
