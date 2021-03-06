/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/FBSServiceFacilityClientConfiguring.h>
#import <libobjc.A.dylib/FBSServiceFacilityClientMessaging.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class BSServiceConnectionEndpoint, NSString, BSServiceQuality, BSServiceInterface, NSObject, BSServiceConnection;

@interface FBSServiceFacilityClient : NSObject <FBSServiceFacilityClientConfiguring, FBSServiceFacilityClientMessaging, BSInvalidatable> {

	BSServiceConnectionEndpoint* _endpoint;
	NSString* _facilityID;
	BSServiceQuality* _serviceQuality;
	BSServiceInterface* _interface;
	id _configOnly_interfaceTarget;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _configured;
	os_unfair_lock_s _lock;
	BSServiceConnection* _lock_connection;
	BOOL _lock_connectionDenied;
	BOOL _lock_activated;
	BOOL _lock_invalidated;
	BOOL _uisHack;

}

@property (getter=isConfigured,nonatomic,readonly) BOOL configured;                    //@synthesize configured=_configured - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BSServiceQuality * serviceQuality;                      //@synthesize serviceQuality=_serviceQuality - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;              //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultShellEndpoint;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5 ;
-(void)_queue_handleError:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(void)_lock_invalidate;
-(void)activate;
-(NSString *)identifier;
-(void)_queue_handleMessage:(id)arg1 ;
-(BOOL)isConfigured;
-(void)setServiceQuality:(BSServiceQuality *)arg1 ;
-(NSString *)description;
-(BOOL)_isValid;
-(void)setCalloutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInterface:(id)arg1 ;
-(void)handleError:(id)arg1 ;
-(id)initWithConfigurator:(/*^block*/id)arg1 ;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 ;
-(void)_lock_activate;
-(void)setInterfaceTarget:(id)arg1 ;
-(void)setEndpoint:(id)arg1 ;
-(BSServiceQuality *)serviceQuality;
-(void)invalidate;
-(void)configureConnectMessage:(id)arg1 ;
-(void)dealloc;
@end

