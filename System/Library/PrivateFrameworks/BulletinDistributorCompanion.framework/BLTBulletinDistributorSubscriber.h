/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BLTPingService.h>

@protocol OS_dispatch_queue, BLTBulletinDistributorSubscriberDelegate, BLTBulletinDistributorSubscriberDeviceDelegate, BLTPingSubscribing;
@class NSMutableDictionary, NSObject, NSString, NSXPCConnection, NSSet;

@interface BLTBulletinDistributorSubscriber : NSObject <BLTPingService> {

	NSMutableDictionary* _subscriptions;
	NSObject*<OS_dispatch_queue> _queue;
	id<BLTBulletinDistributorSubscriberDelegate> _delegate;
	id<BLTBulletinDistributorSubscriberDeviceDelegate> _deviceDelegate;
	NSString* _machServiceName;
	id<BLTPingSubscribing> _client;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) id<BLTPingSubscribing> client;                                        //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                         //@synthesize connection=_connection - In the implementation block
@property (copy) NSString * machServiceName;                                                       //@synthesize machServiceName=_machServiceName - In the implementation block
@property (__weak) id<BLTBulletinDistributorSubscriberDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<BLTBulletinDistributorSubscriberDeviceDelegate> deviceDelegate;              //@synthesize deviceDelegate=_deviceDelegate - In the implementation block
@property (nonatomic,readonly) NSSet * sectionIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithClient:(id)arg1 ;
-(void)sendBulletinSummary:(id)arg1 ;
-(void)_connectIfNecessary;
-(void)setMachServiceName:(NSString *)arg1 ;
-(NSSet *)sectionIDs;
-(NSString *)machServiceName;
-(id)init;
-(id<BLTBulletinDistributorSubscriberDelegate>)delegate;
-(void)setClient:(id<BLTPingSubscribing>)arg1 ;
-(id<BLTPingSubscribing>)client;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<BLTBulletinDistributorSubscriberDelegate>)arg1 ;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3 ackAllowedOnLocalConnection:(BOOL)arg4 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(void)unsubscribeFromSectionID:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setDeviceDelegate:(id<BLTBulletinDistributorSubscriberDeviceDelegate>)arg1 ;
-(id<BLTBulletinDistributorSubscriberDeviceDelegate>)deviceDelegate;
-(void)subscribeWithMachServiceName:(id)arg1 ;
@end
