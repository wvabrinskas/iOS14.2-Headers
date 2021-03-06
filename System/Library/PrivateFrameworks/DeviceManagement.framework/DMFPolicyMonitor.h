/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary, NSMutableArray;

@interface DMFPolicyMonitor : NSObject {

	int _firstUnlockToken;
	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _firstUnlockQueue;
	NSObject*<OS_dispatch_queue> _registrationCallbackQueue;
	NSMutableDictionary* _notificationTokensByPolicyMonitorIdentifier;
	NSMutableArray* _pendingRequests;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                                                //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) int firstUnlockToken;                                                           //@synthesize firstUnlockToken=_firstUnlockToken - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> firstUnlockQueue;                                  //@synthesize firstUnlockQueue=_firstUnlockQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> registrationCallbackQueue;                         //@synthesize registrationCallbackQueue=_registrationCallbackQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * notificationTokensByPolicyMonitorIdentifier;              //@synthesize notificationTokensByPolicyMonitorIdentifier=_notificationTokensByPolicyMonitorIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRequests;                                               //@synthesize pendingRequests=_pendingRequests - In the implementation block
+(id)remoteInterface;
+(const char*)mobileKeyBagFirstUnlockNotificationName;
+(BOOL)hasFirstUnlocked;
+(id)policyMonitor;
-(NSObject*<OS_dispatch_queue>)registrationCallbackQueue;
-(NSObject*<OS_dispatch_queue>)firstUnlockQueue;
-(NSMutableArray *)pendingRequests;
-(NSXPCConnection *)xpcConnection;
-(id)initWithXPCConnection:(id)arg1 ;
-(id)init;
-(id)requestPoliciesForTypes:(id)arg1 withError:(id*)arg2 ;
-(void)invalidatePolicyMonitor:(id)arg1 ;
-(void)addRegistration:(id)arg1 forPolicyMonitorIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)firstUnlockToken;
-(void)_dispatchRequest:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)notificationTokensByPolicyMonitorIdentifier;
-(void)requestPoliciesForTypes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

